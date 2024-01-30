@class RTTimer, NSRecursiveLock, RTTimerManager;
@protocol RTTransientObjectProtocol;

@interface RTTransientObject : NSProxy

@property (copy, nonatomic) id /* block */ backingObjectCreationBlock;
@property (retain, nonatomic) id backingObject;
@property (nonatomic) double backingObjectExpirationTimeInterval;
@property (retain, nonatomic) RTTimer *backingObjectExpirationTimer;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (nonatomic) double lastForwardedMessageTimeInterval;
@property (weak, nonatomic) id<RTTransientObjectProtocol> transientObjectDelegate;

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)touch;
- (id)initWithCreationBlock:(id /* block */)a0 timeout:(double)a1 timerManager:(id)a2;
- (void)dealloc;
- (id)__createBackingObject;
- (void)__invalidateBackingObject;
- (void)__createTimerAssociatedWithBackingObject;
- (id)initWithCreationBlock:(id /* block */)a0 timeout:(double)a1;
- (void)__handleBackingObjectTimerExpired;

@end
