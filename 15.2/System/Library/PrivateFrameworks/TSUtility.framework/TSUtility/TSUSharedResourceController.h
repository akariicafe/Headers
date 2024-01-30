@class NSString, NSObject, NSCondition;
@protocol OS_dispatch_group, TSUSharedResourceControllerDelegate;

@interface TSUSharedResourceController : NSObject {
    int _acquirerCount;
    id<TSUSharedResourceControllerDelegate> _delegate;
    NSString *_resourceForThreadKey;
    NSString *_hasResourceForThreadKey;
    NSCondition *_resourceLock;
    id _resource;
    struct { unsigned char canWaitOnMainThread : 1; unsigned char acquiresResourceAsynchronously : 1; unsigned char hasResource : 1; } _flags;
    int _threadsAcquiringResourceCount;
    NSCondition *_waitLock;
    int _waitCount;
    NSObject<OS_dispatch_group> *_accessInProgressGroup;
    NSObject<OS_dispatch_group> *_willEndAccessGroup;
}

@property (readonly, nonatomic) NSString *UUID;
@property (nonatomic) BOOL canWaitOnMainThread;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithName:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (void)didBeginAccessToResource:(id)a0 isFromThreadWaitingToAcquireResource:(BOOL)a1;
- (void)willEndAccessToResourceForcingToWaitForPendingAccesses:(BOOL)a0;
- (void)wakeUpAllThreadsWaitingForResourceWithLock;
- (BOOL)performSynchronousAccessIfResourceIsAvailable:(BOOL)a0 usingBlock:(id /* block */)a1;
- (void)acquireResourceWithLockAndPerformSynchronousAccessUsingBlock:(id /* block */)a0;
- (void)waitForResourceWithLockAndPerformSynchronousAccessUsingBlock:(id /* block */)a0;
- (void)willEndAccessToResource;
- (void)didBeginAccessToResource:(id)a0;
- (void)performSynchronousAccessUsingBlock:(id /* block */)a0;
- (BOOL)performSynchronousAccessIfResourceIsAvailableUsingBlock:(id /* block */)a0;

@end
