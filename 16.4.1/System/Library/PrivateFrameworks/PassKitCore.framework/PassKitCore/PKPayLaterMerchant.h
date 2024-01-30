@class NSString, NSURL, PKMapsBrand, PKMapsMerchant, NSDate;

@interface PKPayLaterMerchant : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *merchantIdentifier;
@property (nonatomic) long long merchantCategoryCode;
@property (nonatomic) long long merchantCategory;
@property (nonatomic) long long fallbackCategory;
@property (copy, nonatomic) NSString *rawName;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *rawCity;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *rawState;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *rawCountry;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *zipcode;
@property (copy, nonatomic) NSString *rawCANL;
@property (nonatomic) long long industryCode;
@property (copy, nonatomic) NSString *industryCategory;
@property (copy, nonatomic) NSString *authNetworkData;
@property (copy, nonatomic) NSString *clearingNetworkData;
@property (nonatomic) long long cleanConfidence;
@property (copy, nonatomic) NSURL *originURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;
@property (nonatomic) long long adamIdentifier;
@property (retain, nonatomic) PKMapsMerchant *mapsMerchant;
@property (retain, nonatomic) PKMapsBrand *mapsBrand;
@property (nonatomic) BOOL requiresMerchantReprocessing;
@property (copy, nonatomic) NSDate *lastMerchantReprocessingDate;

- (void)encodeWithCoder:(id)a0;
- (id)displayName;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)displayNameIsFallbackString;
- (id)displayNamePurchase;
- (BOOL)isEqualToPayLaterMerchant:(id)a0;
- (BOOL)payLaterMerchantDictionaryIsEqual:(id)a0;

@end
