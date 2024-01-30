@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TPSEventsHistoryController : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (retain, nonatomic) NSMutableDictionary *contextualEventIdentifierToContextualEventMap;
@property (copy, nonatomic) NSDictionary *contextualEventsForIdentifiers;

- (id)initWithTipStatusController:(id)a0;
- (void).cxx_destruct;
- (id)_contextualEventForIdentifier:(id)a0;
- (id)contextualEventsBySourceMap;
- (void)_addEvents:(id)a0 contentIdentifier:(id)a1 eventSinceDate:(id)a2 minObservationCount:(unsigned long long)a3;
- (void)removeCacheData;
- (void)removeObserverIdentifiers:(id)a0 fromEventIdentifiers:(id)a1;
- (id)contextualEventsForIdentifiers:(id)a0;
- (void)updateCacheData;
- (void)removeObserverIdentifiers:(id)a0;
- (void)restartTrackingForEventIdentifiers:(id)a0 date:(id)a1;
- (id)debugDescription;
- (void)_setContextualEvent:(id)a0 forIdentifier:(id)a1;
- (void)processEventProviderQueryResults:(id)a0 completionHandler:(id /* block */)a1;
- (void)addEventsFromTriggerEvents:(id)a0 desiredOutcomeEvents:(id)a1 contentIdentifier:(id)a2 eventSinceDate:(id)a3;
- (id)allContextualEvents;

@end
