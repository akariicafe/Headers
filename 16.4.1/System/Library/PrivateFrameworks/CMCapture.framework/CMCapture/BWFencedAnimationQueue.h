@class NSMutableArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface BWFencedAnimationQueue : NSObject {
    NSMutableArray *_fencedAnimationQueue;
    NSObject<OS_dispatch_semaphore> *_fencedAnimationQueueSemaphore;
    unsigned int _fencedAnimationFramerateThrottle;
    double _timeOfLastFencedAnimation;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _queueLock;
}

@property (readonly) unsigned long long count;

- (void)flush;
- (void)dealloc;
- (id)dequeueFencedAnimation;
- (void)enqueueFencedAnimation:(id)a0;
- (id)initWithQueueSize:(unsigned int)a0;

@end
