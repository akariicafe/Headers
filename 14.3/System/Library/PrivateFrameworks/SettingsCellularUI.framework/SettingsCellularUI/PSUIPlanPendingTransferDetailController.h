@class PSUIPlanPendingTransferMenusGroup;

@interface PSUIPlanPendingTransferDetailController : PSListController

@property (retain, nonatomic) PSUIPlanPendingTransferMenusGroup *planPendingTransferMenus;

- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (void)cellularPlanChanged;

@end
