@class NSString, NSData;

@interface PKAppletSubcredentialEncryptedRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *encryptionScheme;
@property (readonly, nonatomic) NSString *ephemeralPublicKey;
@property (readonly, nonatomic) NSString *publicKeyHash;
@property (readonly, nonatomic) NSData *data;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRequest:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEncryptionScheme:(id)a0 ephemeralPublicKey:(id)a1 publicKeyHash:(id)a2 data:(id)a3;

@end
