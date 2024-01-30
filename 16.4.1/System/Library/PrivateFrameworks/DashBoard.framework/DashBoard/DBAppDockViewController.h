@class UIStackView, NSString, NSArray, DBEnvironmentConfiguration, DBNowPlayingObserver, DBAppHistory, DBAppDockButton, UIColor;
@protocol DBIconProviding, DBAppDockViewControllerDelegate;

@interface DBAppDockViewController : UIViewController <DBNavigationStateObserving, DBNowPlayingDelegate, SiriPresentationIntentUsageDelegate>

@property (retain, nonatomic) DBAppDockButton *navigationAppButton;
@property (retain, nonatomic) NSArray *navigationAppButtonSizeConstraints;
@property (retain, nonatomic) DBAppDockButton *audioAppButton;
@property (retain, nonatomic) NSArray *audioAppButtonSizeConstraints;
@property (retain, nonatomic) DBAppDockButton *otherAppButton;
@property (retain, nonatomic) NSArray *otherAppButtonSizeConstraints;
@property (retain, nonatomic) UIStackView *dockItemStackView;
@property (retain, nonatomic) NSArray *orderedAppItems;
@property (retain, nonatomic) DBNowPlayingObserver *nowPlayingObserver;
@property (weak, nonatomic) id<DBIconProviding> iconProvider;
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration;
@property (readonly, nonatomic) DBAppHistory *appHistory;
@property (weak, nonatomic) id<DBAppDockViewControllerDelegate> appDockViewControllerDelegate;
@property (copy, nonatomic) NSString *activeBundleIdentifier;
@property (nonatomic, getter=isDockEnabled) BOOL dockEnabled;
@property (retain, nonatomic) UIColor *buttonFocusHighlightColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)activeIntentWithBundleId:(id)a0;
- (void)_refreshAppDock;
- (id)_buttonSizeConstraintsForButton:(id)a0;
- (void)_dockButtonPressed:(id)a0;
- (id)_generateOrderedAppItems;
- (void)_updateAudioButtonSizeConstraints;
- (void)_updateNavigationBundleIdentifier:(BOOL)a0;
- (void)_updateNavigationButtonSizeConstraints;
- (void)_updateNowPlayingBundleIdentifier:(BOOL)a0;
- (void)_updateOtherButtonSizeConstraints;
- (id)initWithAppHistory:(id)a0 iconProvider:(id)a1 environmentConfiguration:(id)a2;
- (void)navigationStateProvider:(id)a0 navigatingIdentifiersDidChange:(id)a1;
- (void)nowPlayingObserver:(id)a0 didChangeNowPlayingApplication:(id)a1;
- (void)nowPlayingObserver:(id)a0 didUpdatePlaybackState:(BOOL)a1 inApplication:(id)a2;
- (void)setActiveBundleIdentifier:(id)a0 animated:(BOOL)a1;

@end
