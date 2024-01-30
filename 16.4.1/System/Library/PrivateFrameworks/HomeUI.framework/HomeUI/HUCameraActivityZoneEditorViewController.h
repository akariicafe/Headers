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

- (void)_updateNavigationBar;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)_updateToolbar;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCameraProfile:(id)a0;
- (void)cancelEditing;
- (void)streamControllerStateDidUpdate:(id)a0;
- (id)_addZoneButton;
- (void)_displayProgressIndicatorWhileLoading;
- (void)_refreshUI;
- (void)_updateTutorialText;
- (void)_updateViewsForTraitCollection;
- (void)commitChangesAndDismissEditor;
- (void)didAttemptToAddOverlappingLineForCanvas:(id)a0;
- (void)didAttemptToCreateOverlappingZoneForCanvas:(id)a0;
- (void)didAttemptToMovePointToOverlapZoneForCanvas:(id)a0;
- (void)didUpdateActivityZone:(id)a0;
- (void)didUpdateActivityZoneCanvas:(id)a0;
- (void)displayActivityZoneState;
- (void)displayAlertWithTitle:(id)a0 message:(id)a1;
- (void)displayErrorAlert;
- (void)displayLineOverlapAlert;
- (void)displayMoveOverlapAlert;
- (void)displayUnCommittedChangesAlert;
- (void)displayZoneOverlapAlert;
- (void)invertZones;

@end
