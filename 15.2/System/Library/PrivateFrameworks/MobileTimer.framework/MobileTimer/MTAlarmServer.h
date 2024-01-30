@class MTAlarmStorage, NSString, MTXPCConnectionListenerProvider;
@protocol NAScheduler;

@interface MTAlarmServer : NSObject <MTAlarmServer, MTAlarmObserver, MTAgentDiagnosticDelegate>

@property (readonly, nonatomic) MTAlarmStorage *storage;
@property (readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, nonatomic, getter=isSystemReady) BOOL systemReady;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_notifyClientsForTriggerType:(unsigned long long)a0;

- (void)stopListening;
- (void)source:(id)a0 didChangeNextAlarm:(id)a1;
- (void)source:(id)a0 didAddAlarms:(id)a1;
- (void)startListening;
- (void)source:(id)a0 didSnoozeAlarm:(id)a1 snoozeAction:(unsigned long long)a2;
- (void)source:(id)a0 didDismissAlarm:(id)a1 dismissAction:(unsigned long long)a2;
- (void)source:(id)a0 didFireAlarm:(id)a1 triggerType:(unsigned long long)a2;
- (void)checkIn;
- (void)source:(id)a0 didUpdateAlarms:(id)a1;
- (id)initWithStorage:(id)a0;
- (void)source:(id)a0 didRemoveAlarms:(id)a1;
- (void)updateSleepAlarmsWithCompletion:(id /* block */)a0;
- (void)printDiagnostics;
- (id)_systemNotReadyError;
- (id)gatherDiagnostics;
- (void)updateAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)getAlarmsWithCompletion:(id /* block */)a0;
- (void)snoozeAlarmWithIdentifier:(id)a0 snoozeAction:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (BOOL)_isSystemReady;
- (void).cxx_destruct;
- (void)dismissAlarmWithIdentifier:(id)a0 dismissAction:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)nextSleepAlarmWithCompletion:(id /* block */)a0;
- (void)removeAlarm:(id)a0 withCompletion:(id /* block */)a1;
- (void)resetSleepAlarmSnoozeStateWithCompletion:(id /* block */)a0;
- (id)initWithStorage:(id)a0 connectionListenerProvider:(id)a1;
- (void)handleSystemReady;
- (void)addAlarm:(id)a0 withCompletion:(id /* block */)a1;

@end
