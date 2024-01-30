@class Protocol, NSXPCConnection, NSFileProviderMessageInterface, NSLock;

@interface NSFileProviderMessenger : NSObject {
    NSXPCConnection *_conn;
    Protocol *_protocol;
    NSFileProviderMessageInterface *_interface;
    NSLock *_lock;
    BOOL _triedConnection;
}

- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)dealloc;
- (void)invalidate;
- (id)initWithInterface:(id)a0 protocol:(id)a1;

@end
