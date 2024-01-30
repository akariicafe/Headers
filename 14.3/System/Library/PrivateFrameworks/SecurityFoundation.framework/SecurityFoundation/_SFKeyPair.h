@class NSString, _SFPublicKey;

@interface _SFKeyPair : _SFKey {
    id _keyPairInternal;
}

@property (readonly, nonatomic, getter=_secKey) struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *secKey;
@property (readonly, nonatomic) _SFPublicKey *publicKey;
@property (readonly, copy, nonatomic) NSString *privateKeyDomain;

+ (Class)_attributesClass;
+ (id)_secKeyCreationAttributesForSpecifier:(id)a0;

- (id)keyData;
- (id)initWithAttributes:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 specifier:(id)a1 error:(id *)a2;
- (id)initWithSecKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (id)initRandomKeyPairWithSpecifier:(id)a0 privateKeyDomain:(id)a1;
- (id)initRandomKeyPairWithSpecifier:(id)a0;

@end
