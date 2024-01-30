@class NSString, PSSpecifier, CTCellularPlanManager, PSListController, PSUICellularPlanManagerCache;

@interface PSUICarrierItemGroup : NSObject <PSSpecifierGroup> {
    PSUICellularPlanManagerCache *_cellularPlanManager;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSSpecifier *_groupSpecifier;
}

@property (weak, nonatomic) PSListController *listController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1 planManager:(id)a2 ctPlanManager:(id)a3;
- (id)specifiersForCarrierItems;
- (void)carrierItemPressed:(id)a0;
- (BOOL)hasCarrierItems;

@end
