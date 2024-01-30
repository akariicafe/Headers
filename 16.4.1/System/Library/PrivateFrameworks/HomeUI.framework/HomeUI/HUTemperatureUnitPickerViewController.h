@class NSString, HFSimpleItemManager;

@interface HUTemperatureUnitPickerViewController : UITableViewController <HFItemManagerDelegate>

@property (retain, nonatomic) HFSimpleItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)_controlItem;
- (long long)_tableRowToTemperatureUnit:(unsigned long long)a0;
- (id)initWithUnitItem:(id)a0;

@end
