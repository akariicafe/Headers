@interface NTKSignificantTimeChangeLogger : NSObject

+ (id)sharedInstance;
+ (void)beginLogging;

- (void)_handleNotification:(id)a0;
- (id)init;
- (void)_startObserving;
- (void)_logNotificationReceiptWithName:(id)a0;

@end
