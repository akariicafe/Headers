@class NSString, CSTodayViewController, SBUISpotlightBarNavigationController, SPUISearchBarController;

@interface CSTodayContentViewController : CSCoverSheetViewControllerBase <SBFLegibilitySettingsProviderDelegate>

@property (retain, nonatomic) SBUISpotlightBarNavigationController *spotlightNavigationController;
@property (retain, nonatomic) SPUISearchBarController *spotlightSearchBarViewController;
@property (retain, nonatomic) CSTodayViewController *todayViewController;
@property (nonatomic, getter=isBouncing) BOOL bouncing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (void)providerLegibilitySettingsChanged:(id)a0;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_updateSpotlightLegibility;
- (void)viewWillDisappear:(BOOL)a0;
- (id)_todayContentView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;

@end
