@class _SFECKeySpecifier;

@interface _SFECPublicKey : _SFPublicKey {
    id _ecPublicKeyInternal;
}

@property (readonly, copy, nonatomic) _SFECKeySpecifier *keySpecifier;

+ (id)_specifierForSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
+ (id)_secKeyCreationAttributesForSpecifier:(id)a0;
+ (id)keyWithSubjectPublicKeyInfo:(id)a0;

- (void).cxx_destruct;
- (id)performWithCCKey:(id /* block */)a0;
- (id)encodeSubjectPublicKeyInfo;

@end
