@interface AVBlockOperation : AVOperation {
    id /* block */ _block;
}

- (id)initWithBlock:(id /* block */)a0;
- (void)start;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end
