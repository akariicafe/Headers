@class NSXPCListenerEndpoint, NSString, NSObject, OS_xpc_remote_connection;
@protocol OS_xpc_object, OS_dispatch_queue, NSXPCListenerDelegate;

@interface NSXPCListener : NSObject {
    union { NSObject<OS_xpc_object> *xpc; OS_xpc_remote_connection *remote; } _connection;
    NSObject<OS_dispatch_queue> *_userQueue;
    _Atomic id _delegate;
    NSString *_serviceName;
    unsigned long long _state;
    unsigned char _remote;
}

@property (weak) id<NSXPCListenerDelegate> delegate;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;

+ (void)enableTransactions;
+ (id)anonymousListener;
+ (id)serviceListener;
+ (id)_UUID;

- (id)initWithMachServiceName:(id)a0;
- (id)_xpcConnection;
- (id)_initWithRemoteName:(id)a0;
- (void)__receiveRemoteConnection:(id)a0;
- (id)__initWithoutRemoteConnection;
- (id)_initShared;
- (id)_queue;
- (void)_setQueue:(id)a0;
- (id)description;
- (id)initWithServiceName:(id)a0;
- (void)activate;
- (void)suspend;
- (void)invalidate;
- (void)resume;
- (void)dealloc;
- (void)setOptions:(unsigned long long)a0;
- (id)serviceName;
- (void)stop;

@end
