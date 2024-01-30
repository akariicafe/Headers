@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface DNDMeDeviceService : NSObject <DNDRemoteServiceConnectionEventListener> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSHashTable *_listeners;
    BOOL _registeredForUpdates;
}

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (void)removeListener:(id)a0;
- (void)queryCurrentStateWithCompletionHandler:(id /* block */)a0;
- (BOOL)_queue_registerForStateUpdatesIfRequired;
- (void)addListener:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)_initWithClientIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)remoteService:(id)a0 didReceiveUpdatedMeDeviceState:(id)a1;

@end
