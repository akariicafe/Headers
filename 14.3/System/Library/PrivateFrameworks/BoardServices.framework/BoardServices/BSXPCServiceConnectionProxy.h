@class NSObject, BSXPCServiceConnection, BSObjCProtocol;
@protocol OS_xpc_object, OS_dispatch_queue, BSServiceDispatchingQueue;

@interface BSXPCServiceConnectionProxy : NSObject {
    BSObjCProtocol *_remoteProtocol;
    BSObjCProtocol *_localProtocol;
    BSXPCServiceConnection *_connection;
    NSObject<OS_xpc_object> *_XPCConnection;
    NSObject<OS_dispatch_queue> *_XPCConnectionTargetQueue;
    id<BSServiceDispatchingQueue> _replyQueue;
}

- (void)dealloc;

@end
