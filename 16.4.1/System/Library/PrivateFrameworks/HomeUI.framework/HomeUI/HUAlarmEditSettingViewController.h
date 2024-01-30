@class UITableView, HMRoom, MTMutableAlarm, NSString, NSMutableArray, HUAlarmEditableTextCell;
@protocol HUAlarmEditSettingViewControllerDelegate;

@interface HUAlarmEditSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HUAlarmEditableTextCell *editingCell;
@property (nonatomic) long long setting;
@property (nonatomic) unsigned long long firstWeekday;
@property (nonatomic) unsigned long long repeatSchedule;
@property (retain, nonatomic) HMRoom *selectedRoom;
@property (retain, nonatomic) NSMutableArray *roomsList;
@property (copy, nonatomic) MTMutableAlarm *alarm;
@property (weak, nonatomic) id<HUAlarmEditSettingViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *loggedInAppleMusicAccountDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardWillShow:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)dealloc;
- (void)_dismiss;
- (void)_commonInitialization;
- (void)_keyboardWillHide:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidUnload;
- (void)_setupPlayInSettingWithMediaProfileContainer:(id)a0;
- (id)initPlayInSettingWithMediaProfileContainer:(id)a0 selectedRoom:(id)a1;
- (id)initWithAlarm:(id)a0 setting:(long long)a1 mediaProfileContainer:(id)a2 selectedRoom:(id)a3 loggedInAppleMusicAccountDSID:(id)a4;
- (unsigned int)maskForRow:(long long)a0;
- (void)textValueChanged:(id)a0;

@end
