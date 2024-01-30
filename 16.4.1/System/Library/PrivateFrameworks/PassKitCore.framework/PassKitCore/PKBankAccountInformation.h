@class NSString;

@interface PKBankAccountInformation : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *accountNumber;
@property (copy, nonatomic) NSString *routingNumber;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long status;

+ (Class)_classForType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)_commonDeleteAllBankInformation;
- (id)accountSuffix;
- (void)deleteAllBankInformation;
- (void)deleteAllLocalBankInformation;
- (id)maskedAccountNumber;
- (void)updateToLatestKeychainData;

@end
