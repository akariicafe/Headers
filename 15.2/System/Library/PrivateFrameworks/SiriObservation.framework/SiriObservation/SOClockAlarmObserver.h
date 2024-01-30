@class NSHashTable, AFClockAlarmSnapshot, NSString, AFClockItemStorage, NSUUID, AFInstanceContext, NSObject, SOClockAlarmManager, NSMutableOrderedSet;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SOClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSHashTable *_listeners;
    SOClockAlarmManager *_alarmManager;
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

- (void)_tearDown;
- (void)_reset;
- (void)getFiringAlarmIDsWithCompletion:(id /* block */)a0;
- (void)removeListener:(id)a0;
- (id)initWithInstanceContext:(id)a0;
- (void)_handleFetchAlarmsForReason:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)_endGroup;
- (void)_handleFetchAlarmsForReason:(id)a0 result:(id)a1 completion:(id /* block */)a2;
- (void)addListener:(id)a0;
- (void)firingAlarmChanged:(id)a0;
- (void)_consolidateNotifiedFiringAlarms;
- (id)_alarmSnapshot;
- (void)_setUp;
- (void).cxx_destruct;
- (id)init;
- (void)_beginGroup;
- (void)alarmFired:(id)a0;
- (void)stateReset:(id)a0;
- (void)invalidate;
- (void)_enumerateListenersUsingBlock:(id /* block */)a0;
- (void)alarmsUpdated:(id)a0;
- (void)dealloc;
- (void)alarmsAdded:(id)a0;
- (void)alarmsChanged:(id)a0;
- (void)_fetchAlarmsForReason:(id)a0 completion:(id /* block */)a1;
- (void)firingAlarmDismissed:(id)a0;
- (void)clockItemStorageDidUpdate:(id)a0 insertedItemIDs:(id)a1 updatedItemIDs:(id)a2 deletedItemIDs:(id)a3;
- (void)getAlarmSnapshotWithCompletion:(id /* block */)a0;
- (void)alarmsRemoved:(id)a0;

@end
