@interface CRKBlockOperation : CATOperation

@property (readonly, nonatomic) id /* block */ operationBlock;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (void)cancel;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithOperationBlock:(id /* block */)a0;

@end
