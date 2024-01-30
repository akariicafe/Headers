@interface DMCBlockOperation : CATOperation

@property (copy, nonatomic) id /* block */ block;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;

@end
