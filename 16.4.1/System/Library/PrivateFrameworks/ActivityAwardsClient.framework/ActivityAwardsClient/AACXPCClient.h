@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AACXPCClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSXPCConnection *_mainDaemonConnection;
    NSXPCConnection *_endpointConnection;
}

- (void)sendSynchronousRequest:(unsigned long long)a0 resultHandler:(id /* block */)a1;
- (void)sendRequest:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_handleError:(id)a0;
- (void)_resetEndpointConnection;
- (void)dealloc;
- (void)sendSynchronousRequest:(unsigned long long)a0 payload:(id)a1 resultHandler:(id /* block */)a2;
- (id)init;
- (void)_serverQueue_initializeDaemonConnection;
- (void)_discardEndpointConnection:(id)a0;
- (void)_remoteSynchronousProxy:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)sendRequest:(unsigned long long)a0 payloadData:(id)a1 completion:(id /* block */)a2;
- (void)_remoteProxy:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (void)sendRequest:(unsigned long long)a0 payload:(id)a1 completion:(id /* block */)a2;

@end
