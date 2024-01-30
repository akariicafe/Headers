@interface NTKSignificantTimeChangeLogger : NSObject

+ (id)sharedInstance;
+ (void)beginLogging;

- (id)init;
- (void)_handleNotification:(id)a0;
- (void)_startObserving;
- (void)_logNotificationReceiptWithName:(id)a0;

@end
