@class GPBStringFloatDictionary;

@interface Metrics : GPBMessage

@property (retain, nonatomic) GPBStringFloatDictionary *modelMetrics;
@property (readonly, nonatomic) unsigned long long modelMetrics_Count;

+ (id)descriptor;

@end
