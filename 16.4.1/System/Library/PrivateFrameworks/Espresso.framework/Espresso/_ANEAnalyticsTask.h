@class NSDictionary;

@interface _ANEAnalyticsTask : NSObject

@property (readonly, nonatomic) NSDictionary *metrics;

+ (id)objectWithMetrics:(id)a0;

- (id)initWithMetrics:(id)a0;
- (id)serialize;
- (void).cxx_destruct;

@end
