@interface BYTelephonyStateNotifier : NSObject

@property (nonatomic) int simUnlockNotificationToken;

+ (unsigned long long)retrieveSIMUnlockStateFromToken:(int)a0;

- (unsigned long long)currentSIMUnlockState;
- (id)initWithNotificationQueue:(id)a0 notificationBlock:(id /* block */)a1;
- (void)_beginObservingWithNotificationQueue:(id)a0 notificationBlock:(id /* block */)a1;
- (void)dealloc;
- (void)notifySIMUnlockStateChangedTo:(unsigned long long)a0;
- (id)initForNotifying;
- (void)_endObservingState;

@end
