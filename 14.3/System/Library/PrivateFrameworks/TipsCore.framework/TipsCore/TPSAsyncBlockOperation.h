@interface TPSAsyncBlockOperation : TPSAsyncOperation

@property (readonly, copy, nonatomic) id /* block */ asyncBlock;

+ (id)asyncBlockOperationWithAsyncBlock:(id /* block */)a0;

- (id)initWithAsyncBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)main;

@end
