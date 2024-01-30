@class NSError;

@interface TPSAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
}

@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ preCompletionBlock;

- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (BOOL)isExecuting;
- (void)lockExec:(id /* block */)a0;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;

@end
