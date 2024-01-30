@interface _SFPublicKey : _SFKey {
    id _publicKeyInternal;
}

@property (readonly, nonatomic, getter=_secKey) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *secKey;

+ (Class)_attributesClass;
+ (id)_secKeyCreationAttributesForSpecifier:(id)a0;

- (id)keyData;
- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 specifier:(id)a1 error:(id *)a2;
- (id)initWithSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;

@end
