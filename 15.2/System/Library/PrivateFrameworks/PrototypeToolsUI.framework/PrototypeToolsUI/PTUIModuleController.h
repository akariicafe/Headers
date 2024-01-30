@class NSString, PTSettings, PTModule;

@interface PTUIModuleController : UITableViewController <PTModuleObserver> {
    PTModule *_module;
    NSString *_title;
    NSString *_rowTitle;
}

@property (readonly, nonatomic) PTSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_updateTitle;
- (id)initWithSettings:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)module:(id)a0 didInsertRows:(id)a1 deleteRows:(id)a2;
- (void)moduleDidReload:(id)a0;
- (void)module:(id)a0 didInsertSections:(id)a1 deleteSections:(id)a2;
- (id)_initWithModule:(id)a0 presentingRow:(id)a1;
- (id)initWithSettings:(id)a0 presentingRow:(id)a1;
- (void)_reloadWithModule:(id)a0;
- (void)showActionsForRowTableViewCell:(id)a0;

@end
