@class NSString, PFStateCaptureHandler, PFCoalescerContext, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PFCoalescer : NSObject <PFStateCaptureProvider> {
    long long _resetSequenceNumber;
    long long _lastUpdateResetSequenceNumber;
    PFStateCaptureHandler *_stateCaptureHandler;
}

@property (retain) NSString *label;
@property (weak) id target;
@property BOOL usesTarget;
@property (retain) id buffer;
@property (retain) NSObject<OS_dispatch_queue> *sourceQueue;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (copy) id /* block */ snapshotAndDrainHandler;
@property (copy) id /* block */ action;
@property (retain) PFCoalescerContext *context;
@property BOOL initialDelayTimerIsArmed;
@property long long state;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property double initialDelay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setCoalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)coalescerWithLabel:(id)a0 target:(id)a1 buffer:(id)a2 queue:(id)a3 bufferDrainer:(id /* block */)a4 action:(id /* block */)a5;
+ (id)setCoalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)coalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)mutableContainerCoalescerWithLabel:(id)a0 target:(id)a1 container:(id)a2 queue:(id)a3 action:(id /* block */)a4;
+ (id /* block */)mutableCollectionBufferDrainer;
+ (id)arrayCoalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)coalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)arrayCoalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)dictionaryCoalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)dictionaryCoalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)mutableContainerCoalescerWithLabel:(id)a0 container:(id)a1 queue:(id)a2 action:(id /* block */)a3;

- (void)update:(id /* block */)a0;
- (id)stateCaptureDictionary;
- (void)_resetWhileLocked;
- (void)resetAndShutDown;
- (void)update;
- (void)performEventActionWithTarget:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLabel:(id)a0 target:(id)a1 buffer:(id)a2 queue:(id)a3 bufferDrainer:(id /* block */)a4 action:(id /* block */)a5;
- (void)reset;

@end
