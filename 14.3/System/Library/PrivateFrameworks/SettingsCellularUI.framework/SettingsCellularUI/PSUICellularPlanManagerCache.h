@class Logger, NSArray, NSString, NSDictionary, CTCellularPlanItem;

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
@property BOOL carrierListFetchInProgress;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)planFromReference:(id)a0;
- (id)predefinedLabels;
- (id)danglingPlanFromReference:(id)a0;
- (id)planPendingTransferFromReference:(id)a0;
- (id)subscriptionContextForPlanItem:(id)a0 cachedSubscriptionContexts:(id)a1;
- (void)setLabel:(id)a0 forPlan:(id)a1;
- (id)planFromReferenceSafe:(id)a0;
- (id)getLogger;
- (void)clearCachedCarrierItems;
- (void)_planInfoDidChange;
- (void)_carrierInfoDidChange;
- (void)_invalidatePlanItemsCache;
- (void)_fetchPlanItemsIfNeeded;
- (BOOL)shouldShowOldUI;
- (void)setSelectedPlanItemForData:(id)a0;
- (void)didSelectDanglingPlan:(id)a0;

@end
