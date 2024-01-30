@class HMFActivity, NSError, HAP2PropertyLock;

@interface HAP2AsynchronousOperation : NSOperation {
    HAP2PropertyLock *_propertyLock;
}

@property (readonly, nonatomic, getter=isExecuting) BOOL executing;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) HMFActivity *activity;
@property (readonly, nonatomic) NSError *error;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)cancel;
- (void)finish;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (void)cancelWithError:(id)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 optionalActivity:(id)a1;
- (id)initWithName:(id)a0 activity:(id)a1;

@end
