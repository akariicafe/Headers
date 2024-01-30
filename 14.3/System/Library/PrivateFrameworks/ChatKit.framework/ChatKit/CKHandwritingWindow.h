@interface CKHandwritingWindow : UIWindow

@property (nonatomic) BOOL eatOrientationEvents;

- (BOOL)_canAffectStatusBarAppearance;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)a0;

@end
