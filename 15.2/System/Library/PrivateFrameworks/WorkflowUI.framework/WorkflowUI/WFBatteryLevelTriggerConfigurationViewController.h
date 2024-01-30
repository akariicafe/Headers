@class NSArray, NSString, UITableView;

@interface WFBatteryLevelTriggerConfigurationViewController : WFTriggerConfigurationViewController <WFTriggerPercentageSliderCellDelegate, UITableViewDataSource, UITableViewDelegate>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (id)infoForSection:(long long)a0;
- (void)sliderValueChangedToValue:(double)a0;
- (void)updateCellLabelsWithValue:(double)a0;
- (void)disableRowVisibilityFor:(id)a0;
- (void)enableRowVisibilityFor:(id)a0;
- (id)localizedTextForCellAtIndexPath:(id)a0 value:(double)a1;

@end
