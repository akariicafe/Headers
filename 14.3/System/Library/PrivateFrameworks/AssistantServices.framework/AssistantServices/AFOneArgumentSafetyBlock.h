@interface AFOneArgumentSafetyBlock : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _hasInvoked;
    id /* block */ _block;
    id _defaultValue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0 defaultValue:(id)a1;
- (BOOL)invokeWithValue:(id)a0;
- (id)initWithBlock:(id /* block */)a0;

@end
