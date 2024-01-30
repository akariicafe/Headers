@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AKLiveValue : NSObject {
    id _value;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _syncProducer;
    id /* block */ _asyncProducer;
    NSMutableArray *_cleanupBlocks;
}

+ (id)liveValueWithAsyncProducer:(id /* block */)a0;
+ (id)liveValueWithSyncProducer:(id /* block */)a0;

- (void)_setValue:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_onqueue_updateValue;
- (void)_updateValue;
- (id)captureCurrentValue;
- (id)initWithAsyncProducer:(id /* block */)a0;
- (id)initWithSyncProducer:(id /* block */)a0;
- (id /* block */)newTrigger;
- (id /* block */)newTriggerWithCleanup:(id /* block */)a0;

@end
