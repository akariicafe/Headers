@class NSString, CDDebug, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CDDXPCConnection : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    BOOL _hasValidConnection;
    _Atomic long long _sequenceNumber;
}

@property (readonly) NSString *serviceName;
@property (readonly) CDDebug *debug;

- (void)invalidateConnection;
- (unsigned long long)sequenceNumber;
- (BOOL)establishConnection;
- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (void)cancelConnection;
- (id)initWithMachServiceName:(id)a0 dispatchQueue:(id)a1;
- (BOOL)sendMessageAsync:(id)a0 withReplyHandler:(id /* block */)a1;
- (id)makeStashWithId:(unsigned long long)a0;
- (void)sendBarrier:(id /* block */)a0;

@end
