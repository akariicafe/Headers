@interface TIStatusBarStyleOverrideLoggingCapture : NSObject

+ (void)releaseLoggingCaptureOverride;
+ (void)acquireLoggingCaptureOverride;
+ (long long *)_loggingCaptureOverrideCountPtr;
+ (long long)_incrementLoggingCaptureOverride;
+ (long long)_decrementLoggingCaptureOverride;
+ (void)_statusBarStyleOverrideLoggingCapture:(BOOL)a0;

- (id)init;
- (void)dealloc;

@end
