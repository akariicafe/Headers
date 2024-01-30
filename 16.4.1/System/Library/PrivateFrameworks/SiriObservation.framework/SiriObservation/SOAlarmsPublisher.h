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

- (void)alarmFired:(id)a0;
- (void)alarmsAdded:(id)a0;
- (void)firingAlarmChanged:(id)a0;
- (void)alarmsUpdated:(id)a0;
- (void)_startObserving;
- (void)stateReset:(id)a0;
- (void)dealloc;
- (void)alarmsRemoved:(id)a0;
- (id)init;
- (void)firingAlarmDismissed:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (void)_createNewSnapshotWithCompletion:(id /* block */)a0;
- (void)_notifySubscribersOfEvent:(long long)a0;
- (void)getCurrentSnapshotWithCompletion:(id /* block */)a0;

@end
