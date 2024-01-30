@class NSArray;
@protocol TSCellularPlanManagerCacheDelegate;

@interface TSCellularPlanManagerCache : NSObject

@property (retain) NSArray *cachedPlanItems;
@property (retain) NSArray *danglingPlanItems;
@property (nonatomic) unsigned long long supportedFlowTypes;
@property (weak, nonatomic) id<TSCellularPlanManagerCacheDelegate> delegate;
@property (readonly) NSArray *planItems;

+ (id)sharedInstance;

- (void)didPurchasePlanForCarrier:(id)a0 mnc:(id)a1 gid1:(id)a2 gid2:(id)a3 state:(id)a4;
- (void)setUserInPurchaseFlow:(BOOL)a0;
- (void)didEnablePlanItems:(id)a0;
- (id)getPredefinedLabels;
- (void)planItemsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)remapSimLabel:(id)a0 to:(id)a1;
- (id)init;
- (id)getShortLabelsForLabels:(id)a0;
- (id)getSubscriptionContextUUIDforPlan:(id)a0;
- (void)dealloc;
- (id)setLabelForPlan:(id)a0 label:(id)a1;
- (long long)calculateInstallConsentTextTypeFor:(id)a0;
- (void)selectPlansForIMessage:(id)a0;
- (void)selectPlanForVoice:(id)a0;
- (void)selectPlanForData:(id)a0;
- (void)addNewPlanWithCardData:(id)a0 confirmationCode:(id)a1 userConsentResponse:(long long)a2 completion:(id /* block */)a3;
- (void)shouldShowPlanSetupWithCompletion:(id /* block */)a0;
- (id)getDanglingPlanItems;
- (void)didPurchasePlanForEid:(id)a0 iccid:(id)a1 smdpURL:(id)a2 state:(id)a3;
- (void)didTransferPlanForEid:(id)a0 iccid:(id)a1 srcIccid:(id)a2 smdpURL:(id)a3 state:(id)a4;
- (void)_updateCachedFlowTypes;
- (void)_updateLocalCachedPlanItems:(id)a0;
- (void)_updateCachedPlanItems;
- (id)_getValidatedPlanItemFor:(id)a0;
- (id)_getByteRepresentationOf:(id)a0;
- (void)addNewPlanWithAddress:(id)a0 matchingId:(id)a1 confirmationCode:(id)a2 userConsent:(long long)a3 completion:(id /* block */)a4;
- (void)resumePlanProvisioning:(BOOL)a0 userConsent:(long long)a1;
- (void)provideUserResponse:(long long)a0 confirmationCode:(id)a1;
- (void)sendUserResponse:(unsigned long long)a0 confirmationCode:(id)a1;
- (void)_initializePlanItems;

@end
