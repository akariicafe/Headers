@class HUCameraActivityZoneCanvasView, HMCameraProfile, HUCameraLiveStreamViewController, UILabel, NSArray, NSString;

@interface HUCameraActivityZoneEditorViewController : UIViewController <HUCameraActivityZoneCanvasDelegate, HFCameraLiveStreamControllerDelegate>

@property (retain, nonatomic) HMCameraProfile *cameraProfile;
@property (retain, nonatomic) HUCameraActivityZoneCanvasView *activityZoneCanvas;
@property (retain, nonatomic) UILabel *tutorialLabel;
@property (retain, nonatomic) HUCameraLiveStreamViewController *liveStreamViewController;
@property (readonly, nonatomic) BOOL hasActivityZoneChanges;
@property (retain, nonatomic) NSArray *initialActivityZones;
@property (nonatomic) BOOL initialSettingDetectsInclusionZones;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_updateToolbar;
- (void)_updateNavigationBar;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithCameraProfile:(id)a0;
- (void)cancelEditing;
- (void)streamControllerStateDidUpdate:(id)a0;
- (void)displayActivityZoneState;
- (void)_refreshUI;
- (void)displayZoneOverlapAlert;
- (void)displayLineOverlapAlert;
- (void)displayMoveOverlapAlert;
- (void)_updateTutorialText;
- (void)invertZones;
- (id)_addZoneButton;
- (void)commitChangesAndDismissEditor;
- (void)displayAlertWithTitle:(id)a0 message:(id)a1;
- (void)_updateViewsForTraitCollection;
- (void)displayUnCommittedChangesAlert;
- (void)_displayProgressIndicatorWhileLoading;
- (void)displayErrorAlert;
- (void)didUpdateActivityZoneCanvas:(id)a0;
- (void)didUpdateActivityZone:(id)a0;
- (void)didAttemptToCreateOverlappingZoneForCanvas:(id)a0;
- (void)didAttemptToAddOverlappingLineForCanvas:(id)a0;
- (void)didAttemptToMovePointToOverlapZoneForCanvas:(id)a0;

@end
