@class NSString, NSMutableDictionary, NSDictionary, NSMutableSet, TPSEventsHistoryController, TPSTipStatusController, NSObject, TPSEventsProviderManager;
@protocol OS_dispatch_queue, TPSDiscoverabilityControllerDelegate;

@interface TPSDiscoverabilityController : NSObject <TPSDEventsProviderManagerDelegate> {
    long long _overrideHintMaxDisplayedCount;
    NSMutableDictionary *_contextualInfoMap;
    NSMutableSet *_registeredEventIdentifiers;
    TPSEventsProviderManager *_eventsProviderManager;
    TPSEventsHistoryController *_eventsHistoryController;
    NSObject<OS_dispatch_queue> *_eventRegistrationQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (weak, nonatomic) id<TPSDiscoverabilityControllerDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *contextualInfoMap;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (readonly, copy, nonatomic) TPSEventsHistoryController *eventsHistoryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataProviderManager:(id)a0 didFinishQueryWithResults:(id)a1 type:(long long)a2;
- (long long)customizationIDForContentID:(id)a0;
- (void)_registerWakingCallbackForContextualInfo:(id)a0;
- (void)addHintDisplayedForIdentifier:(id)a0 context:(id)a1;
- (BOOL)_isConditionMet:(id)a0 hasUpdates:(BOOL *)a1 forIdentifier:(id)a2;
- (id)initWithTipStatusController:(id)a0;
- (id)init;
- (void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)a0 context:(id)a1;
- (void)updateContentViewedForIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isContextualInfoExistForIdentifier:(id)a0;
- (void)_updateRegisteredEventIdentifiers;
- (id)contextualInfoMap;
- (id)dismissalEventsForContextualInfo:(id)a0;
- (BOOL)_updateTriggerConditionForObserverIdentifers:(id)a0;
- (void)queryCurrentEvents;
- (void)_updateCacheData;
- (void)markHintIneligibleForIdentifiers:(id)a0 bundleID:(id)a1 context:(id)a2 reason:(long long)a3;
- (BOOL)isContentHintDisplayMaxDisplayedCountExceededForIdentifier:(id)a0;
- (BOOL)updateDesiredOutcomeConditionForObserverIdentifers:(id)a0;
- (void)_removeCacheData;
- (void)updateHintDismissedForIdentifier:(id)a0 dismissType:(id)a1 context:(id)a2;
- (id)_matchingIdentifiersForConditionWithType:(unsigned long long)a0 forObserverIdentifiers:(id)a1 hasUpdates:(BOOL *)a2;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)a0;
- (void)dataProviderManager:(id)a0 didReceiveCallbackWithResult:(id)a1 type:(long long)a2;
- (void)_reconcileRegisteredEvents;
- (void)processEventProviderQueryResults:(id)a0 type:(long long)a1;
- (id)discoverabilityTipWithMetadata:(id)a0 contentDictionary:(id)a1 preconditions:(id)a2;
- (id)contextualInfoForIdentifier:(id)a0;
- (void)_cleanupContextualInfoMap;
- (void)contextualEligibilityWithTipIdentifiers:(id)a0 tipsDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 experimentCampChangesToAll:(BOOL)a3;
- (id)dismissalEventsForContentID:(id)a0;
- (void)markHintIneligibleForIdentifiers:(id)a0 context:(id)a1 reason:(long long)a2;
- (void)_updateContextualInfoMapCache;

@end
