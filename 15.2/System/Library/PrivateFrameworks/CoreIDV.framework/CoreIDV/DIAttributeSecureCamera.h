@class NSArray, NSData, NSString;

@interface DIAttributeSecureCamera : DIAttribute <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, getter=getCurrentValue) NSArray *currentValue;
@property (retain, nonatomic) NSArray *scanRequirements;
@property (retain, nonatomic) NSData *remoteEncryptionKey;
@property (retain, nonatomic) NSData *remoteSigningKey;
@property (copy, nonatomic) NSData *keyExchangeParameterSharedInfo;
@property (nonatomic) unsigned long long *encryptionParameterSymmetricKeySizeInBits;
@property (copy, nonatomic) NSData *encryptionParameterSymmetricAAD;
@property (copy, nonatomic) NSData *nonce;
@property (copy, nonatomic) NSString *sessionId;

- (id)defaultValue;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
