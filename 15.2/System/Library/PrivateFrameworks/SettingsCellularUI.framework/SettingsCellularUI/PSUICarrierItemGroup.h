@class PSUIAddCellularPlanSpecifier, PSSpecifier, NSString, CTCellularPlanManager, PSListController, PSUICellularPlanManagerCache;

@interface PSUICarrierItemGroup : NSObject <PSSpecifierGroup> {
    PSUICellularPlanManagerCache *_cellularPlanManagerCache;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierEmbedded;
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierStandard;
}

@property (weak, nonatomic) PSListController *listController;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void).cxx_destruct;
- (id)init;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1 planManager:(id)a2 ctPlanManager:(id)a3;
- (id)specifiersForCarrierItems;
- (id)getAddCellularPlanSpecifier:(BOOL)a0;
- (void)carrierItemPressed:(id)a0;
- (BOOL)hasCarrierItems;

@end
