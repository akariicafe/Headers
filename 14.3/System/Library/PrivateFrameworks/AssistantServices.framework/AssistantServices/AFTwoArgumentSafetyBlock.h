@interface AFTwoArgumentSafetyBlock : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _hasInvoked;
    id /* block */ _block;
    id _defaultValue1;
    id _defaultValue2;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (BOOL)invokeWithValue:(id)a0 andValue:(id)a1;
- (id)initWithBlock:(id /* block */)a0 defaultValue1:(id)a1 defaultValue2:(id)a2;

@end
