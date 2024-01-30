@interface SBRotationLockHUDViewController : SBHUDViewController

@property (nonatomic, getter=isLocked) BOOL locked;

- (id)init;
- (void)_updateLockedImage;

@end
