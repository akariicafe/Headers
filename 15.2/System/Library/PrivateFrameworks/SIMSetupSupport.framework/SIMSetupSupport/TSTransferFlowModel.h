@class NSMutableArray, CTDisplayPlanList;

@interface TSTransferFlowModel : NSObject {
    BOOL _areTransferPlansReady;
    BOOL _hasPendingInstallPlansQueried;
    BOOL _isBootstrapTriggerred;
    BOOL _isProximityFlow;
}

@property (retain, nonatomic) NSMutableArray *transferItems;
@property (retain, nonatomic) CTDisplayPlanList *pendingInstallItems;
@property (nonatomic) BOOL isActivationPolicyMismatch;
@property (nonatomic) BOOL isDualeSIMCapablityLoss;
@property (nonatomic) BOOL showTransferredPane;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)requestPlans:(id)a0 transferablePlanOnSource:(BOOL)a1 completion:(id /* block */)a2;
- (void)filterTransferPlans:(id)a0;
- (void)requestTransferPlans:(id /* block */)a0;
- (void)bootstrap:(id)a0 completion:(id /* block */)a1;
- (void)requestPendingInstallPlans:(id /* block */)a0;
- (void)arePlansAvailable:(id)a0 transferablePlanOnSource:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldShowTransferredPane;

@end
