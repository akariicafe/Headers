@class ICEncryptionMetadata, NSData;

@interface ICCryptoEncryptionObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ICEncryptionMetadata *metadata;
@property (readonly, nonatomic) NSData *wrappedEncryptionKey;
@property (readonly, nonatomic) NSData *encryptedData;

+ (id)deserialize:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 wrappedEncryptionKey:(id)a1 encryptedData:(id)a2;

@end
