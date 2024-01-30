@class PSUIAddCellularPlanSpecifier, PSSpecifier, NSString, CTCellularPlanManager, TSSIMSetupFlow, PSListController, PSUICellularPlanManagerCache;

@interface PSUICarrierItemGroup : NSObject <TSSIMSetupDelegate, PSSpecifierGroup> {
    PSUICellularPlanManagerCache *_cellularPlanManagerCache;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierEmbedded;
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierStandard;
    TSSIMSetupFlow *_flow;
}

@property (weak, nonatomic) PSListController *listController;
@property (retain, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getLogger;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (BOOL)hasCarrierItems;
- (void)_addLocationFooterIfNecessary;
- (void)_handleAddCarrierItem:(id)a0 specifier:(id)a1;
- (id)addCellularPlanSpecifier;
- (void)carrierItemPressed:(id)a0;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1 planManager:(id)a2 ctPlanManager:(id)a3;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (id)specifiersForCarrierItems;
- (void)turnOnLocationServicesPressed:(id)a0;

@end
