@class BrightnessSystemClient, CSMagSafeAccessorySleeveView, SBFLockScreenDateViewController, BCBatteryDeviceController, NSString, _UILegibilitySettings;
@protocol SBFDateProviding;

@interface CSMagSafeAccessorySleeveViewController : CSMagSafeAccessoryViewController <BCBatteryDeviceObserving>

@property (retain, nonatomic) SBFLockScreenDateViewController *dateViewController;
@property (retain, nonatomic) SBFLockScreenDateViewController *secodaryDateViewController;
@property (retain, nonatomic) BCBatteryDeviceController *batteryDeviceController;
@property (retain, nonatomic) CSMagSafeAccessorySleeveView *sleeveView;
@property (nonatomic) BOOL chargingAnimationVisible;
@property (retain, nonatomic) BrightnessSystemClient *brightnessClient;
@property (retain, nonatomic) id<SBFDateProviding> dateProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleBounds;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectedDevicesDidChange:(id)a0;
- (void)viewDidLoad;
- (id)accessoryView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;
- (id)initWithAccessory:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (double)animationDurationBeforeDismissal;
- (BOOL)hasChargingAnimation;
- (BOOL)showingChargingAnimation;
- (BOOL)isStatic;
- (void)transitionChargingViewVisible:(BOOL)a0 chargingInfo:(id)a1;
- (double)chargingAnimationDuration;
- (void)_updateOverrideFloor;
- (void)_removeOverrideFloor;
- (void)updateViewWithBatteryCharging:(BOOL)a0;

@end
