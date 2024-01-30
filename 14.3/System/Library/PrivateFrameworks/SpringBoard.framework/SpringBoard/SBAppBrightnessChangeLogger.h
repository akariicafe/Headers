@class NSString, NSDate;

@interface SBAppBrightnessChangeLogger : NSObject {
    NSString *_bundleID;
    long long _brightnessLevel;
    NSDate *_eventTimestamp;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_screenLocked;
- (void)_publishMetricsIfNeeded;
- (void)_publishMetrics;
- (void)noteApp:(id)a0 setScreenBrightness:(double)a1;

@end
