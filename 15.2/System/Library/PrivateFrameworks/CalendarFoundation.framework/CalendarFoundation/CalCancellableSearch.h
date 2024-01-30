@interface CalCancellableSearch : NSObject

@property (copy, nonatomic) id /* block */ cancellationBlock;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCancellationBlock:(id /* block */)a0;

@end
