@class _SFAESKeySpecifier;

@interface SFAESEncryptionOperation : SFSymmetricEncryptionOperation {
    id _aesEncryptionOperationInternal;
}

@property (copy, nonatomic) _SFAESKeySpecifier *encryptionKeySpecifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (id)decrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithKeySpecifier:(id)a0 mode:(long long)a1;

@end
