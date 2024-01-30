@class NSArray, NSString, MTAlarmDataSource, UITableView;

@interface WFAlarmTriggerConfigurationViewController : WFTriggerConfigurationViewController <UITableViewDataSource, UITableViewDelegate, WFAlarmChooserViewControllerDelegate>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) MTAlarmDataSource *alarmDataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (id)infoForSection:(long long)a0;
- (void)alarmChooserViewController:(id)a0 didFinishWithChosenAlarms:(id)a1;
- (void)alarmChooserViewControllerDidCancel:(id)a0;
- (id)titleForCellInSection:(id)a0 item:(id)a1;
- (id)extraTextForCellInSection:(id)a0 item:(id)a1;
- (long long)accessoryTypeForCellInSection:(id)a0 item:(id)a1;
- (void)presentAlarmChooserViewController;

@end
