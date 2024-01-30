@class SBKTaskAssertion, NSString, NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBKAsynchronousTask : NSObject {
    NSString *_debugDescription;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    BOOL _taskInvalidationDisabled;
    double _timeout;
}

@property (retain, nonatomic) id result;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SBKTaskAssertion *taskAssertion;
@property (retain, nonatomic) NSMutableArray *completions;
@property (copy, nonatomic) id /* block */ finishedHandler;
@property (copy, nonatomic) id /* block */ expirationHandler;
@property (nonatomic) int cancelType;

- (void)_invalidateTimer;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)debugDescription;
- (void)_invalidateAssertion:(BOOL)a0;
- (id)initWithHandlerQueue:(id)a0 timeout:(double)a1 debugDescription:(id)a2;
- (void)_onQueueFireExpirationHandlerIfNecesary;
- (void)beginTaskOperation;
- (void)finishTaskOperationWithResult:(id)a0 error:(id)a1;
- (void)endTaskOperation;
- (void)addTaskCompletionBlock:(id /* block */)a0;
- (void)invokeTaskCompletionBlocksWithBlock:(id /* block */)a0;

@end
