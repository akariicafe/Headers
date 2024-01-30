@interface BYTelephonyStateNotifier : NSObject

@property (nonatomic) int simUnlockNotificationToken;

+ (unsigned long long)retrieveSIMUnlockStateFromToken:(int)a0;

- (id)initForNotifying;
- (void)notifySIMUnlockStateChangedTo:(unsigned long long)a0;
- (void)_beginObservingWithNotificationQueue:(id)a0 notificationBlock:(id /* block */)a1;
- (void)_endObservingState;
- (unsigned long long)currentSIMUnlockState;
- (void)dealloc;
- (id)initWithNotificationQueue:(id)a0 notificationBlock:(id /* block */)a1;

@end
