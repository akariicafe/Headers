@class NSString, NSData;

@interface PKAppletSubcredentialEncryptedRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *encryptionScheme;
@property (readonly, nonatomic) NSString *ephemeralPublicKey;
@property (readonly, nonatomic) NSString *publicKeyHash;
@property (readonly, nonatomic) NSData *data;

- (id)initWithRequest:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEncryptionScheme:(id)a0 ephemeralPublicKey:(id)a1 publicKeyHash:(id)a2 data:(id)a3;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
