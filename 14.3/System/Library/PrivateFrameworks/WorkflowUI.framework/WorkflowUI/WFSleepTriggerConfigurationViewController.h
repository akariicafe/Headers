@class NSArray, NSString, WFHealthFeatureAvailability, UITableView;

@interface WFSleepTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFHealthFeatureObserver>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) WFHealthFeatureAvailability *healthFeatureAvailability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)updateUI;
- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)healthFeatureAvailability:(id)a0 sleepOnboardingStatusDidChange:(unsigned long long)a1;
- (id)initWithTrigger:(id)a0 triggerManager:(id)a1 mode:(unsigned long long)a2;
- (id)infoForSection:(long long)a0;
- (void)updateNextButtonEnabledState;
- (void)setupParameterSectionCell:(id)a0 atRow:(long long)a1;
- (id)footerLinkViewForTableView:(id)a0;

@end
