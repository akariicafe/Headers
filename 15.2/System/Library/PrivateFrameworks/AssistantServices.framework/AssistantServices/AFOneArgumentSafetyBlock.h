@interface AFOneArgumentSafetyBlock : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _hasInvoked;
    id /* block */ _block;
    id _defaultValue;
}

- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)invokeWithValue:(id)a0;
- (id)initWithBlock:(id /* block */)a0 defaultValue:(id)a1;
- (void)dealloc;

@end
