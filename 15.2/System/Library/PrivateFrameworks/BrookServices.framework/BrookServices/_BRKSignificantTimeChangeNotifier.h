@interface _BRKSignificantTimeChangeNotifier : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)_notify:(id)a0;
- (void)dealloc;
- (void)triggerNotification;

@end
