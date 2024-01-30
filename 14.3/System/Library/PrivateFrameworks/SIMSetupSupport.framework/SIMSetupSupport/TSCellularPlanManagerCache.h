@class NSArray;
@protocol TSCellularPlanManagerCacheDelegate;

@interface TSCellularPlanManagerCache : NSObject

@property (retain) NSArray *planItems;
@property (retain) NSArray *danglingPlanItems;
@property (nonatomic) unsigned long long supportedFlowTypes;
@property (weak, nonatomic) id<TSCellularPlanManagerCacheDelegate> delegate;

+ (id)sharedInstance;

- (id)getPredefinedLabels;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setUserInPurchaseFlow:(BOOL)a0;
- (id)remapSimLabel:(id)a0 to:(id)a1;
- (id)getShortLabelsForLabels:(id)a0;
- (id)setLabelForPlan:(id)a0 label:(id)a1;
- (void)_initialize;
- (long long)calculateInstallConsentTextTypeFor:(id)a0;
- (void)selectPlansForIMessage:(id)a0;
- (void)selectPlanForVoice:(id)a0;
- (void)selectPlanForData:(id)a0;
- (void)addNewPlanWithCardData:(id)a0 confirmationCode:(id)a1 userConsentResponse:(long long)a2 completion:(id /* block */)a3;
- (void)shouldShowPlanSetupWithCompletion:(id /* block */)a0;
- (id)getDanglingPlanItems;
- (void)didPurchasePlanForEid:(id)a0 iccid:(id)a1 smdpURL:(id)a2;
- (void)didTransferPlanForEid:(id)a0 iccid:(id)a1 srcIccid:(id)a2 smdpURL:(id)a3 state:(id)a4;
- (void)_updateLocalCachedPlanItems:(id)a0;
- (id)_getValidatedPlanItemFor:(id)a0;
- (void)_updateCachedPlanItems;
- (id)_getByteRepresentationOf:(id)a0;
- (void)_updateCachedFlowTypes;
- (void)addNewPlanWithAddress:(id)a0 matchingId:(id)a1 confirmationCode:(id)a2 userConsent:(long long)a3 completion:(id /* block */)a4;
- (void)resumePlanProvisioning:(BOOL)a0 userConsent:(long long)a1;
- (void)provideUserResponse:(long long)a0 confirmationCode:(id)a1;
- (void)sendUserResponse:(unsigned long long)a0 confirmationCode:(id)a1;

@end
