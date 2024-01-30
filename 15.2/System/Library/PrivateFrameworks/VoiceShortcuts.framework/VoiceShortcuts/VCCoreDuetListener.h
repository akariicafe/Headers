@class VCDaemonXPCEventHandler, NSMutableDictionary, VCTriggerEventQueue, NSObject;
@protocol OS_dispatch_queue, WFDatabaseProvider, _CDUserContext;

@interface VCCoreDuetListener : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<_CDUserContext> userContext;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;
@property (retain, nonatomic) VCTriggerEventQueue *eventQueue;
@property (readonly, nonatomic) NSMutableDictionary *registrations;

- (id)databaseWithError:(id *)a0;
- (void)fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void)checkTriggerStateWithKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)registerConfiguredTrigger:(id)a0 completion:(id /* block */)a1;
- (void)queue_fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 eventInfo:(id)a2 completion:(id /* block */)a3;
- (void)queue_unregisterCallbackForIdentifier:(id)a0;
- (void)unregisterConfiguredTriggerWithIdentifier:(id)a0;
- (void)handleCallbackForTriggerWithIdentifier:(id)a0 info:(id)a1;
- (void)handleSunriseSunsetChanged;
- (void)registerSunriseSunsetCallbackIfNeeded;
- (void).cxx_destruct;
- (void)checkTriggerStateWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (BOOL)isCallbackRegisteredWithIdentifier:(id)a0;
- (id)initWithDatabaseProvider:(id)a0 eventQueue:(id)a1;
- (BOOL)registerTrigger:(id)a0 error:(id *)a1;
- (void)registerCallback:(id)a0 withIdentifier:(id)a1;

@end
