@interface MTLFunctionConstantValues : NSObject <NSCopying>

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 withName:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void)setConstantValue:(const void *)a0 type:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)setConstantValues:(const void *)a0 type:(unsigned long long)a1 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;

@end
