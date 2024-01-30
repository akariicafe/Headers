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

+ (Class)viewClass;
+ (BOOL)deviceSupportsButtons;

- (BOOL)isPortrait;
- (BOOL)_isFlashlightOn;
- (BOOL)_shouldPrewarmOnTouch;
- (void)_addStateCaptureHandlers;
- (BOOL)allowsFlashlight;
- (id)initWithLockScreenDefaults:(id)a0;
- (void)_featureLockStateDidChangeNotification:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (long long)presentationStyle;
- (void)_toggleFlashlight;
- (void)touchBeganForButton:(id)a0;
- (BOOL)allowsCameraPress;
- (void)_resetIdleTimer;
- (long long)presentationPriority;
- (void)_setupFlashlight;
- (BOOL)allowsFlashlightInteraction;
- (void)_updateFlashlightButtonAvailability;
- (id)quickActionsViewIfLoaded;
- (void)_launchCamera;
- (void)loadView;
- (void)flashlightAvailabilityDidChange:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_deviceBlockStateDidChangeNotification:(id)a0;
- (void)_updateFlashlightButtonAvailabilityRespectingSuppression:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateFlashlightButtonState;
- (id)init;
- (BOOL)_supportsCamera;
- (void)fireActionForButton:(id)a0;
- (void)_tearDownFlashlightIfOff;
- (BOOL)_shouldPrelaunchOnTouch;
- (BOOL)hasCamera;
- (void)flashlightLevelDidChange:(unsigned long long)a0;
- (id)quickActionsView;
- (void)_tearDownFlashlight;
- (void)dealloc;
- (BOOL)hasFlashlight;
- (void)touchEndedForButton:(id)a0;

@end
