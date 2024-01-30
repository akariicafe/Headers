@class NSData;

@interface PKEncryptedVPANPaymentCredentials : NSObject

@property (readonly, copy, nonatomic) NSData *ephemeralPublicKey;
@property (readonly, copy, nonatomic) NSData *encryptedCardData;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
