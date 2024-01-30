@class NSString, MTAlarmDataSource, NSMutableOrderedSet, UITableView;
@protocol WFAlarmChooserViewControllerDelegate;

@interface WFAlarmChooserViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MTAlarmDataSourceObserver>

@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) MTAlarmDataSource *alarmDataSource;
@property (readonly, nonatomic) NSMutableOrderedSet *checkedAlarmIDs;
@property (weak, nonatomic) id<WFAlarmChooserViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)finish:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)isModalInPresentation;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)dataSourceDidReload:(id)a0;
- (id)initWithAlarmDataSource:(id)a0 checkedAlarmIDs:(id)a1;
- (void)checkForValidCheckedAlarmIDs;
- (void)updateDoneButtonEnabled;

@end
