@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface NSXPCStoreConnectionManager : NSObject {
    NSMutableArray *_allConnections;
    NSObject<OS_dispatch_semaphore> *_poolCounter;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionLock;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (readonly, nonatomic) unsigned long long maxConnections;
@property (readonly, nonatomic) NSMutableArray *availableConnections;

- (id)initForStore:(id)a0;
- (void)dealloc;
- (void)disconnectAllConnections;
- (void)sendMessageWithContext:(id)a0;
- (id)_checkoutConnection;
- (void)_checkinConnection:(id)a0;

@end
