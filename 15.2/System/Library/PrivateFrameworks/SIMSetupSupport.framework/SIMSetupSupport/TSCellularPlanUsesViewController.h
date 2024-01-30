@class OBBoldTrayButton, NSArray, UITableViewCell, NSString, NSLayoutConstraint, NSIndexPath, NSMutableArray;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanUsesViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, TSSetupFlowItem> {
    OBBoldTrayButton *_doneButton;
    NSLayoutConstraint *_heightConstraint;
    BOOL _dataSwitchEnabled;
}

@property BOOL hasDoneButton;
@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain) UITableViewCell *sectionFooter;
@property (retain) NSIndexPath *chosenUseIndexPath;
@property (retain) NSMutableArray *chosenUseIndexPaths;
@property (retain) NSArray *planItemBadges;
@property (retain) NSArray *selectedPlanItems;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly, nonatomic) unsigned long long usesType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)prepare:(id /* block */)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_doneButtonTapped;
- (void)dataSwitchChanged:(id)a0;
- (void)saveDefaultUse:(id /* block */)a0;
- (id)initWithType:(unsigned long long)a0 withDoneButton:(BOOL)a1;

@end
