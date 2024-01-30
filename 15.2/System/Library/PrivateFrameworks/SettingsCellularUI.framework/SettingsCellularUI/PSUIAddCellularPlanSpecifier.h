@class TSSIMSetupFlow, NSString, Logger, CTCellularPlanManager, UIActivityIndicatorView, PSListController;

@interface PSUIAddCellularPlanSpecifier : PSSpecifier <TSSIMSetupDelegate> {
    CTCellularPlanManager *_planManager;
    Logger *_logger;
    id _originAccessoryView;
    UIActivityIndicatorView *_spinner;
}

@property (weak, nonatomic) PSListController *hostController;
@property (retain) TSSIMSetupFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setProperty:(id)a0 forKey:(id)a1;
- (id)getLogger;
- (void).cxx_destruct;
- (void)showSpinner:(BOOL)a0;
- (void)simSetupFlowCompleted:(unsigned long long)a0;
- (long long)userConsentResponse;
- (id)initWithHostController:(id)a0 isEmbeddedInCarrierList:(BOOL)a1;
- (id)initWithHostController:(id)a0 isEmbeddedInCarrierList:(BOOL)a1 planManager:(id)a2;
- (void)addCellularPlanCellPressed:(id)a0;

@end
