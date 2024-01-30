@interface _BRKSignificantTimeChangeNotifier : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)_notify:(id)a0;
- (void)triggerNotification;

@end
