@class Protocol, NSXPCConnection, NSFileProviderMessageInterface, NSLock;

@interface NSFileProviderMessenger : NSObject {
    NSXPCConnection *_conn;
    Protocol *_protocol;
    NSFileProviderMessageInterface *_interface;
    NSLock *_lock;
    BOOL _triedConnection;
}

- (void)dealloc;
- (id)initWithInterface:(id)a0 protocol:(id)a1;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)invalidate;

@end
