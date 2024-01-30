@class NSString, CPSClipOverlayViewController, SBAppClipOverlayCoordinator;

@interface SBAppClipOverlayViewController : SBFTouchPassThroughViewController <SBAppClipOverlayCoordinatorParticipant, SBAppClipOverlayViewDelegate, BSInvalidatable>

@property (retain, nonatomic) NSString *webClipIdentifier;
@property (retain, nonatomic) SBAppClipOverlayCoordinator *coordinator;
@property (retain, nonatomic) CPSClipOverlayViewController *overlayViewController;
@property (nonatomic) BOOL displayedOverPlaceholder;
@property (nonatomic) long long sceneActivationState;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *sceneIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredStatusBarStyle;
- (void).cxx_destruct;
- (id)view;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)invalidate;
- (id)initWithCoordinator:(id)a0 bundleIdentifier:(id)a1 sceneIdentifier:(id)a2;
- (void)setDisplayedOverPlaceholder:(BOOL)a0 animated:(BOOL)a1;
- (void)setSceneActivationState:(long long)a0 animated:(BOOL)a1;
- (void)appClipOverlayCoordinator:(id)a0 requestsSurrenderOfViewController:(id)a1;
- (id)participantName;
- (void)appClipPlaceholderViewDidInvalidate:(id)a0;

@end
