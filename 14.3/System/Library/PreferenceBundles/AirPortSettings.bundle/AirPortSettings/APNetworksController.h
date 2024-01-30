@class WFHealthIssueOverrides, WFNetworkListController, NSURL, WFAirportViewController;

@interface APNetworksController : PSViewController {
    BOOL _pushDataUsage;
    BOOL _viewLoaded;
    BOOL _joinEnterprise;
}

@property (retain, nonatomic) WFHealthIssueOverrides *healthOverrides;
@property (retain, nonatomic) WFNetworkListController *airportController;
@property (retain, nonatomic) WFAirportViewController *settingsViewController;
@property (retain, nonatomic) NSURL *deferredURL;

- (void)willResignActive;
- (void)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)didWake;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)willBecomeActive;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_loadHealthOverrides;
- (void)_notifyAirPortSettingsVisible:(BOOL)a0;

@end
