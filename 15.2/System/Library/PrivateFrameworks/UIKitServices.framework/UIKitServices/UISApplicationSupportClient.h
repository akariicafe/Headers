@class NSString, BSServiceConnection, NSObject;
@protocol OS_dispatch_queue;

@interface UISApplicationSupportClient : NSObject <BSInvalidatable> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _queue_invalidated;
    BSServiceConnection *_queue_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_applicationSupportServiceEndpoint;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)requestPasscodeUnlockUIWithCompletion:(id /* block */)a0;
- (void)destroyScenesWithPersistentIdentifiers:(id)a0 animationType:(unsigned long long)a1 destroySessions:(BOOL)a2 completion:(id /* block */)a3;
- (id)applicationInitializationContextWithParameters:(id)a0;
- (void)dealloc;
- (id)_remoteTarget;

@end
