@class NSString, NSArray, UIView, UITableView;

@interface UIDebuggingInformationInspectorDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    NSArray *_data;
    UIView *_inspectedView;
    UITableView *_tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateData;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_forceViewLayout;
- (void).cxx_destruct;
- (void)_flush;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)inspectView:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
