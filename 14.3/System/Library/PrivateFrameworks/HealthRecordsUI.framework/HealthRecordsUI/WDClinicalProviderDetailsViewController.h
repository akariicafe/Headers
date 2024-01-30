@class HRProfile, NSCache, NSArray, HRWDSpinnerView, HKClinicalProvider, NSString, HKClinicalProviderSearchResult;

@interface WDClinicalProviderDetailsViewController : HKTableViewController <HRWDUserActivityResponder>

@property (retain, nonatomic) HRProfile *profile;
@property (retain, nonatomic) HKClinicalProviderSearchResult *searchResult;
@property (nonatomic) long long fetchesInFlight;
@property (retain, nonatomic) HKClinicalProvider *provider;
@property (retain, nonatomic) NSCache *providerCache;
@property (retain, nonatomic) NSArray *connectedGateways;
@property (retain, nonatomic) NSArray *unconnectedGateways;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) HRWDSpinnerView *spinnerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0 provider:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)_presentError:(id)a0;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 searchResult:(id)a1;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (id)_initWithProfile:(id)a0;
- (void)_fetchDetailsForSearchResult:(id)a0;
- (void)removeSpinnerIfNecessary;
- (id)_orderGatewaysForDisplay:(id)a0;
- (id)_gatewayAtIndexPath:(id)a0;
- (void)_handleTapForActivateGateway:(id)a0;
- (void)_presentUnavailableAlertForGatewayTitle:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)_computeSections;
- (void)viewDidLoad;

@end
