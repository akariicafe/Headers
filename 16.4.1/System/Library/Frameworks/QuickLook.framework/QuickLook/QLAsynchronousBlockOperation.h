@interface QLAsynchronousBlockOperation : QLAsynchronousOperation

@property (copy, nonatomic) id /* block */ block;

- (void)main;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
