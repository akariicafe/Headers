@interface LNDeallocationHandler : NSObject {
    id _object;
    id /* block */ _deallocationHandler;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 deallocationHandler:(id /* block */)a1;

@end
