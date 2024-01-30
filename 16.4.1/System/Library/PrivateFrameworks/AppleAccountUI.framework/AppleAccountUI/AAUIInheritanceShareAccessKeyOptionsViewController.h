@class NSString, AAUIOBInheritanceShareAccessKeyOptionsViewModel, NSArray;
@protocol AAUIInheritanceSetupFlowDelegate;

@interface AAUIInheritanceShareAccessKeyOptionsViewController : AAUIOBTableWelcomeController <UITableViewDelegate, UITableViewDataSource> {
    AAUIOBInheritanceShareAccessKeyOptionsViewModel *_viewModel;
    NSArray *_options;
}

@property (weak, nonatomic) id<AAUIInheritanceSetupFlowDelegate> flowDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithBeneficiaryName:(id)a0 handle:(id)a1;
- (void)_setupTableView;
- (id)_configurationForShareType:(unsigned long long)a0;

@end
