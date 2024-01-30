@class UIView, MRUMirroringController, NSString, NSURL, MRUActivityMirroringView, BSAction, UIViewController, UIColor;
@protocol SBUISystemApertureElement, SBUISystemApertureAccessoryView;

@interface MRUActivityMirroringViewController : UIViewController <MRUMirroringControllerDelegate, SBUISystemApertureElement, SBUISystemApertureElementProviding>

@property (retain, nonatomic) MRUActivityMirroringView *view;
@property (retain, nonatomic) MRUActivityMirroringView *viewIfLoaded;
@property (retain, nonatomic) MRUMirroringController *mirroringController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long activeLayoutMode;
@property (readonly, nonatomic) long long contentRole;
@property (readonly, nonatomic) long long preferredLayoutMode;
@property (readonly, nonatomic) long long maximumLayoutMode;
@property (readonly, nonatomic) double preferredHeightForBottomSafeArea;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *associatedScenePersistenceIdentifier;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, nonatomic) BSAction *launchAction;
@property (readonly, nonatomic) BOOL preventsInteractiveDismissal;
@property (readonly, nonatomic) BOOL preventsAutomaticDismissal;
@property (readonly, nonatomic) long long minimumLayoutMode;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *leadingView;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *trailingView;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *minimalView;
@property (readonly, nonatomic) unsigned long long statusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredCustomAspectRatio;
@property (readonly, nonatomic) long long preferredCustomLayout;
@property (readonly, nonatomic) unsigned long long presentationBehaviors;
@property (readonly, copy, nonatomic) UIColor *keyColor;
@property (nonatomic) unsigned long long minimalViewLayoutAxis;
@property (readonly, nonatomic) UIView<SBUISystemApertureAccessoryView> *detachedMinimalView;
@property (nonatomic) BOOL canRequestAlertingAssertion;
@property (readonly, nonatomic) BOOL attachedMinimalViewRequiresZeroPadding;
@property (readonly, nonatomic) UIViewController<SBUISystemApertureElement> *systemApertureElementViewController;
@property (readonly, weak, nonatomic) id<SBUISystemApertureElement> systemApertureElement;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)updateState;
- (void)mirroringController:(id)a0 didChangeOutputDevice:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)stopMirroring:(id)a0;

@end
