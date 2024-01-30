@interface CalCancellableSearch : NSObject

@property (copy, nonatomic) id /* block */ cancellationBlock;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithCancellationBlock:(id /* block */)a0;

@end
