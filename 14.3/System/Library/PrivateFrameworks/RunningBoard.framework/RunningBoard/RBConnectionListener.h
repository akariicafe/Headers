@class NSString, NSMapTable, NSObject, NSMutableArray;
@protocol OS_xpc_object, RBDaemonContextProviding, OS_dispatch_queue, OS_os_transaction;

@interface RBConnectionListener : NSObject <NSXPCListenerDelegate, RBStateCapturing> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSMapTable *_lock_connectionToClientMap;
    NSMapTable *_lock_identifierToClientMap;
    NSMutableArray *_lock_readyClients;
    id<RBDaemonContextProviding> _context;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

@end
