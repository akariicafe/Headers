@class CTCellularPlanItem, NSArray, NSString, NSDictionary, Logger, CoreTelephonyClient, CTDisplayPlanList;

@interface PSUICellularPlanManagerCache : NSObject <Loggable> {
    BOOL _cacheIsValid;
    NSArray *_planItems;
    NSArray *_danglingPlanItems;
    NSArray *_plansPendingTransfer;
    NSDictionary *_referenceMap;
    CTCellularPlanItem *_selectedPlanItem;
    BOOL _hasSubscriptions;
    BOOL _isMultipleDataPlanSupportAvailable;
    BOOL _shouldShowOldUI;
    BOOL _isAnyLocalFlowTypeSupported;
    BOOL _isWebUIFlowSupported;
    BOOL _isActivationCodeFlowSupported;
    BOOL _isCarrierItemFlowSupported;
    Logger *_logger;
}

@property (retain) NSArray *cachedCarrierItems;
@property (retain) CTDisplayPlanList *cachedRemotePlans;
@property BOOL carrierListFetchInProgress;
@property BOOL remoteListFetchInProgress;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) CTCellularPlanItem *selectedPlanItem;
@property (readonly, nonatomic) NSArray *planItems;
@property (readonly, nonatomic) NSArray *danglingPlanItems;
@property (readonly, nonatomic) NSArray *plansPendingTransfer;
@property (readonly, nonatomic) NSArray *embeddedPlanItems;
@property (readonly, nonatomic) BOOL hasSubscriptions;
@property (readonly, nonatomic) BOOL isMultipleDataPlanSupportAvailable;
@property (readonly, nonatomic) BOOL shouldShowAddPlan;
@property (readonly, nonatomic) BOOL shouldShowDataPlanList;
@property (readonly, nonatomic) BOOL shouldShowAccountSetup;
@property (readonly, nonatomic) BOOL isSelectedPlanActivating;
@property (readonly, nonatomic) BOOL isAnyPlanActivating;
@property (readonly, nonatomic) BOOL shouldShowPlanSelector;
@property (readonly, nonatomic) BOOL shouldShowNewUI;
@property (readonly, nonatomic) BOOL isAnyLocalFlowTypeSupported;
@property (readonly, nonatomic) BOOL isWebUIFlowSupported;
@property (readonly, nonatomic) BOOL isActivationCodeFlowSupported;
@property (readonly, nonatomic) BOOL isCarrierItemFlowSupported;
@property (readonly, nonatomic) NSArray *carrierItems;
@property (readonly, nonatomic) CTDisplayPlanList *remotePlans;
@property (nonatomic) BOOL remoteListFetchCompleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)danglingPlanFromReference:(id)a0;
- (BOOL)shouldShowOldUI;
- (id)getLogger;
- (void)didEnablePlanItems:(id)a0;
- (void)_planInfoDidChange;
- (id)planFromReferenceSafe:(id)a0;
- (void).cxx_destruct;
- (void)clearCachedCarrierItemsAndRemotePlans;
- (void)setLabel:(id)a0 forPlan:(id)a1;
- (id)init;
- (void)_invalidatePlanItemsCache;
- (void)setSelectedPlanItemForData:(id)a0;
- (void)purchaseAddOnPlan:(id)a0 completion:(id /* block */)a1;
- (void)_carrierInfoDidChange;
- (id)planFromReference:(id)a0;
- (void)didSelectDanglingPlan:(id)a0;
- (void)dealloc;
- (id)planPendingTransferFromReference:(id)a0;
- (void)_fetchPlanItemsIfNeeded;
- (id)subscriptionContextForPlanItem:(id)a0 cachedSubscriptionContexts:(id)a1;
- (id)predefinedLabels;

@end
