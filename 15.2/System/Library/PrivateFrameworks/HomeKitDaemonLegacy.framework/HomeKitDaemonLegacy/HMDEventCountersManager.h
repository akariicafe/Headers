@class NSMutableDictionary, HMFUnfairLock, NSDate, NSObject;
@protocol OS_dispatch_queue, HMDEventCountersStoring;

@interface HMDEventCountersManager : HMFObject {
    HMFUnfairLock *_lock;
}

@property (class, readonly) HMDEventCountersManager *sharedEventCountersManager;

@property (retain, nonatomic) NSMutableDictionary *eventCounters;
@property (retain, nonatomic) NSDate *lastSaveTime;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMDEventCountersStoring> counterStorage;
@property (nonatomic) double saveInterval;

- (void)_save;
- (void).cxx_destruct;
- (id)init;
- (void)forceSave;
- (void)resetEventCountersForRequestGroup:(id)a0;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)a0;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(unsigned long long)a2;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (id)fetchEventCountersForRequestGroup:(id)a0;
- (void)resetAllEventCounters;
- (id)fetchAllEventCounters;
- (void)addObserver:(id)a0 forEventName:(id)a1 requestGroup:(id)a2;
- (void)resetEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (id)initWithEventCountersStorage:(id)a0 saveInterval:(double)a1;
- (void)_incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(unsigned long long)a2;
- (id)_getOrCreateEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (unsigned long long)_fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (id)_fetchEventCountersForRequestGroup:(id)a0;
- (id)_fetchAllEventCounters;
- (void)_resetEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)_resetEventCountersForRequestGroup:(id)a0;
- (void)_performOnUpdate;
- (id)unarchivedEventCounters;
- (void)archiveEventCountersWithEventCountersSnapshot:(id)a0;

@end
