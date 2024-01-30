@class NSObject;
@protocol OS_dispatch_queue;

@interface BWDeferredContainerManagerBase : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
    NSObject<OS_dispatch_queue> *_timerQueue;
}

+ (void)initialize;

- (void)dealloc;
- (id)_containerURLForApplicationID:(id)a0 captureRequestIdentifier:(id)a1 exists:(BOOL *)a2 isDirectory:(BOOL *)a3;
- (int)deleteContainerForApplicationID:(id)a0 captureRequestIdentifier:(id)a1;
- (id)initWithQueuePriority:(unsigned int)a0;
- (id)manifestForApplicationID:(id)a0 captureRequestIdentifier:(id)a1 err:(int *)a2;
- (id)manifestsForApplicationID:(id)a0 err:(int *)a1;

@end
