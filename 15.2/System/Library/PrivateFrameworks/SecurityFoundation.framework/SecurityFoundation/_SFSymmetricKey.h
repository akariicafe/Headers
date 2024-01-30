@class _SFSymmetricKeySpecifier;

@interface _SFSymmetricKey : _SFKey {
    id _symmetricKeyInternal;
}

@property (readonly, copy, nonatomic) _SFSymmetricKeySpecifier *keySpecifier;

+ (Class)_attributesClass;

- (id)keyData;
- (id)initRandomKeyWithSpecifier:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 specifier:(id)a1 error:(id *)a2;

@end
