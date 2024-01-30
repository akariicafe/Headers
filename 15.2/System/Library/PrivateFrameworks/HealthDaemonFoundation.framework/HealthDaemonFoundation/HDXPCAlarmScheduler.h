@class NSString, NSMapTable, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HDXPCAlarmScheduler : NSObject <HDDiagnosticObject> {
    NSMapTable *_alarms;
    NSMutableSet *_pendingEvents;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ unitTest_schedulerObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAlarm:(id)a0;
- (id)diagnosticDescription;
- (void)addAlarm:(id)a0;
- (void)_queue_handleXPCEvent:(id)a0;
- (void)unscheduleEventWithName:(id)a0;
- (void)_queue_unscheduleEventWithName:(id)a0;
- (void)_queue_notifyAlarmsOfPendingEvents;
- (void)unittest_fireEvent:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_queue_scheduleEvent:(id)a0;
- (void)scheduleEvent:(id)a0;
- (void)_queue_handleEvent:(id)a0;

@end
