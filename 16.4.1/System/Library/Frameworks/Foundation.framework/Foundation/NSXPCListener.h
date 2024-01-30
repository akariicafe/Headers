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

+ (id)anonymousListener;
+ (id)serviceListener;
+ (void)enableTransactions;
+ (id)_UUID;

- (id)_queue;
- (id)_initShared;
- (id)__initWithoutRemoteConnection;
- (id)_xpcConnection;
- (void)suspend;
- (id)serviceName;
- (id)initWithMachServiceName:(id)a0;
- (void)__receiveRemoteConnection:(id)a0;
- (id)_initWithRemoteName:(id)a0;
- (id)initWithServiceName:(id)a0;
- (void)dealloc;
- (void)stop;
- (void)activate;
- (void)setOptions:(unsigned long long)a0;
- (id)description;
- (void)invalidate;
- (void)_setQueue:(id)a0;
- (void)resume;

@end
