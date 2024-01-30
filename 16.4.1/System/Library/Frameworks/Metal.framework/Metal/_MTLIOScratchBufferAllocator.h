@class NSString, NSObject;
@protocol OS_dispatch_queue, MTLDevice, OS_dispatch_source;

@interface _MTLIOScratchBufferAllocator : NSObject <MTLIOScratchBufferAllocator> {
    unsigned long long _currentSize;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _pool_lock;
    id<MTLDevice> _device;
    struct MTLIOScratchBufferPrivateQueue { struct MTLIOScratchBufferPrivate *tqh_first; struct MTLIOScratchBufferPrivate **tqh_last; } _activeq;
    struct MTLIOScratchBufferPrivateQueue { struct MTLIOScratchBufferPrivate *tqh_first; struct MTLIOScratchBufferPrivate **tqh_last; } _poolq;
    struct MTLIOScratchBufferPrivateQueue { struct MTLIOScratchBufferPrivate *tqh_first; struct MTLIOScratchBufferPrivate **tqh_last; } _volatileq;
    unsigned long long _age_to_purge;
    NSObject<OS_dispatch_queue> *_pool_cleanup_queue;
    NSObject<OS_dispatch_source> *_pool_cleanup_source;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pool_cleanup_lock;
    BOOL _pool_cleanup_scheduled;
    BOOL _pool_cleanup_requested;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void)kickCleanupQueue;
- (void)dealloc;
- (id)newScratchBufferWithMinimumSize:(unsigned long long)a0;
- (void)returnActiveScratchBuffersToPool;
- (void)returnPriv:(struct MTLIOScratchBufferPrivate { struct { struct MTLIOScratchBufferPrivate *x0; struct MTLIOScratchBufferPrivate **x1; } x0; id x1; id x2; unsigned long long x3; unsigned long long x4; BOOL x5; } *)a0;
- (BOOL)updateScratchBuffersPurgeability;
- (void)updateScratchBuffersPurgeabilityHandler;

@end
