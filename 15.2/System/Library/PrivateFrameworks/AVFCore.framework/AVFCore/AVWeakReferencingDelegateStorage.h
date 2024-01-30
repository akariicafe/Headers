@class NSString, AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage> {
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    struct OpaqueConcurrentAccessDetector { } *_detectorForWeakReferenceToDelegate;
    AVWeakReference *_weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, nonatomic) id delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)_setDelegateViaWeakReference:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)getRetainedDelegate:(id *)a0 retainedDelegateQueue:(id *)a1;
- (void)invokeDelegateCallbackWithBlock:(id /* block */)a0 synchronouslyIfDelegateQueueIsQueue:(id)a1;
- (id)init;
- (void)_collectUncollectables;
- (void)dealloc;
- (id)_delegate;
- (void)invokeDelegateCallbackWithBlock:(id /* block */)a0;

@end
