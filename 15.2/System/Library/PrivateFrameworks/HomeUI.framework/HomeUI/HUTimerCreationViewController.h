@class NSString, UITextField, HUTimerIntervalPickerView;
@protocol HUTimerCreationDelegate;

@interface HUTimerCreationViewController : UITableViewController <UITextFieldDelegate, HUTimerIntervalPickerViewDelegate>

@property (retain, nonatomic) HUTimerIntervalPickerView *timePickerView;
@property (retain, nonatomic) UITextField *nameField;
@property (copy, nonatomic) NSString *timerTitle;
@property (nonatomic) double timerDuration;
@property (weak, nonatomic) id<HUTimerCreationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)textFieldShouldClear:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)textFieldDidChange:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)pickerView:(id)a0 didChangeSelectedDuration:(double)a1;
- (void)cancelTimerCreation:(id)a0;
- (void)createTimer:(id)a0;

@end
