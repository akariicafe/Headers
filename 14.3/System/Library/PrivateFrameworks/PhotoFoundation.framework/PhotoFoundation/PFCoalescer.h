@class NSString, PFCoalescerContext, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PFCoalescer : NSObject {
    long long _resetSequenceNumber;
    long long _lastUpdateResetSequenceNumber;
}

@property (retain) NSString *label;
@property (weak) id target;
@property BOOL usesTarget;
@property (retain) id buffer;
@property (retain) NSObject<OS_dispatch_queue> *sourceQueue;
@property (retain) id targetQueue;
@property long long queueType;
@property (retain) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain) NSObject<OS_dispatch_source> *source;
@property (copy) id /* block */ snapshotAndDrainHandler;
@property (copy) id /* block */ action;
@property (retain) PFCoalescerContext *context;
@property BOOL initialDelayTimerIsArmed;
@property long long state;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property unsigned long long stateCaptureHandlerHandle;
@property double initialDelay;

+ (id)arrayCoalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)mutableContainerCoalescerWithLabel:(id)a0 container:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)setCoalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)mutableContainerCoalescerWithLabel:(id)a0 target:(id)a1 container:(id)a2 queue:(id)a3 action:(id /* block */)a4;
+ (id)coalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id /* block */)mutableCollectionBufferDrainer;
+ (id)setCoalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)coalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)dictionaryCoalescerWithLabel:(id)a0 queue:(id)a1 action:(id /* block */)a2;
+ (id)dictionaryCoalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)arrayCoalescerWithLabel:(id)a0 target:(id)a1 queue:(id)a2 action:(id /* block */)a3;
+ (id)coalescerWithLabel:(id)a0 target:(id)a1 buffer:(id)a2 queue:(id)a3 bufferDrainer:(id /* block */)a4 action:(id /* block */)a5;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (void)update;
- (void)_resetWhileLocked;
- (id)initWithLabel:(id)a0 target:(id)a1 buffer:(id)a2 queue:(id)a3 bufferDrainer:(id /* block */)a4 action:(id /* block */)a5;
- (id)stateInformation;
- (void)resetAndShutDown;
- (void)update:(id /* block */)a0;
- (void)performEventActionWithTarget:(id)a0;
- (void)setupStateCaptureHandler;

@end
