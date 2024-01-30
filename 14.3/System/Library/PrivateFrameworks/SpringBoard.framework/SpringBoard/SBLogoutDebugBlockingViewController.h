@class NSDictionary, NSString, NSArray;

@interface SBLogoutDebugBlockingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_applicationKeys;
}

@property (retain, nonatomic) NSDictionary *debugBlockingTasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tableView:(id)a0 canMoveRowAtIndexPath:(id)a1;
- (id)_tableView;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 indentationLevelForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)_configureCell:(id)a0 withBlockingTask:(id)a1;

@end
