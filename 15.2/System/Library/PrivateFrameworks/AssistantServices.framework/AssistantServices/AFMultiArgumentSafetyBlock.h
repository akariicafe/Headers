@class NSMethodSignature, NSArray;

@interface AFMultiArgumentSafetyBlock : NSObject {
    struct atomic_flag { _Atomic BOOL _Value; } _hasInvoked;
    id _block;
    NSMethodSignature *_blockMethodSignature;
    NSArray *_defaultValueArray;
}

- (id)initWithBlock:(id)a0;
- (BOOL)invoke;
- (void).cxx_destruct;
- (BOOL)invokeWithValueArray:(id)a0;
- (id)initWithBlock:(id)a0 defaultValueArray:(id)a1;
- (id)initWithBlock:(id)a0 defaultValues:(id)a1;
- (BOOL)invokeWithValues:(id)a0;

@end
