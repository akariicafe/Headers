@class NSMutableArray, NSMutableDictionary;

@interface BYAnalyticsManager : NSObject

@property (retain, nonatomic) NSMutableArray *events;
@property (retain, nonatomic) NSMutableDictionary *lazyEvents;

+ (id)sharedManager;

- (void)commit;
- (void)stash:(id)a0;
- (void)_sendEvent:(id)a0 payload:(id)a1;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)_gatherDataFromProducers;
- (void)addEvent:(id)a0 withPayload:(id)a1 persist:(BOOL)a2;
- (void)addEvent:(id)a0 withPayloadBlock:(id /* block */)a1 persist:(BOOL)a2;
- (void)removeEventsUsingBlock:(id /* block */)a0;
- (void)removeNonPersistentEvents;

@end
