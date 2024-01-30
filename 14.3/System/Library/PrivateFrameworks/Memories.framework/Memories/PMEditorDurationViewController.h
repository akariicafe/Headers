@class NSString, PMDurationProvider, UILabel, UIPickerView, UITableView;

@interface PMEditorDurationViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIPickerView *durationPicker;
@property (retain, nonatomic) UILabel *minutesLabel;
@property (retain, nonatomic) UILabel *secondsLabel;
@property (readonly, nonatomic) unsigned long long minimumDuration;
@property (readonly, nonatomic) unsigned long long maximumDuration;
@property (retain, nonatomic) PMDurationProvider *durationProvider;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (double)pickerView:(id)a0 rowHeightForComponent:(long long)a1;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)refreshPickerSelectionTime;
- (long long)secondsComponentOffset;
- (BOOL)isValidSelectionForRow:(long long)a0 forComponent:(long long)a1;
- (id)pickerView:(id)a0 voiceOverStringForRow:(long long)a1 forComponent:(long long)a2;
- (void)createDurationPickerView;

@end
