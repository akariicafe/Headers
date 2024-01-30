@class _SFECKeySpecifier;

@interface _SFECKeyPair : _SFKeyPair {
    id _ecKeyPairInternal;
}

@property (readonly, copy, nonatomic) _SFECKeySpecifier *keySpecifier;

+ (id)_specifierForSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
+ (id)_secKeyCreationAttributesForSpecifier:(id)a0;

- (id)publicKey;
- (void).cxx_destruct;
- (id)initRandomKeyPairWithSpecifier:(id)a0 privateKeyDomain:(id)a1;
- (id)initRandomKeyPairWithSpecifier:(id)a0;
- (id)performWithCCKey:(id /* block */)a0;

@end
