@class NSString, MTAlarmManager, NSHashTable, NSMutableOrderedSet, NSObject, SOAlarmsSnapshot;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface SOAlarmsPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSHashTable *_subscribers;
    MTAlarmManager *_alarmManager;
    SOAlarmsSnapshot *_alarmsSnapshot;
    NSMutableOrderedSet *_dismissedAlarms;
}

@property (readonly, nonatomic) NSString *typeName;

- (void)addSubscriber:(id)a0;
- (void)firingAlarmChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)alarmFired:(id)a0;
- (void)stateReset:(id)a0;
- (void)alarmsUpdated:(id)a0;
- (void)dealloc;
- (void)alarmsAdded:(id)a0;
- (void)_startObserving;
- (void)firingAlarmDismissed:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)alarmsRemoved:(id)a0;
- (void)_createNewSnapshotWithCompletion:(id /* block */)a0;
- (void)getCurrentSnapshotWithCompletion:(id /* block */)a0;
- (void)_notifySubscribersOfEvent:(long long)a0;

@end
