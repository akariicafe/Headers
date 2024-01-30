@interface PKDeallocationGuard : NSObject {
    id /* block */ _block;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (void)invalidate;

@end
