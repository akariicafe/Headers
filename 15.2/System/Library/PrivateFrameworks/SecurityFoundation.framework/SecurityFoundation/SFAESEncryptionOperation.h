@class _SFAESKeySpecifier;

@interface SFAESEncryptionOperation : SFSymmetricEncryptionOperation {
    id _aesEncryptionOperationInternal;
}

@property (copy, nonatomic) _SFAESKeySpecifier *encryptionKeySpecifier;

- (id)encrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)decrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithKeySpecifier:(id)a0 mode:(long long)a1;

@end
