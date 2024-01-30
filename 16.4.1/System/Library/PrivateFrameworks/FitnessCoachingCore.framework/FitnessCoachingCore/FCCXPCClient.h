@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface FCCXPCClient : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void)dealloc;
- (id)init;
- (void)_setupXPCConnection;
- (void)_remoteProxy:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_transportMessage:(unsigned long long)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)transportMessage:(unsigned long long)a0 data:(id)a1 completion:(id /* block */)a2;

@end
