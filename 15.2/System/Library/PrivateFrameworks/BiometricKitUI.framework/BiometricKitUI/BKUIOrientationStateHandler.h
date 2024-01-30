@interface BKUIOrientationStateHandler : NSObject

@property (nonatomic) int rawOrientationToken;
@property (nonatomic) int orientationLockToken;
@property (nonatomic) int rotationLockNotificationToken;
@property (nonatomic) int orientationNotificationToken;
@property (nonatomic) long long lastKownOrientation;

+ (unsigned long long)bkui_getState:(int)a0;

- (long long)rawDeviceOrientationIgnoringOrientationLocks;
- (id)init;
- (void)dealloc;
- (void)_invalidateTokenIfNeeded:(int)a0;
- (BOOL)rotationLockStatusIsLocked;
- (void)registerRotationObserver:(id /* block */)a0;
- (void)registerRotationLockObserver:(id /* block */)a0;

@end
