@interface QLAsynchronousBlockOperation : QLAsynchronousOperation

@property (copy, nonatomic) id /* block */ block;

- (void).cxx_destruct;
- (void)main;
- (id)initWithBlock:(id /* block */)a0;

@end
