@interface SBPPTBlockOperation : SBPPTOperation

@property (weak, nonatomic) id /* block */ timeoutBlock;
@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (nonatomic) double timeoutInterval;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)operationWithBlock:(id /* block */)a0;

- (void)cancel;
- (void)finish;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)isAsynchronous;
- (void)start;
- (void)cancelAndFailTestWithReason:(id)a0;

@end
