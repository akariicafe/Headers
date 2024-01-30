@class NSString, NSData, NSDate, PKVirtualCardCredentials;

@interface PKVirtualCard : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *cardholderName;
@property (nonatomic) long long state;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *FPANSuffix;
@property (copy, nonatomic) NSString *expiration;
@property (copy, nonatomic) NSDate *lastUpdatedDate;
@property (copy, nonatomic) NSData *encryptedData;
@property (copy, nonatomic) NSData *ephemeralPublicKey;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDate *lastAutoFilledBySafari;
@property (nonatomic) BOOL supportsLocalStorage;
@property (nonatomic) BOOL requiresAuthentication;
@property (copy, nonatomic) NSString *securityCodeIdentifier;
@property (copy, nonatomic) NSDate *securityCodeExpiration;
@property (nonatomic) BOOL hasDynamicSecurityCode;
@property (copy, nonatomic) PKVirtualCardCredentials *keychainCardCredentials;

+ (void)queryKeychainForVirtualCards:(id /* block */)a0;
+ (void)deleteAllLocalKeychainVirtualCards;

- (BOOL)hasSensitiveCredentials;
- (id)keychainVirtualCard;
- (id)generateHashWithPrimaryAccountNumber:(id)a0 expirationDate:(id)a1;
- (void)writeKeychainVirtualCardToKeychain;
- (BOOL)isValidFromKeychain;
- (void)deleteLocalKeychainVirtualCard;
- (id)_wrapperWithType:(unsigned long long)a0 identifier:(id)a1;
- (BOOL)isEqualToSafariEntryWithPrimaryAccountNumber:(id)a0 expirationDate:(id)a1;
- (void)setLastAutoFilledBySafariWithCompletion:(id /* block */)a0;
- (void)deleteKeychainVirtualCard;
- (id)initWithKeychainData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)mergeVirtualCardWith:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
