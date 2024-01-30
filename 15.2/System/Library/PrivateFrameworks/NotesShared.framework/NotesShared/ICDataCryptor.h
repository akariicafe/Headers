@class NSString, NSMutableDictionary;

@interface ICDataCryptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *tagDictionary;
@property (retain, nonatomic) NSString *cloudSyncingObjectIdentifier;
@property (retain, nonatomic) NSMutableDictionary *initializationVectorDictionary;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCloudSyncingObjectIdentifier:(id)a0;
- (id)encryptData:(id)a0 identifier:(id)a1;
- (id)decryptEncryptedData:(id)a0 identifier:(id)a1;

@end
