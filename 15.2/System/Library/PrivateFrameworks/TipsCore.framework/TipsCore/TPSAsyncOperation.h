@class NSError;

@interface TPSAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _executing;
    BOOL _finished;
    BOOL _cancelled;
}

@property (copy, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ preCompletionBlock;

- (BOOL)isFinished;
- (void)finishWithError:(id)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCancelled;
- (void)cancel;
- (void)lockExec:(id /* block */)a0;

@end
