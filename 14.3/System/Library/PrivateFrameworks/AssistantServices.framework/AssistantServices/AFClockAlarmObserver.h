@class NSHashTable, NSString, AFClockAlarmSnapshot, AFClockItemStorage, NSUUID, NSObject, NSMutableOrderedSet, MTAlarmManager;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface AFClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_listeners;
    MTAlarmManager *_alarmManager;
    AFClockAlarmSnapshot *_alarmSnapshot;
    NSObject<OS_dispatch_group> *_alarmSnapshotGroup;
    long long _alarmSnapshotGroupDepth;
    AFClockItemStorage *_alarmStorage;
    NSMutableOrderedSet *_notifiedFiringAlarmIDs;
    NSUUID *_alarmsChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_endGroup;
- (void)_tearDown;
- (void)alarmsRemoved:(id)a0;
- (void)_fetchAlarmsForReason:(id)a0 completion:(id /* block */)a1;
- (id)_alarmSnapshot;
- (void)_consolidateNotifiedFiringAlarms;
- (void)firingAlarmChanged:(id)a0;
- (void)firingAlarmDismissed:(id)a0;
- (void)alarmsChanged:(id)a0;
- (void)_handleFetchAlarmsForReason:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)_handleFetchAlarmsForReason:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)getAlarmSnapshotWithCompletion:(id /* block */)a0;
- (void)getFiringAlarmIDsWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeListener:(id)a0;
- (void)_beginGroup;
- (void)addListener:(id)a0;
- (void)alarmFired:(id)a0;
- (void)alarmsUpdated:(id)a0;
- (void)clockItemStorageDidUpdate:(id)a0 insertedItemIDs:(id)a1 updatedItemIDs:(id)a2 deletedItemIDs:(id)a3;
- (void)_setUp;
- (void)stateReset:(id)a0;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (void)alarmsAdded:(id)a0;
- (void)invalidate;

@end
