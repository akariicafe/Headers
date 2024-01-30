@class NSMutableArray;

@interface MRULongPressGestureRecognizer : UILongPressGestureRecognizer

@property (retain, nonatomic) NSMutableArray *cancellationHandlers;

- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)addCancellationHandler:(id /* block */)a0;

@end
