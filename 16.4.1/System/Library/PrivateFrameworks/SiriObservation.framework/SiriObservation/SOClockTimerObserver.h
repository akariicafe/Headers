@class NSHashTable, NSString, NSUUID, AFClockItemStorage, SOClockTimerManager, AFInstanceContext, NSObject, NSMutableOrderedSet, AFClockTimerSnapshot;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SOClockTimerObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSHashTable *_listeners;
    SOClockTimerManager *_timerManager;
    AFClockTimerSnapshot *_timerSnapshot;
    NSObject<OS_dispatch_group> *_timerSnapshotGroup;
    long long _timerSnapshotGroupDepth;
    AFClockItemStorage *_timerStorage;
    NSMutableOrderedSet *_notifiedFiringTimerIDs;
    NSUUID *_timersChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)addListener:(id)a0;
- (void)_endGroup;
- (void)_setUp;
- (void)timerFired:(id)a0;
- (void)removeListener:(id)a0;
- (void)_reset;
- (void)timersAdded:(id)a0;
- (void)_beginGroup;
- (void)_tearDown;
- (id)initWithInstanceContext:(id)a0;
- (void)firingTimerDismissed:(id)a0;
- (void)_handleFetchTimersForReason:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (void)timersRemoved:(id)a0;
- (void)_handleFetchTimersForReason:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)_consolidateNotifiedFiringTimers;
- (void)timersUpdated:(id)a0;
- (void)clockItemStorageDidUpdate:(id)a0 insertedItemIDs:(id)a1 updatedItemIDs:(id)a2 deletedItemIDs:(id)a3;
- (void)stateReset:(id)a0;
- (void)_fetchTimersForReason:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (id)init;
- (void)getTimerSnapshotWithCompletion:(id /* block */)a0;
- (void)firingTimerChanged:(id)a0;
- (void)invalidate;
- (void)getFiringTimerIDsWithCompletion:(id /* block */)a0;
- (id)_timerSnapshot;
- (void).cxx_destruct;
- (void)timersChanged:(id)a0;

@end
