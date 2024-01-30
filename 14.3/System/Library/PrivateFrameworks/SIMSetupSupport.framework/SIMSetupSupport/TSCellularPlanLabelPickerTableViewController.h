@class CTUserLabel, NSArray, NSString, NSIndexPath, CTCellularPlanItem;

@interface TSCellularPlanLabelPickerTableViewController : UITableViewController <UITextFieldDelegate>

@property (retain) NSIndexPath *chosenLabelIndexPath;
@property (retain) CTUserLabel *customLabel;
@property (retain) CTCellularPlanItem *associatedPlanItem;
@property (retain) CTUserLabel *initialLabel;
@property (readonly) CTUserLabel *chosenLabel;
@property (retain) NSArray *predefinedUserLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_doneButtonTapped;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)customLabelIndexPath;
- (id)customLabelRowValue;

@end
