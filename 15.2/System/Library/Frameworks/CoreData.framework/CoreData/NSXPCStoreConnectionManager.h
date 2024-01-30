@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NSXPCStoreConnectionManager : NSObject {
    NSMutableArray *_availableConnections;
    NSMutableArray *_allConnections;
    unsigned long long _maxConnections;
    NSObject<OS_dispatch_semaphore> *_poolCounter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

- (void)dealloc;
- (id)initForStore:(id)a0;

@end
