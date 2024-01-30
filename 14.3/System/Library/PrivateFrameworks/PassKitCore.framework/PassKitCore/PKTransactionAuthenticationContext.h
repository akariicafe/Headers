@class NSData;

@interface PKTransactionAuthenticationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long requestedAuthenticationMechanisms;
@property (nonatomic) unsigned long long processedAuthenticationMechanisms;
@property (nonatomic) unsigned long long dataCollectedAuthenticationMechanisms;
@property (nonatomic) BOOL complete;
@property (nonatomic) long long paymentPINFormat;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSData *signingKeyMaterial;
@property (copy, nonatomic) NSData *partialSignature;
@property (nonatomic) long long authenticationFailure;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqualToTransactionAuthenticationContext:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
