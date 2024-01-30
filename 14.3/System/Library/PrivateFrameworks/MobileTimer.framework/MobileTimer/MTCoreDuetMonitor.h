@class NSMutableDictionary, _CDClientContext, _DKKnowledgeStore, NSString, NSObject;
@protocol OS_dispatch_queue, MTAlarmStorage;

@interface MTCoreDuetMonitor : NSObject <MTAlarmObserver>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) id<MTAlarmStorage> alarmStorage;
@property (readonly, nonatomic) NSMutableDictionary *alarmStatesByAlarmID;
@property (readonly, nonatomic) _CDClientContext *context;
@property (readonly, nonatomic) _DKKnowledgeStore *knowledgeStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (void)updateLastModifiedDateForAlarms:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlarmStorage:(id)a0;
- (void)_queue_writeAlarmToKnowledgeStore:(id)a0 category:(id)a1;
- (id)metadataForAlarm:(id)a0;
- (void)handleSystemReady;
- (void)_queue_writeNextAlarmStateToContextStore:(id)a0;
- (void)updateStateForNextAlarm:(id)a0;
- (void)_queue_writeCurrentStateToContextStore;
- (void)updateStateForAlarm:(id)a0 alarmEvent:(unsigned long long)a1;
- (void)writeAlarmToKnowledgeStore:(id)a0 alarmEvent:(unsigned long long)a1;
- (void)updateStateForIdleAlarms:(id)a0;

@end
