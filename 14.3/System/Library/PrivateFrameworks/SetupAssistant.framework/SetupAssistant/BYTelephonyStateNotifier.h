@interface BYTelephonyStateNotifier : NSObject

@property (nonatomic) int simUnlockNotificationToken;

+ (unsigned long long)retrieveSIMUnlockStateFromToken:(int)a0;

- (id)initForNotifying;
- (unsigned long long)currentSIMUnlockState;
- (void)dealloc;
- (void)_beginObservingWithNotificationQueue:(id)a0 notificationBlock:(id /* block */)a1;
- (id)initWithNotificationQueue:(id)a0 notificationBlock:(id /* block */)a1;
- (void)notifySIMUnlockStateChangedTo:(unsigned long long)a0;
- (void)_endObservingState;

@end
