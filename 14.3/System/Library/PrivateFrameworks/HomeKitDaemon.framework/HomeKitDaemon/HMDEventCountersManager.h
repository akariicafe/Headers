@class NSMutableDictionary, HMDPersistentStore, HMFUnfairLock, NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface HMDEventCountersManager : HMFObject {
    HMFUnfairLock *_lock;
}

@property (class, readonly) HMDEventCountersManager *sharedEventCountersManager;

@property (retain, nonatomic) NSMutableDictionary *eventCounters;
@property (retain, nonatomic) NSDate *lastSaveTime;
@property (nonatomic) unsigned long long saveCount;
@property (nonatomic, getter=isSaving) BOOL saving;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMDPersistentStore *persistentStore;
@property (nonatomic) unsigned long long savePeriod;

- (void)_save;
- (id)init;
- (void).cxx_destruct;
- (id)dumpState;
- (id)initWithPersistentStore:(id)a0;
- (unsigned long long)fetchAggregatedEventCountersForRequestGroup:(id)a0;
- (unsigned long long)fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)resetEventCountersForRequestGroup:(id)a0;
- (void)forceSave;
- (id)fetchEventCountersForRequestGroup:(id)a0;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(unsigned long long)a2;
- (void)resetEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (id)unarchivedEventCounters;
- (void)_incrementEventCounterForEventName:(id)a0 requestGroup:(id)a1 withValue:(long long)a2;
- (void)logDiskWriteState;
- (unsigned long long)_fetchEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (id)_fetchEventCountersForRequestGroup:(id)a0;
- (id)_fetchAllEventCounters;
- (void)_resetEventCounterForEventName:(id)a0 requestGroup:(id)a1;
- (void)_performOnUpdate;
- (void)archiveEventCountersWithEventCountersSnapshot:(id)a0 completionHandler:(id /* block */)a1;
- (id)fetchAllEventCounters;

@end
