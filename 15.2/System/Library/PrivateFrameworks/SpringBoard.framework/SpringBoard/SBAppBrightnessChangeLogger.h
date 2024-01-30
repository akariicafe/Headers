@class NSString, NSDate;

@interface SBAppBrightnessChangeLogger : NSObject {
    NSString *_bundleID;
    long long _brightnessLevel;
    NSDate *_eventTimestamp;
}

+ (id)sharedInstance;

- (void)_screenLocked;
- (void).cxx_destruct;
- (id)init;
- (void)_publishMetricsIfNeeded;
- (void)_publishMetrics;
- (void)noteApp:(id)a0 setScreenBrightness:(double)a1;

@end
