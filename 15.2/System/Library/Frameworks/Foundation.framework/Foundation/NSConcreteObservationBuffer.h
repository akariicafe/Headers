@class NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NSConcreteObservationBuffer : NSObservationBuffer {
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSOperationQueue *_outputQueue;
    long long _policy;
    int _state;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_dequeue;
    unsigned long long _maxCount;
    id /* block */ _bufferFullHandler;
    BOOL _memoryPressureSensitive;
    BOOL _automaticallyEmitsObjects;
}

- (id)initWithMaximumObjectCount:(unsigned long long)a0 fullPolicy:(long long)a1 outputQueue:(id)a2;
- (void)emitObject;
- (void)_receiveBox:(id)a0;
- (void)_mergeChanges;
- (void)emitAllObjects;
- (void)_alreadyOnQueueEmitAllObjects;
- (void)setAutomaticallyEmitsObjects:(BOOL)a0;
- (void)_alreadyOnQueueEmitObject;
- (BOOL)automaticallyEmitsObjects;
- (BOOL)isMemoryPressureSensitive;
- (id /* block */)bufferFullHandler;
- (void)setBufferFullHandler:(id /* block */)a0;
- (void)setMemoryPressureSensitive:(BOOL)a0;
- (void)dealloc;

@end
