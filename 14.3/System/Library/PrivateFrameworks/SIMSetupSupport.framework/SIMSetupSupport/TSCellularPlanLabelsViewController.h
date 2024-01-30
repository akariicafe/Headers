@class OBBoldTrayButton, TSCellularPlanLabelPickerTableViewController, UITableViewCell, NSArray, NSLayoutConstraint, NSMutableArray, NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanLabelsViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem> {
    OBBoldTrayButton *_doneButton;
}

@property (retain, nonatomic) NSLayoutConstraint *heightAnchor;
@property (retain) UITableViewCell *sectionFooter;
@property (retain) NSMutableArray *sortedPlanItemsWithPendingLabels;
@property (retain) TSCellularPlanLabelPickerTableViewController *labelPickerViewController;
@property (retain) NSArray *planItemBadges;
@property BOOL allowDismiss;
@property (readonly) NSString *iccid;
@property (weak) id<TSSIMSetupFlowDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)canBeShownFromSuspendedState;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_cancelButtonTapped;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_doneButtonTapped;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)prepare:(id /* block */)a0;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidLoad;
- (id)initWithIccid:(id)a0 allowDismiss:(BOOL)a1;
- (id)initWithAllowDismiss:(BOOL)a0;
- (void)setPendingLabel:(id)a0 forPlanItem:(id)a1;
- (id)getPlanItemByIndex:(long long)a0;
- (id)getPredefinedUserLabels;
- (id)getPendingLabelAtIndex:(long long)a0;
- (void)savePlanLabels:(id /* block */)a0;

@end
