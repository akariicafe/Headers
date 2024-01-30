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
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)_updateSpotlightLegibility;
- (id)_todayContentView;

@end
