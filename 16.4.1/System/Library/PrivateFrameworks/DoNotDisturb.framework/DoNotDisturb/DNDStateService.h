@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DNDStateService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_stateUpdateListeners;
    BOOL _registeredForUpdates;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (void)queryCurrentStateWithCompletionHandler:(id /* block */)a0;
- (BOOL)removeStateUpdateListener:(id)a0 error:(id *)a1;
- (void)addStateUpdateListener:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)addStateUpdateListener:(id)a0 error:(id *)a1;
- (BOOL)_queue_registerForStateUpdatesIfRequired;
- (void)removeStateUpdateListener:(id)a0;
- (id)queryCurrentStateWithError:(id *)a0;
- (void)remoteService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (id)_initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;

@end
