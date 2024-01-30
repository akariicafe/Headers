@interface SBPPTBlockOperation : SBPPTOperation {
    BOOL _cancelled;
}

@property (weak, nonatomic) id /* block */ timeoutBlock;
@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (nonatomic) double timeoutInterval;

+ (id)keyPathsForValuesAffectingIsFinished;
+ (id)operationWithBlock:(id /* block */)a0;
+ (id)keyPathsForValuesAffectingIsExecuting;
+ (id)operationWithName:(id)a0 block:(id /* block */)a1;

- (void)finish;
- (void)cancelAndFailTestWithReason:(id)a0;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (id)init;
- (id)initWithBlock:(id /* block */)a0;
- (void)start;
- (id)description;
- (id)initWithName:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;

@end
