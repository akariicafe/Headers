@class NSData;

@interface PKEncryptedDataObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long version;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSData *data;

- (void)encodeWithCoder:(id)a0;
- (id)asWebServiceDictionary;
- (void).cxx_destruct;
- (id)initWithWebServiceDictionary:(id)a0;
- (id)initWithCoder:(id)a0;

@end
