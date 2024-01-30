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

- (void)handleURL:(id)a0;
- (void)willResignActive;
- (void)didWake;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willBecomeActive;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_loadHealthOverrides;
- (void)_notifyAirPortSettingsVisible:(BOOL)a0;

@end
