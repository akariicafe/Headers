@interface GKDelayOperation : NSOperation

@property (nonatomic) double delayInSec;
@property (copy, nonatomic) id /* block */ operation;

- (void)main;
- (void).cxx_destruct;
- (id)initWithDelay:(double)a0 andOperation:(id /* block */)a1;

@end
