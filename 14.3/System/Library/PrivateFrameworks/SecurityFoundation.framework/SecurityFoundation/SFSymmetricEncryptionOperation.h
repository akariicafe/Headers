@class _SFSymmetricKeySpecifier, NSString;

@interface SFSymmetricEncryptionOperation : NSObject <_SFEncryptionOperation> {
    id _symmetricEncryptionOperationInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long mode;
@property (copy, nonatomic) _SFSymmetricKeySpecifier *encryptionKeySpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_defaultEncryptionOperation;
+ (long long)_defaultEncryptionMode;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeySpecifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)encrypt:(id)a0 withKey:(id)a1 ivGenerator:(id)a2 error:(id *)a3;
- (id)encrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (id)decrypt:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKeySpecifier:(id)a0 mode:(long long)a1;

@end
