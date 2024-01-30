@class NSString;

@interface ICDataCryptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *cloudSyncingObjectIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)decryptEncryptedData:(id)a0 identifier:(id)a1;
- (id)encryptData:(id)a0 identifier:(id)a1;
- (id)initWithCloudSyncingObjectIdentifier:(id)a0;

@end
