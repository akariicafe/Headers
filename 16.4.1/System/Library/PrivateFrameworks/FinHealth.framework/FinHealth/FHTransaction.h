@class NSDecimalNumber, NSSet, NSDictionary, NSString, NSDate, NSTimeZone, CLLocation;

@interface FHTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long transactionInternalState;
@property (copy, nonatomic) NSSet *uniqHistogramKeys;
@property (nonatomic) BOOL hasLocation;
@property (copy, nonatomic) NSDictionary *compoundFeatures;
@property (nonatomic) long long amountFromDatabase;
@property (nonatomic) unsigned long long suggestedSuggestionCategory;
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
@property (nonatomic) unsigned long long disputeType;
@property (nonatomic) unsigned long long disputeStatus;

+ (long long)FHMerchantCategoryFromString:(id)a0;
+ (id)_allowedCountryCodesForMapsMerchant;
+ (id)fhProperties;

- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithJsonString:(id)a0;
- (id)toJson:(id)a0;
- (id)initWithDictionary:(id)a0 dateFormatter:(id)a1;

@end
