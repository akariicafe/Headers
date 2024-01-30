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

- (void)_addStateCaptureHandlers;
- (long long)presentationStyle;
- (BOOL)isPortrait;
- (long long)presentationPriority;
- (void)_resetIdleTimer;
- (void)_featureLockStateDidChangeNotification:(id)a0;
- (long long)presentationType;
- (void)_updateFlashlightButtonAvailability;
- (void)flashlightAvailabilityDidChange:(BOOL)a0;
- (id)quickActionsView;
- (void)touchEndedForButton:(id)a0;
- (void).cxx_destruct;
- (void)flashlightLevelDidChange:(unsigned long long)a0;
- (BOOL)hasFlashlight;
- (void)dealloc;
- (BOOL)_shouldPrewarmOnTouch;
- (void)loadView;
- (void)_toggleFlashlight;
- (BOOL)handleEvent:(id)a0;
- (BOOL)allowsFlashlightInteraction;
- (void)_updateFlashlightButtonAvailabilityRespectingSuppression:(BOOL)a0;
- (BOOL)_supportsCamera;
- (void)viewWillAppear:(BOOL)a0;
- (void)_deviceBlockStateDidChangeNotification:(id)a0;
- (BOOL)_isFlashlightOn;
- (void)_setupFlashlight;
- (BOOL)hasCamera;
- (void)_updateFlashlightButtonState;
- (void)touchBeganForButton:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)allowsCameraPress;
- (BOOL)allowsFlashlight;
- (void)_launchCamera;
- (BOOL)_shouldPrelaunchOnTouch;
- (id)quickActionsViewIfLoaded;
- (void)_tearDownFlashlight;
- (void)fireActionForButton:(id)a0;
- (void)_tearDownFlashlightIfOff;

@end
