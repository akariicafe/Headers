@interface SBPPTBlockOperation : SBPPTOperation {
    BOOL _cancelled;
}

@property (weak, nonatomic) id /* block */ timeoutBlock;
@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (nonatomic) double timeoutInterval;

+ (id)operationWithName:(id)a0 block:(id /* block */)a1;
+ (id)operationWithBlock:(id /* block */)a0;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)keyPathsForValuesAffectingIsFinished;

- (void)finish;
- (BOOL)isFinished;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithName:(id)a0 block:(id /* block */)a1;
- (BOOL)isAsynchronous;
- (id)description;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (void)cancelAndFailTestWithReason:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cancel;

@end
