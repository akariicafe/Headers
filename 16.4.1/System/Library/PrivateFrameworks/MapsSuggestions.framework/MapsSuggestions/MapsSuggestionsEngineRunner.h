@class NSDate, NSString, NSArray, MapsSuggestionsEngineBuilder, NSMutableArray, NSMutableSet, NSObject, MapsSuggestionsEngine, MapsSuggestionsObservers;
@protocol MapsSuggestionsTimer, OS_dispatch_queue;

@interface MapsSuggestionsEngineRunner : NSObject <MapsSuggestionsTriggerObserver, MapsSuggestionsSink, MapsSuggestionsCircuit> {
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _queue;
    MapsSuggestionsEngine *_engine;
    struct _Config { NSString *name; MapsSuggestionsEngineBuilder *engineBuilder; MapsSuggestionsObservers *observers; double minRunTime; double maxRunTime; double minSleepTime; double maxSleepTime; double leewayRunTime; double leewaySleepTime; NSMutableArray *triggers; NSMutableArray *conditions; NSMutableSet *filters; unsigned long long maxEntries; BOOL nilledWhenAsleep; } _config;
    struct _State { NSDate *minSilenceDate; NSDate *earliestRunDate; NSString *firedTriggerName; NSString *failedConditionName; id<MapsSuggestionsTimer> stopRunTimer; id<MapsSuggestionsTimer> wakeUpTimer; NSArray *entries; } _state;
}

@property (readonly, weak, nonatomic) MapsSuggestionsEngine *engine;
@property (readonly, nonatomic) id<MapsSuggestionsTimer> wakeUpTimer;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerFired:(id)a0;
- (void)addTrigger:(id)a0;
- (void)addCondition:(id)a0;
- (id).cxx_construct;
- (id)objectForJSON;
- (void)removeConditions:(id)a0;
- (id)nameForJSON;
- (id)initWithEngineBuilder:(id)a0 name:(id)a1 minRunTime:(double)a2 maxRunTime:(double)a3 minSleepTime:(double)a4 maxSleepTime:(double)a5 runTimeLeeway:(double)a6 sleepTimeLeeway:(double)a7 maxEntries:(unsigned long long)a8 nilledWhenAsleep:(BOOL)a9;
- (void)runASAP;
- (void)removeTriggers:(id)a0;
- (void)removeTrigger:(id)a0;
- (void)registerObserver:(id)a0;
- (void)addPostFilter:(id)a0;
- (id)initWithEngineBuilder:(id)a0 name:(id)a1 minRunTime:(double)a2 maxRunTime:(double)a3 minSleepTime:(double)a4 maxSleepTime:(double)a5 maxEntries:(unsigned long long)a6;
- (id)initWithEngineBuilder:(id)a0 name:(id)a1 minRunTime:(double)a2 maxRunTime:(double)a3 minSleepTime:(double)a4 maxSleepTime:(double)a5 runTimeLeeway:(double)a6 sleepTimeLeeway:(double)a7 maxEntries:(unsigned long long)a8 nilledWhenAsleep:(BOOL)a9 wakeUpTimerClass:(Class)a10 stopRunTimerClass:(Class)a11;
- (void)addConditions:(id)a0;
- (void)addTriggers:(id)a0;
- (void)removeCondition:(id)a0;
- (void)invalidateForMapsSuggestionsManager:(id)a0;
- (id)initWithEngineBuilder:(id)a0 name:(id)a1 minRunTime:(double)a2 maxRunTime:(double)a3 minSleepTime:(double)a4 maxSleepTime:(double)a5 runTimeLeeway:(double)a6 sleepTimeLeeway:(double)a7 maxEntries:(unsigned long long)a8 nilledWhenAsleep:(BOOL)a9 wakeUpTimerClass:(Class)a10;
- (void)scheduleNextRun;
- (void).cxx_destruct;

@end
