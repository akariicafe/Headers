@class VCDaemonXPCEventHandler, NSMutableDictionary, VCTriggerEventQueue, WFWorkflowRunCoordinator, NSObject;
@protocol OS_dispatch_queue, VCDatabaseProvider, _CDUserContext;

@interface VCCoreDuetListener : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<_CDUserContext> userContext;
@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) VCTriggerEventQueue *eventQueue;
@property (readonly, nonatomic) NSMutableDictionary *registrations;
@property (readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator;

- (id)initWithDatabaseProvider:(id)a0 eventHandler:(id)a1 runCoordinator:(id)a2;
- (void)timeChangeDidOccur;
- (void)handleSunriseSunsetChanged;
- (void)unregisterCallbackForIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCallbackRegisteredWithIdentifier:(id)a0;
- (BOOL)registerTrigger:(id)a0 error:(id *)a1;
- (void)unregisterTriggerWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)unregisterAllTriggers;
- (id)databaseWithError:(id *)a0;
- (void)handleCallbackForTriggerWithIdentifier:(id)a0 info:(id)a1;
- (void)checkTriggerStateWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(id /* block */)a0;
- (void)registerCallback:(id)a0 withIdentifier:(id)a1;
- (void)registerSunriseSunsetCallbackIfNeeded;
- (void)checkTriggerStateWithKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)deleteTriggerWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)queue_registerAllTriggers:(id *)a0;
- (void)fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void)queue_fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void)registerTriggerWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deleteTriggerWithIdentifier:(id)a0 allowedDeletionClasses:(id)a1 completion:(id /* block */)a2;
- (void)registerAllTriggersWithCompletion:(id /* block */)a0;
- (void)removeStalePendingNotifications;
- (void)deviceDidUnlockForFirstTime;
- (void)timezoneChangeDidOccur;

@end
