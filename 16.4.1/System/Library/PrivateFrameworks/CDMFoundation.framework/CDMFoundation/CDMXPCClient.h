@class NSString, CDMServiceCenter, NSXPCConnection;
@protocol CDMClientDelegate;

@interface CDMXPCClient : CDMClientInterface {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<CDMClientDelegate> _delegate;
    NSXPCConnection *_connection;
    NSString *_localeIdentifier;
    CDMServiceCenter *_serviceCenter;
}

- (void)invalidateConnection;
- (id)connection;
- (id)initWithConnection:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)processCDMNluRequest:(id)a0;
- (BOOL)registerWithAssetsDelegate:(id)a0;
- (void)setup:(id)a0;
- (BOOL)areAssetsAvailable:(id)a0;
- (void)doHandleCommand:(id)a0 forCallback:(id /* block */)a1;
- (void)handleOverridesAssetUpdateEvent:(id)a0;
- (void)processCDMNluRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)processCDMNluRequest:(id)a0 nullableCompletionHandler:(id /* block */)a1;
- (void)setup:(id)a0 completionHandler:(id /* block */)a1;
- (void)setup:(id)a0 nullableCompletionHandler:(id /* block */)a1;

@end
