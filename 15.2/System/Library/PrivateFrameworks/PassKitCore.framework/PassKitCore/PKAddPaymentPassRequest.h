@class NSString, NSData;

@interface PKAddPaymentPassRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *encryptionVersion;
@property (copy, nonatomic) NSData *publicKeyHash;
@property (copy, nonatomic) NSString *issuerIdentifier;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *hostApplicationIdentifier;
@property (copy, nonatomic) NSString *hostApplicationVersion;
@property (copy, nonatomic) NSData *FPInfo;
@property (copy, nonatomic) NSData *encryptedPassData;
@property (copy, nonatomic) NSData *activationData;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSData *wrappedKey;

- (void)encodeWithCoder:(id)a0;
- (BOOL)_hasRequiredThirdPartyFields:(BOOL)a0;
- (BOOL)_hasRequiredFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
