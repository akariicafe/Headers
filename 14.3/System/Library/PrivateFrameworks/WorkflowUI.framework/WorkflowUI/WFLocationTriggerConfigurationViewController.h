@class NSArray, NSDateFormatter, NSString, UITableView;

@interface WFLocationTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFLocationPickerViewControllerDelegate, WFTimeRangePickerViewControllerDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (nonatomic) BOOL isLocationBasedAlertsEnabled;
@property (readonly, nonatomic) BOOL isArrive;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)checkLocationAuthorization;
- (void)locationPicker:(id)a0 didFinishWithValue:(id)a1;
- (void)locationPickerDidCancel:(id)a0;
- (id)initWithTrigger:(id)a0 triggerManager:(id)a1 mode:(unsigned long long)a2;
- (id)infoForSection:(long long)a0;
- (void)timeRangePickerViewController:(id)a0 didPickStartTime:(id)a1 endTime:(id)a2;
- (void)timeRangePickerViewControllerDidCancel:(id)a0;
- (id)textForSummaryFooterView;
- (void)presentNavigationControllerWithRootViewController:(id)a0;

@end
