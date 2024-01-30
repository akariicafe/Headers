@class NSString;

@interface SBAppBrightnessMetricData : SBAWDMetricData

@property (copy, nonatomic) NSString *appBundleID;
@property (nonatomic) unsigned long long brightness;
@property (nonatomic) unsigned long long duration;

- (void).cxx_destruct;

@end
