@class NSString, CDPUICustodianOSSelectionViewModel;

@interface CDPUICustodianOSSelectionViewController : CDPTableViewController <UITableViewDataSource, UITableViewDelegate> {
    CDPUICustodianOSSelectionViewModel *_viewModel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithViewModel:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)viewForFooterInTableView:(id)a0;
- (double)heightForFooterInTableView:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
