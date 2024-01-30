@interface TIStatusBarStyleOverrideLoggingCapture : NSObject

+ (long long *)_loggingCaptureOverrideCountPtr;
+ (long long)_decrementLoggingCaptureOverride;
+ (long long)_incrementLoggingCaptureOverride;
+ (void)_statusBarStyleOverrideLoggingCapture:(BOOL)a0;
+ (void)acquireLoggingCaptureOverride;
+ (void)releaseLoggingCaptureOverride;

- (void)dealloc;
- (id)init;

@end
