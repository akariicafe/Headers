@class _SFAESKeySpecifier;

@interface _SFAESKey : _SFSymmetricKey {
    id _aesKeyInternal;
}

@property (readonly, copy, nonatomic) _SFAESKeySpecifier *keySpecifier;

- (void).cxx_destruct;
- (id)initRandomKeyWithSpecifier:(id)a0 error:(id *)a1;

@end
