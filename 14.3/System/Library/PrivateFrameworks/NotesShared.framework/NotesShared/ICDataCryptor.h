@class NSString, NSMutableDictionary, NSData;

@interface ICDataCryptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *tagDictionary;
@property (retain, nonatomic) NSString *cloudSyncingObjectIdentifier;
@property (retain, nonatomic) NSMutableDictionary *initializationVectorDictionary;
@property (readonly, nonatomic) NSData *unwrappedKey;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCloudSyncingObjectIdentifier:(id)a0;
- (id)encryptData:(id)a0 identifier:(id)a1;
- (id)decryptEncryptedData:(id)a0 identifier:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
