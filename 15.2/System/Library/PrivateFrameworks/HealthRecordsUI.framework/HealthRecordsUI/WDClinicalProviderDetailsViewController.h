@class HRProfile, NSCache, NSArray, HRWDSpinnerView, HKClinicalProvider, NSString, HKClinicalProviderSearchResult;

@interface WDClinicalProviderDetailsViewController : HKTableViewController <HRWDUserActivityResponder>

@property (retain, nonatomic) HRProfile *profile;
@property (retain, nonatomic) HKClinicalProviderSearchResult *searchResult;
@property (nonatomic) long long fetchesInFlight;
@property (retain, nonatomic) HKClinicalProvider *provider;
@property (retain, nonatomic) NSCache *providerCache;
@property (copy, nonatomic) NSArray *connectedGateways;
@property (copy, nonatomic) NSArray *unconnectedGateways;
@property (copy, nonatomic) NSArray *unavailableGateways;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) HRWDSpinnerView *spinnerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithProfile:(id)a0 provider:(id)a1;
- (void)_presentError:(id)a0;
- (id)initWithProfile:(id)a0 searchResult:(id)a1;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (void)_computeSections;
- (id)_initWithProfile:(id)a0;
- (void)_fetchDetailsForSearchResult:(id)a0;
- (void)removeSpinnerIfNecessary;
- (id)_orderGatewaysForDisplay:(id)a0;
- (id)_gatewayAtIndexPath:(id)a0;
- (void)_handleTapForActivateGateway:(id)a0;
- (void)_presentUnavailableAlertForGatewayTitle:(id)a0;

@end
