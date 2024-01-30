@class Protocol, NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface IMRemoteObjectInternal : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    Protocol *_protocol;
    NSString *_portName;
    NSString *_processName;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
    int _pid;
    BOOL _willBeTerminated;
    BOOL _postedDeathNote;
}

@end
