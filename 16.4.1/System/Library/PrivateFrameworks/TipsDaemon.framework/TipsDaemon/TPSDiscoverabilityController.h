@class NSString, NSMutableDictionary, NSDictionary, TPSEventsHistoryController, TPSTipStatusController, TPSEventsProviderManager, NSObject, NSMutableSet;
@protocol OS_dispatch_queue, TPSDiscoverabilityControllerDelegate;

@interface TPSDiscoverabilityController : NSObject <TPSDEventsProviderManagerDelegate> {
    long long _overrideHintMaxDisplayedCount;
    NSMutableSet *_registeredEventIdentifiers;
    TPSEventsProviderManager *_eventsProviderManager;
    TPSEventsHistoryController *_eventsHistoryController;
    NSMutableDictionary *_contextualInfoMap;
    NSObject<OS_dispatch_queue> *_eventRegistrationQueue;
    NSObject<OS_dispatch_queue> *_eventResultsProcessingQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contextualInfoQueue;
@property (weak, nonatomic) id<TPSDiscoverabilityControllerDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *contextualInfoMap;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (readonly, copy, nonatomic) TPSEventsHistoryController *eventsHistoryController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contextualInfoMap;
+ (void)removeContextualInfoCache;

- (void)contextualEligibilityWithTipIdentifiers:(id)a0 tipsDeliveryInfoMap:(id)a1 deliveryInfoMap:(id)a2 experimentCampChangesToAll:(BOOL)a3;
- (void)_registerWakingCallbackForContextualInfo:(id)a0;
- (void)updateHintDismissedForIdentifier:(id)a0 dismissType:(id)a1 context:(id)a2;
- (id)_matchingIdentifiersForConditionWithType:(unsigned long long)a0 forObserverIdentifiers:(id)a1 hasUpdates:(BOOL *)a2;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)a0 updateCache:(BOOL)a1;
- (long long)customizationIDForContentID:(id)a0;
- (BOOL)isContextualInfoExistForIdentifier:(id)a0;
- (id)contextualInfoMap;
- (void)_updateCacheData;
- (id)discoverabilityTipWithMetadata:(id)a0 contentDictionary:(id)a1 preconditions:(id)a2;
- (void)queryCurrentEvents;
- (void)_cleanupContextualInfoMap;
- (void)_reconcileRegisteredEvents;
- (id)initWithTipStatusController:(id)a0;
- (BOOL)isContentHintDisplayMaxDisplayedCountExceededForIdentifier:(id)a0;
- (void)_updateContextualInfoMapCache;
- (void)updateContentViewedForIdentifier:(id)a0;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifiers:(id)a0;
- (void)markHintIneligibleForIdentifiers:(id)a0 context:(id)a1 reason:(long long)a2;
- (void)_removeCacheData;
- (void)updateHintWouldHaveBeenDisplayedForIdentifier:(id)a0 context:(id)a1;
- (void)dataProviderManager:(id)a0 didFinishQueryWithResults:(id)a1 type:(long long)a2;
- (BOOL)_isConditionMet:(id)a0 hasUpdates:(BOOL *)a1 forIdentifier:(id)a2;
- (void)addHintDisplayedForIdentifier:(id)a0 context:(id)a1;
- (void)updateIdentifier:(id)a0 withContextualInfo:(id)a1;
- (BOOL)updateDesiredOutcomeConditionForObserverIdentifers:(id)a0;
- (void)dataProviderManager:(id)a0 didReceiveCallbackWithResult:(id)a1 type:(long long)a2;
- (id)contextualInfoForIdentifier:(id)a0;
- (BOOL)_updateTriggerConditionForObserverIdentifiers:(id)a0;
- (void)restartTriggerTrackingIfNotDisplayedForIdentifier:(id)a0;
- (void)removeAllContextualInfos;
- (id)init;
- (void)processEventProviderQueryResults:(id)a0 type:(long long)a1;
- (id)monitoringEventsForContentID:(id)a0;
- (id)contextualInfoIdentifiers;
- (void)_updateRegisteredEventIdentifiers;
- (void)removeContextualInfoForIdentifiers:(id)a0;
- (void)markHintIneligibleForIdentifiers:(id)a0 bundleID:(id)a1 context:(id)a2 reason:(long long)a3;
- (void).cxx_destruct;

@end
