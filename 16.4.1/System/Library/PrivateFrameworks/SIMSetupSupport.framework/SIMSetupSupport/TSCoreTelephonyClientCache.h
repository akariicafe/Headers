@class CoreTelephonyClient;

@interface TSCoreTelephonyClientCache : NSObject {
    CoreTelephonyClient *_client;
}

@property BOOL isEOnly;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)getCarrierSetupWithCompletion:(id /* block */)a0;
- (void)getPlanTransferCredentials:(id)a0 completion:(id /* block */)a1;
- (void)getSubscriptionInfo:(id /* block */)a0;
- (void)hideTransferPlan:(id)a0 fromDevice:(id)a1 completion:(id /* block */)a2;
- (void)installPendingPlan:(id)a0 completion:(id /* block */)a1;
- (void)installPendingPlanList:(id)a0 completion:(id /* block */)a1;
- (id)updateSecureIntentData:(id)a0;
- (void)transferPlanListWithCompletion:(id /* block */)a0;
- (void)bootstrapPlanTransferUsingMessageSession:(id)a0 completion:(id /* block */)a1;
- (void)cancelTransferPlan:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)convertPhysicalSIMToeSIMWithCompletion:(id /* block */)a0;
- (BOOL)deviceSupportsHydra;
- (BOOL)getTransferCapability:(unsigned long long)a0;
- (void)getWebsheetInfoForPlan:(id)a0 inBuddy:(BOOL)a1 completion:(id /* block */)a2;
- (void)isAnyPlanOfTransferCapability:(unsigned long long)a0 withCompletion:(id /* block */)a1;
- (BOOL)isEmbeddedSIMOnlyConfig;
- (void)pendingInstallItemsWithCompletion:(id /* block */)a0;
- (void)setDataFallbackEnabled:(BOOL)a0 forIccid:(id)a1;
- (void)submitPlanSetupDetails:(id)a0;
- (void)submitSimSetupUsage:(id)a0;
- (void)transferPlanWithIdentifier:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (void)transferPlansWithIdentifier:(id)a0 fromDevice:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)usingBootstrapDataService;

@end
