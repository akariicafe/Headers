@class NSMutableSet, NSMutableDictionary;

@interface NFEventManager : NSObject

@property (readonly, nonatomic) NSMutableSet *events;
@property (readonly, nonatomic) NSMutableDictionary *triggers;

- (void).cxx_destruct;
- (id)init;
- (void)attemptTriggersForCurrentEvent:(id)a0;
- (void)triggerOnAnyEvent:(id)a0 block:(id /* block */)a1;
- (void)handleOnceTrigger:(id)a0 event:(id)a1;
- (void)handleAlwaysTrigger:(id)a0 event:(id)a1;
- (void)fireEvent:(id)a0;
- (void)triggerOnceWhenAllEventsHaveOccurred:(id)a0 block:(id /* block */)a1;
- (void)triggerAlwaysWhenAllEventsHaveOccurred:(id)a0 block:(id /* block */)a1;
- (void)triggerOnceWhenAnyEventHasOccurred:(id)a0 block:(id /* block */)a1;
- (void)triggerOnEvent:(id)a0 block:(id /* block */)a1;

@end
