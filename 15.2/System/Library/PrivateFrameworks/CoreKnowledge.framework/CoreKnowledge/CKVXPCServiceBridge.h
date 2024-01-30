@class Protocol, NSString, NSXPCConnection, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue;

@interface CKVXPCServiceBridge : NSObject {
    Protocol *_serviceProtocol;
    NSXPCInterface *_serviceInterface;
    NSString *_machServiceName;
    unsigned long long _options;
    NSXPCConnection *_serviceConnection;
    NSObject<OS_dispatch_queue> *_queue;
    id _remoteObjectProxy;
}

- (id)service;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithServiceProtocol:(id)a0 machServiceName:(id)a1;
- (id)_getOrCreateXPCServiceConnection;
- (void)_clearXPCServiceConnection;

@end
