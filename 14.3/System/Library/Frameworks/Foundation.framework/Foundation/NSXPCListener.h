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

+ (id)serviceListener;
+ (id)anonymousListener;
+ (id)_UUID;
+ (void)enableTransactions;

- (id)_xpcConnection;
- (id)_initWithRemoteName:(id)a0;
- (void)__receiveRemoteConnection:(id)a0;
- (id)_initShared;
- (id)__initWithoutRemoteConnection;
- (void)setOptions:(unsigned long long)a0;
- (id)_queue;
- (void)_setQueue:(id)a0;
- (void)dealloc;
- (void)stop;
- (id)initWithMachServiceName:(id)a0;
- (id)serviceName;
- (id)initWithServiceName:(id)a0;
- (id)description;
- (void)activate;
- (void)resume;
- (void)suspend;
- (void)invalidate;

@end
