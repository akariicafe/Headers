@interface SGLazyInit : NSObject {
    id /* block */ _initializer;
    id /* block */ _destructor;
    id _cachedObject;
}

- (id)getObject;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithInitializer:(id /* block */)a0 destructor:(id /* block */)a1;
- (id)peekAtCachedObject;
- (void)destroyCachedObject;

@end
