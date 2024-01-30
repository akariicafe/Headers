@class NSDecimalNumber, NSString, NSTimeZone, NSDate, CLLocation;

@interface FHTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long transactionInternalState;
@property (nonatomic) NSString *uniqHistogramKey;
@property (nonatomic) BOOL hasLocation;
@property (nonatomic) long long amountFromDatabase;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *transactionSourceIdentifier;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSDate *transactionStatusChangedDate;
@property (nonatomic) long long transactionStatus;
@property (nonatomic) unsigned long long transactionSource;
@property (nonatomic) long long transactionType;
@property (nonatomic) long long accountType;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *merchantUniqueIdentifier;
@property (nonatomic) unsigned long long mapsMerchantID;
@property (nonatomic) int mapsMerchantResultProviderID;
@property (nonatomic) unsigned long long mapsMerchantBrandID;
@property (nonatomic) int mapsMerchantBrandResultProviderID;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *rawName;
@property (nonatomic) long long industryCode;
@property (copy, nonatomic) NSString *industryCategory;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *merchantDetailedCategory;
@property (nonatomic) long long category;
@property (copy, nonatomic) CLLocation *location;

+ (id)fhProperties;
+ (long long)FHMerchantCategoryFromString:(id)a0;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithJsonString:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0 dateFormatter:(id)a1;
- (id)toJson:(id)a0;

@end
