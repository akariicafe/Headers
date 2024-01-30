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

- (void)destroyScenesWithPersistentIdentifiers:(id)a0 animationType:(unsigned long long)a1 destroySessions:(BOOL)a2 completion:(id /* block */)a3;
- (void)dealloc;
- (id)_applicationSupportServiceEndpoint;
- (void)requestPasscodeUnlockUIWithCompletion:(id /* block */)a0;
- (id)_remoteTarget;
- (id)applicationInitializationContextWithParameters:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
