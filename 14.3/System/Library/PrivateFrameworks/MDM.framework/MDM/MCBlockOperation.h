@interface MCBlockOperation : CATOperation

@property (copy, nonatomic) id /* block */ block;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;

@end
