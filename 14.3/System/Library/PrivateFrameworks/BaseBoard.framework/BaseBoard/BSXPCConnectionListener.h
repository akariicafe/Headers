@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, BSXPCConnectionListenerHandler;

@interface BSXPCConnectionListener : NSObject {
    NSObject<OS_xpc_object> *_connection;
    id<BSXPCConnectionListenerHandler> _handler;
    NSString *_service;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;

@end
