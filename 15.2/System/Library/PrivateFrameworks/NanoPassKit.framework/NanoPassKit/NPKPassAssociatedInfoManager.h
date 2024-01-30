@class NSSet, PKPaymentService, NSHashTable, NSString, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface NPKPassAssociatedInfoManager : NSObject <PKPaymentServiceDelegate> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSMutableDictionary *_passAssociatedInfoModelsByPassUniqueID;
    int _pendingAddValueUpdatedNotifyToken;
}

@property (readonly, nonatomic) PKPaymentService *paymentService;
@property (nonatomic) BOOL paymentServiceWasInterrupted;
@property (retain, nonatomic) NSHashTable *observers;
@property (copy) NSSet *passes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0;
- (void)passWithUniqueIdentifier:(id)a0 didUpdateTiles:(id)a1;
- (void)paymentServiceEstablishedConnection;
- (void)paymentServiceReceivedInterruption;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)_notifyObservers:(id /* block */)a0;
- (void)credential:(id)a0 forPaymentApplication:(id)a1 didUpdateRangingSuspensionReasons:(unsigned long long)a2;
- (void)removePassWithUniqueID:(id)a0;
- (id)initWithPaymentService:(id)a0;
- (void)_updateAllPassesItemsFieldsPendingUpdateStatus;
- (BOOL)_isPassEligible:(id)a0;
- (void)_internalQueue_regenerateAssociatedInfoModelForPass:(id)a0 inModelsByID:(id)a1;
- (void)_notifyObserversOfUpdatedTransitPassInfoForModel:(id)a0;
- (void)_fetchMostRecentInfoForPass:(id)a0;
- (void)_updatePassTransitPassesInfoManagerForPassUniqueID:(id)a0 updateBlock:(id /* block */)a1;
- (void)_fetchMostRecentTransitPropertiesAndAppletStateForPass:(id)a0;
- (void)refreshAllPasses;
- (void)_fetchMostRecentBalancesForPass:(id)a0;
- (void)_fetchMostRecentTilesForPass:(id)a0;
- (void)_fetchMostRecentRangingSuspensionReasonForPass:(id)a0;
- (id)_transitPassBalanceModelWithPass:(id)a0 currentModel:(id)a1;
- (void)_loadPassContentIfNeeded:(id)a0;
- (void)addPass:(id)a0;
- (void)setPendingAmount:(id)a0 forBalanceField:(id)a1 passWithUniqueID:(id)a2;
- (id)passInfoForPassWithUniqueID:(id)a0;
- (BOOL)canPerformRKEActionsForPassWithUniqueID:(id)a0;
- (unsigned long long)rangingSuspensionReasonForPassWithUniqueID:(id)a0;

@end
