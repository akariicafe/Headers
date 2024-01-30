@class HDCloudSyncOperation, NSString, NSArray, NSMutableArray;

@interface HDCloudSyncCompoundOperation : HDCloudSyncOperation {
    NSMutableArray *_operations;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDCloudSyncOperation *_currentOperation;
    NSArray *_remainingOperations;
    struct atomic_flag { _Atomic BOOL _Value; } _runningOperations;
    NSMutableArray *_operationErrors;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) BOOL continueOnSubOperationError;
@property (readonly, copy) NSArray *operations;
@property (copy) id /* block */ preparationHandler;

+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldProduceOperationAnalytics;

- (void).cxx_destruct;
- (void)main;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (id)description;
- (void)_invalidate;
- (void)skip;
- (void)start;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 name:(id)a2 continueOnSubOperationError:(BOOL)a3;
- (void)addOperation:(id)a0 transitionHandler:(id /* block */)a1;
- (void)addOperationOfClass:(Class)a0 transitionHandler:(id /* block */)a1;
- (void)_recordError:(id)a0;
- (id)_compoundError;
- (void)_runRemainingOperations;
- (id)_popNextRunnableOperation;
- (void)_clearOperationAndRunRemaining:(id)a0;
- (void)_currentOperation:(id)a0 didFailWithError:(id)a1 nextOperation:(id)a2 transitionHandler:(id /* block */)a3;
- (void)_currentOperationDidFinish:(id)a0 nextOperation:(id)a1 transitionHandler:(id /* block */)a2;

@end
