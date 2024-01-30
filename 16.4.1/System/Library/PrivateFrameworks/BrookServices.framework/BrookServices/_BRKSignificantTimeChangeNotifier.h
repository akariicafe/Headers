@interface _BRKSignificantTimeChangeNotifier : NSObject

+ (id)sharedInstance;

- (void)_notify:(id)a0;
- (void)dealloc;
- (id)init;
- (void)triggerNotification;

@end
