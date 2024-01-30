@class CPDashboardButton, NSArray, CPSPausedCardView, NSString, CPSDashboardManeuversCardView, UIView, NSLayoutConstraint;
@protocol CPDashboardClientInterface;

@interface CPSDashboardGuidanceViewController : UIViewController <CPSButtonDelegate, CPSNavigationDisplaying>

@property (retain, nonatomic) NSArray *dashboardButtons;
@property (retain, nonatomic) CPSDashboardManeuversCardView *maneuversCardView;
@property (retain, nonatomic) CPSPausedCardView *pausedCardView;
@property (retain, nonatomic) CPDashboardButton *fakeDashboardButton;
@property (retain, nonatomic) UIView *shortcutButtonsContainerView;
@property (retain, nonatomic) NSLayoutConstraint *shortcutButtonsContainerViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *shortcutButtonsContainerViewTrailingConstraint;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) NSArray *spacingGuides;
@property (retain, nonatomic) id<CPDashboardClientInterface> dashboardClient;
@property (nonatomic) BOOL fakesDashboardSupport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didSelectButton:(id)a0;
- (void)showManeuvers:(id)a0 usingDisplayStyles:(id)a1;
- (void)_animateShortcutContainerViewIn;
- (void)_animateShortcutContainerViewOut;
- (void)_focusHighlightColorChanged:(id)a0;
- (void)_launchApp:(id)a0;
- (void)_setContentReady;
- (void)_setupFakeButtonIfNecessary;
- (void)_transitionFromViews:(id)a0 inView:(id)a1 animated:(BOOL)a2;
- (void)navigator:(id)a0 didEndTrip:(BOOL)a1;
- (void)navigator:(id)a0 pausedTripForReason:(unsigned long long)a1 description:(id)a2 usingColor:(id)a3;
- (void)setShortCutButtons:(id)a0;
- (void)updateEstimates:(id)a0 forManeuver:(id)a1;

@end
