@interface SBSUIInCallWindowScene : UIWindowScene

@property (nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic) int preferredStatusBarStyleOverridesToSuppress;
@property (nonatomic) BOOL supportsDeviceLockEvents;
@property (nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
@property (nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic, getter=isCallConnected) BOOL callConnected;
@property (readonly, nonatomic) long long presentationMode;
@property (readonly, nonatomic, getter=isDeviceAttachedToWindowedAccessory) BOOL deviceAttachedToWindowedAccessory;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } windowedAccessoryCutoutFrameInScreen;

- (void)_handleHardwareButtonEventSceneActions:(id)a0;
- (void)_handleDeviceLockAction:(id)a0;
- (id)initWithSession:(id)a0 connectionOptions:(id)a1;
- (void)requestTransitionToPresentationMode:(long long)a0 isUserInitiated:(BOOL)a1;
- (void)requestTransitionToPresentationMode:(long long)a0 isUserInitiated:(BOOL)a1 analyticsSource:(id)a2;
- (void)requestTransitionToPresentationMode:(long long)a0;
- (void)_updatePresentationMode:(long long)a0 analyticsSource:(id)a1;
- (void)_handleFrameChanged;
- (void)_setAttachedToWindowedAccessory:(BOOL)a0 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
