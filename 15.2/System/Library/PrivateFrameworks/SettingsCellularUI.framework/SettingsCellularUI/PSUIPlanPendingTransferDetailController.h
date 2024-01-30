@class PSUIPlanPendingTransferMenusGroup;

@interface PSUIPlanPendingTransferDetailController : PSListController

@property (retain, nonatomic) PSUIPlanPendingTransferMenusGroup *planPendingTransferMenus;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (void)cellularPlanChanged;

@end
