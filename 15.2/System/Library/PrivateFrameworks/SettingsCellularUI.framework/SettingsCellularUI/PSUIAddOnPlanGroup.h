@class PSListController, NSString, Logger, PSUICellularPlanManagerCache, PSSpecifier, TSSIMSetupFlow, NSMutableArray, CTCellularPlanManager;

@interface PSUIAddOnPlanGroup : NSObject <TSSIMSetupDelegate, PSSpecifierGroup> {
    PSUICellularPlanManagerCache *_cellularPlanManager;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSSpecifier *_groupSpecifier;
    NSString *_carrierName;
    NSMutableArray *_remotePlansSpecifiers;
    Logger *_logger;
}

@property (weak, nonatomic) PSListController *listController;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)getLogger;
- (void).cxx_destruct;
- (id)init;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (id)initWithListController:(id)a0 groupSpecifier:(id)a1 planManager:(id)a2 ctPlanManager:(id)a3;
- (id)specifiersForRemotePlans;
- (void)remoteItemPressed:(id)a0;

@end
