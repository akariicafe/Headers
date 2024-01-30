@class _SFKeySpecifier, NSString, SFSymmetricEncryptionOperation, SFRSAEncryptionOperation;

@interface SFRSA_WrappedKeyEncryptionOperation : NSObject <_SFEncryptionOperation, NSCopying> {
    id _wrappedKeyEncryptionOperationInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) SFRSAEncryptionOperation *keyWrappingOperation;
@property (copy, nonatomic) SFSymmetricEncryptionOperation *sessionEncryptionOperation;
@property (readonly, copy, nonatomic) _SFKeySpecifier *encryptionKeySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)encrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)decrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeyWrappingOperation:(id)a0;
- (id)initWithKeyWrappingOperation:(id)a0 sessionEncryptionOperation:(id)a1;

@end
