@class BrightnessSystemClient, CSAccessorySleeveView, SBFLockScreenDateViewController, BCBatteryDeviceController, NSString, _UILegibilitySettings;
@protocol SBFDateProviding;

@interface CSAccessorySleeveViewController : CSAccessoryViewController <BCBatteryDeviceObserving>

@property (retain, nonatomic) SBFLockScreenDateViewController *dateViewController;
@property (retain, nonatomic) SBFLockScreenDateViewController *secodaryDateViewController;
@property (retain, nonatomic) BCBatteryDeviceController *batteryDeviceController;
@property (retain, nonatomic) CSAccessorySleeveView *sleeveView;
@property (nonatomic) BOOL chargingAnimationVisible;
@property (retain, nonatomic) BrightnessSystemClient *brightnessClient;
@property (retain, nonatomic) id<SBFDateProviding> dateProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleBounds;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accessoryView;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithAccessory:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)connectedDevicesDidChange:(id)a0;
- (void)viewDidLoad;
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
