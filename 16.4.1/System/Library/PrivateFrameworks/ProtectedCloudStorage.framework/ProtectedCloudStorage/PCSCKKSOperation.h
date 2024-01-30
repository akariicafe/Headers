@class NSError, NSMutableArray;

@interface PCSCKKSOperation : NSOperation

@property (retain) NSMutableArray *successDependencies;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (getter=isCancelled) BOOL cancelled;
@property (retain) NSError *error;

+ (id)operation:(id)a0 block:(id /* block */)a1;

- (void)completeOperation;
- (void).cxx_destruct;
- (BOOL)startOperation;
- (void)addSuccessDependency:(id)a0;
- (BOOL)checkDependencies;

@end
