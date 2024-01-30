@class TSSIMSetupFlow, NSString, CTCellularPlanManager, PSListController;

@interface PSUIFauxCardScannerSpecifier : PSSpecifier <TSSIMSetupDelegate> {
    CTCellularPlanManager *_planManager;
}

@property (weak, nonatomic) PSListController *hostController;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHostController:(id)a0 isEmbeddedInCarrierList:(BOOL)a1;
- (id)initWithHostController:(id)a0 isEmbeddedInCarrierList:(BOOL)a1 planManager:(id)a2;
- (void)fauxCardScannerCellPressed:(id)a0;
- (void)simSetupFlowCompleted;
- (long long)userConsentResponse;

@end
