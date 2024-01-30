@class NSDateFormatter, STDeviceBedtime;

@interface STIntroDowntimeTableViewController : UITableViewController

@property long long datePickerVisibility;
@property (readonly) NSDateFormatter *downtimeFormatter;
@property (readonly) STDeviceBedtime *bedtime;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)_datePickerChanged:(id)a0;
- (void)_stIntroDowntimeTableViewControllerCommonInit;
- (long long)_tableRowForDatePicker;
- (long long)_tableRowForEndLabelRow;
- (long long)_tableRowForStartLabelRow;

@end
