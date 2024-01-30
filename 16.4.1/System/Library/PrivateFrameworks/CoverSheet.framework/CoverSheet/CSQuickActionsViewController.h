@class CSCoverSheetViewController, NSString, SBUIFlashlightController, SBLockScreenDefaults, CSLockScreenSettings;
@protocol SBFLockOutStatusProvider, CSCameraPrewarming;

@interface CSQuickActionsViewController : CSCoverSheetViewControllerBase <CSQuickActionsDelegate, SBUIFlashlightObserver> {
    SBUIFlashlightController *_flashlight;
    CSLockScreenSettings *_prototypeSettings;
    SBLockScreenDefaults *_lockScreenDefaults;
}

@property (nonatomic) BOOL animatingToCamera;
@property (weak, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (retain, nonatomic) id<SBFLockOutStatusProvider> lockOutController;
@property (retain, nonatomic) id<CSCameraPrewarming> cameraPrewarmer;
@property (nonatomic) BOOL suppressingVisibleChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)deviceSupportsButtons;
+ (Class)viewClass;

- (long long)presentationStyle;
- (void)flashlightAvailabilityDidChange:(BOOL)a0;
- (void)_addStateCaptureHandlers;
- (long long)presentationPriority;
- (void)flashlightLevelDidChange:(unsigned long long)a0;
- (void)_resetIdleTimer;
- (void)_updateFlashlightButtonAvailability;
- (id)quickActionsViewIfLoaded;
- (BOOL)_isFlashlightOn;
- (void)_tearDownFlashlightIfOff;
- (BOOL)handleEvent:(id)a0;
- (void)_tearDownFlashlight;
- (void)_toggleFlashlight;
- (void)_featureLockStateDidChangeNotification:(id)a0;
- (void)_updateFlashlightButtonAvailabilityRespectingSuppression:(BOOL)a0;
- (BOOL)_shouldPrelaunchOnTouch;
- (void)_updateFlashlightButtonState;
- (void)fireActionForButton:(id)a0;
- (long long)presentationType;
- (void)touchEndedForButton:(id)a0;
- (BOOL)isPortrait;
- (id)initWithLockScreenDefaults:(id)a0;
- (void)dealloc;
- (BOOL)_supportsCamera;
- (BOOL)interpretsLocationAsContent:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)allowsCameraPress;
- (void)_launchCamera;
- (void)touchBeganForButton:(id)a0;
- (id)quickActionsView;
- (id)init;
- (BOOL)_shouldPrewarmOnTouch;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)hasFlashlight;
- (void)_deviceBlockStateDidChangeNotification:(id)a0;
- (BOOL)hasCamera;
- (void).cxx_destruct;
- (BOOL)allowsFlashlightInteraction;
- (BOOL)allowsFlashlight;
- (void)loadView;
- (void)_setupFlashlight;
- (void)viewWillAppear:(BOOL)a0;

@end
