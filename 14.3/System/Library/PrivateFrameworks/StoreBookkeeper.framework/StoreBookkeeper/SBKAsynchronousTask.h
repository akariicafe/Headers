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

@property (retain) id result;
@property (retain) NSError *error;
@property (retain) SBKTaskAssertion *taskAssertion;
@property (retain) NSMutableArray *completions;
@property (copy) id /* block */ finishedHandler;
@property (copy) id /* block */ expirationHandler;
@property int cancelType;

- (void).cxx_destruct;
- (void)_invalidateTimer;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)invalidate;
- (void)_invalidateAssertion:(BOOL)a0;
- (void)addTaskCompletionBlock:(id /* block */)a0;
- (id)initWithHandlerQueue:(id)a0 timeout:(double)a1 debugDescription:(id)a2;
- (void)invokeTaskCompletionBlocksWithBlock:(id /* block */)a0;
- (void)finishTaskOperationWithResult:(id)a0 error:(id)a1;
- (void)beginTaskOperation;
- (void)_onQueueFireExpirationHandlerIfNecesary;
- (void)endTaskOperation;

@end
