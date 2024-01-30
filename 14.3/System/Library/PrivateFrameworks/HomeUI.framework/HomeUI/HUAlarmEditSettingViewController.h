@class UITableView, HMMediaProfile, MTMutableAlarm, NSString, NSMutableArray, HUAlarmEditableTextCell;
@protocol HUAlarmEditSettingViewControllerDelegate;

@interface HUAlarmEditSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) HUAlarmEditableTextCell *editingCell;
@property (nonatomic) long long setting;
@property (nonatomic) unsigned long long firstWeekday;
@property (nonatomic) unsigned long long repeatSchedule;
@property (retain, nonatomic) NSMutableArray *profileList;
@property (retain, nonatomic) HMMediaProfile *selectedMediaProfile;
@property (copy, nonatomic) MTMutableAlarm *alarm;
@property (weak, nonatomic) id<HUAlarmEditSettingViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *loggedInAppleMusicAccountDSID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)_keyboardWillShow:(id)a0;
- (void)_commonInitialization;
- (void)loadView;
- (void)_keyboardWillHide:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)_dismiss;
- (id)initWithAlarm:(id)a0 setting:(long long)a1 mediaProfileContainer:(id)a2 selectedMediaProfile:(id)a3 loggedInAppleMusicAccountDSID:(id)a4;
- (void)textValueChanged:(id)a0;
- (unsigned int)maskForRow:(long long)a0;

@end
