@class NSError, NSOperationQueue;

@interface ICAsyncOperation : NSOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _asyncOperationLock;
    NSOperationQueue *_childOperationQueue;
    long long _qualityOfServiceForChildOperationQueue;
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly, copy, nonatomic) NSError *error;

- (void)execute;
- (void)finish;
- (BOOL)isConcurrent;
- (BOOL)isFinished;
- (void)finishWithError:(id)a0;
- (BOOL)isAsynchronous;
- (void)_execute;
- (void)start;
- (BOOL)isExecuting;
- (void).cxx_destruct;
- (id)init;
- (void)enqueueChildOperation:(id)a0;

@end
