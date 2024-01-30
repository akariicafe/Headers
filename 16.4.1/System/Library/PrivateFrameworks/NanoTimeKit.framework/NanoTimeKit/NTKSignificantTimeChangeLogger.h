@interface NTKSignificantTimeChangeLogger : NSObject

+ (id)sharedInstance;
+ (void)beginLogging;

- (void)_handleNotification:(id)a0;
- (void)_startObserving;
- (id)init;
- (void)_logNotificationReceiptWithName:(id)a0;

@end
