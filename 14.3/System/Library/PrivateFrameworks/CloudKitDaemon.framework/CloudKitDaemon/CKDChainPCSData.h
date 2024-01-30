@class CKEncryptedData;

@interface CKDChainPCSData : CKDPCSData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKEncryptedData *encryptedChainPCSPrivateKey;

- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPCSData:(id)a0 encryptedPrivateKey:(id)a1;

@end
