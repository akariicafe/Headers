@class NSRecursiveLock, NSString, NSProtocolChecker, NSArray, IMMessageContext, NSObject, NSMutableArray;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface IMLocalObjectInternal : NSObject {
    IMMessageContext *_currentMessageContext;
    NSRecursiveLock *_lock;
    id _target;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_portName;
    NSString *_processName;
    NSProtocolChecker *_protocolChecker;
    NSArray *_whitelistedClasses;
    struct __CFRunLoopSource { } *_runloopSource;
    NSRecursiveLock *_componentQueueProcessingLock;
    NSMutableArray *_componentQueue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _componentQueueLock;
    BOOL _pendingComponentQueueProcessing;
    BOOL _busyForwarding;
    BOOL _offMainThread;
    BOOL _wasInterrupted;
}

- (void)dealloc;

@end
