@class CoreTelephonyClient;

@interface TSCoreTelephonyClientCache : NSObject {
    CoreTelephonyClient *_client;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)hideTransferPlan:(id)a0 fromDevice:(id)a1 completion:(id /* block */)a2;
- (void)installPendingPlanList:(id)a0 completion:(id /* block */)a1;
- (void)installPendingPlan:(id)a0 completion:(id /* block */)a1;
- (void)setDataFallbackEnabled:(BOOL)a0 forIccid:(id)a1;
- (void)transferPlanWithIdentifier:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)transferPlansWithIdentifier:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)transferPlanListWithCompletion:(id /* block */)a0;
- (void)bootstrapPlanTransferUsingMessageSession:(id)a0 completion:(id /* block */)a1;
- (void)pendingInstallItemsWithCompletion:(id /* block */)a0;
- (void)isAnyPlanOfTransferCapability:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (BOOL)getTransferCapability:(unsigned long long)a0;

@end
