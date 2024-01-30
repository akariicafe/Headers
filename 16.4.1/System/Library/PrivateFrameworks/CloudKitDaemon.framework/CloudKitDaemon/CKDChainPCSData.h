@class CKEncryptedData;

@interface CKDChainPCSData : CKDPCSData <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CKEncryptedData *encryptedChainPCSPrivateKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPCSData:(id)a0 encryptedPrivateKey:(id)a1;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;

@end
