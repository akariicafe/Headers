@class NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, HMDEventCountersStoring;

@interface HMDEventCountersManager : HMFObject <HMDEventCounterContext> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) HMDEventCountersManager *sharedEventCountersManager;

@property (retain, nonatomic) NSMutableDictionary *counterGroups;
@property (nonatomic) double lastSaveTime;
@property (readonly) id<HMDEventCountersStoring> counterStorage;
@property (nonatomic) double saveInterval;
@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void)_save;
- (id)objectForKeyedSubscript:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeCounterGroupForSpecifier:(id)a0;
- (id)_fetchAllEventCounters;
- (void)_removeCounterGroupForSpecifier:(id)a0;
- (void)addObserver:(id)a0 forEventName:(id)a1 requestGroup:(id)a2;
- (void)counterChanged;
- (id)counterGroupForName:(id)a0;
- (id)counterGroupForSpecifier:(id)a0;
- (id)counterGroupsForPredicate:(id /* block */)a0;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)a0;
- (id)fetchAllEventCounters;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (id)fetchEventCountersForRequestGroup:(id)a0;
- (void)forceSave;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(unsigned long long)a2;
- (id)initWithEventCountersStorage:(id)a0 saveInterval:(double)a1 timeSourceBlock:(id /* block */)a2;
- (void)removeCounterGroupForName:(id)a0;
- (void)removeCounterGroupsBasedOnPredicate:(id /* block */)a0;
- (void)resetAllEventCounters;
- (void)resetEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)resetEventCountersForRequestGroup:(id)a0;
- (id)unarchiveEventCounters;

@end
