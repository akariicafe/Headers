@class NSArray, NSError;
@protocol TSCellularPlanManagerCacheDelegate;

@interface TSCellularPlanManagerCache : NSObject

@property (retain) NSArray *cachedPlanItems;
@property (retain) NSArray *danglingPlanItems;
@property (nonatomic) unsigned long long supportedFlowTypes;
@property (weak, nonatomic) id<TSCellularPlanManagerCacheDelegate> delegate;
@property (retain) NSError *lastError;
@property (readonly) NSArray *planItems;

+ (id)sharedInstance;

- (void)planItemsWithCompletion:(id /* block */)a0;
- (id)getShortLabelsForLabels:(id)a0;
- (id)remapSimLabel:(id)a0 to:(id)a1;
- (void)dealloc;
- (id)getSubscriptionContextUUIDforPlan:(id)a0;
- (id)setLabelForPlan:(id)a0 label:(id)a1;
- (void)didEnablePlanItems:(id)a0;
- (id)init;
- (id)getPredefinedLabels;
- (void)didPurchasePlanForCarrier:(id)a0 mnc:(id)a1 gid1:(id)a2 gid2:(id)a3 state:(id)a4;
- (void).cxx_destruct;
- (long long)calculateInstallConsentTextTypeFor:(id)a0;
- (id)_getValidatedPlanItemFor:(id)a0;
- (void)_initializePlanItems;
- (void)_updateCachedFlowTypes;
- (void)_updateCachedPlanItems;
- (void)_updateLocalCachedPlanItems:(id)a0;
- (void)addNewPlanWithAddress:(id)a0 matchingId:(id)a1 confirmationCode:(id)a2 userConsent:(long long)a3 completion:(id /* block */)a4;
- (void)addNewPlanWithCardData:(id)a0 confirmationCode:(id)a1 userConsentResponse:(long long)a2 completion:(id /* block */)a3;
- (void)didPurchasePlanForEid:(id)a0 iccid:(id)a1 smdpURL:(id)a2 state:(id)a3;
- (void)didTransferPlanForEid:(id)a0 iccid:(id)a1 srcIccid:(id)a2 smdpURL:(id)a3 state:(id)a4;
- (id)getDanglingPlanItems;
- (void)hasInstallingPlanOrUserPlan:(id /* block */)a0;
- (void)provideUserResponse:(long long)a0 confirmationCode:(id)a1;
- (void)resetDelegate:(id)a0;
- (void)resumePlanProvisioning:(BOOL)a0 userConsent:(long long)a1;
- (void)selectPlanForData:(id)a0;
- (void)selectPlanForVoice:(id)a0;
- (void)selectPlansForIMessage:(id)a0;
- (void)sendUserResponse:(unsigned long long)a0 confirmationCode:(id)a1;
- (void)shouldShowPlanSetupWithCompletion:(id /* block */)a0;

@end
