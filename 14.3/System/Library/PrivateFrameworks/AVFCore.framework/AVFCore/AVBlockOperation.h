@interface AVBlockOperation : AVOperation {
    id /* block */ _block;
}

- (void)cancel;
- (id)init;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (void)start;

@end
