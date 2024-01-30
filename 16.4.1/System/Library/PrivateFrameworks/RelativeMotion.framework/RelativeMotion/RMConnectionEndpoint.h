@class NSObject;
@protocol OS_xpc_object, RMConnectionLifecycleDelegate, OS_dispatch_queue, RMConnectionDataDelegate;

@interface RMConnectionEndpoint : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<RMConnectionLifecycleDelegate> _connectionDelegate;
    id<RMConnectionDataDelegate> _dataDelegate;
    NSObject<OS_xpc_object> *_streamingServerConnection;
    NSObject<OS_xpc_object> *_streamingClientConnection;
    NSObject<OS_xpc_object> *_streamingClientListener;
    NSObject<OS_xpc_object> *_messagingConnection;
    NSObject<OS_xpc_object> *_priorityBoostReplyMessage;
}

- (void).cxx_destruct;

@end
