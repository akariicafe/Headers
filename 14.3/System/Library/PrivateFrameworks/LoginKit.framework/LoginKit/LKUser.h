@class CNContact, NSMutableDictionary, NSURL, NSDate, NSString;

@interface LKUser : UMMutableUser <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastOnlineAuth;
@property (nonatomic) unsigned long long passwordType;
@property (retain, nonatomic) NSURL *mediumImageURL;
@property (retain, nonatomic) NSURL *largeImageURL;
@property (retain, nonatomic) NSURL *localMediumImageURL;
@property (retain, nonatomic) NSURL *localLargeImageURL;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSMutableDictionary *namingSimilarityInfoByClassID;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *phoneticGivenName;
@property (retain, nonatomic) NSString *phoneticFamilyName;
@property (nonatomic) BOOL isPhoneticInfoProvidedInConfiguration;
@property (retain, nonatomic) NSString *tokenizedPhoneticDisplayName;
@property (nonatomic) BOOL isAttemptedPhoneticTranscription;

+ (id)userFromUMUser:(id)a0;
+ (unsigned long long)UMUserPasscodeTypeFromLKPasswordType:(unsigned long long)a0;
+ (unsigned long long)LKPasswordTypeFromUMUserPasscodeType:(unsigned long long)a0;
+ (id)fullNameWithFamilyName:(id)a0 givenName:(id)a1;
+ (unsigned long long)passwordTypeFromPasswordTypeString:(id)a0;
+ (void)setAutogeneratesPhoneticNameWithLocale:(id)a0;
+ (id)userFromDictionary:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setDiffUMUserPropertiesFromUMUser:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToLKUser:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
