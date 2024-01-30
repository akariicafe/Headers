@class PSUIPlanPendingTransferMenusGroup;

@interface PSUIPlanPendingTransferDetailController : PSListController

@property (retain, nonatomic) PSUIPlanPendingTransferMenusGroup *planPendingTransferMenus;

- (id)getLogger;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)cellularPlanChanged;

@end
