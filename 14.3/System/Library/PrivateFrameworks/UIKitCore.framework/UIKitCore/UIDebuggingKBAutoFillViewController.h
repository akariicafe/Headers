@class NSString, UITableView;

@interface UIDebuggingKBAutoFillViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIKBAutoFillTestGroundTruthGenerationViewControllerDelegate, UIDebuggingInformationViewController> {
    UITableView *_tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autoFillTestGroundTruthGenerationViewController:(id)a0 didFinishWithResult:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_getTopMostViewControllerInWindow:(id)a0;
- (id)_formTypeFileName:(long long)a0;
- (void)_archiveTopMostViewControllerForAutoFillTest;
- (void)viewDidLoad;

@end
