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
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_clearXPCServiceConnection;
- (id)_getOrCreateXPCServiceConnection;
- (id)initWithServiceProtocol:(id)a0 machServiceName:(id)a1;

@end
