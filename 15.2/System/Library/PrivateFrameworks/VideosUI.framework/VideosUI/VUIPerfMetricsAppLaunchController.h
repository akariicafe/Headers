@class NSDictionary;

@interface VUIPerfMetricsAppLaunchController : NSObject

@property (copy, nonatomic) NSDictionary *appLaunchData;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)_setAppLaunchFieldWithData:(id)a0;
- (void)recordAppLaunchEventWithEventType:(id)a0;

@end
