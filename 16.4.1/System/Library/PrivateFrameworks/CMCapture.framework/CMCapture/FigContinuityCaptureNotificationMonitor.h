@interface FigContinuityCaptureNotificationMonitor : NSObject

+ (id)sharedInstance;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (void)_handleContinuityCaptureNotification:(id)a0;

@end
