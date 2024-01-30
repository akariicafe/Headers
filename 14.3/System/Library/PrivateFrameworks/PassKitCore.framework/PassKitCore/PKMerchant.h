@class NSString, NSURL, PKMapsBrand, PKMapsMerchant;

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *originURL;
@property (copy, nonatomic) NSString *webMerchantIdentifier;
@property (copy, nonatomic) NSString *webMerchantName;
@property (nonatomic) long long adamIdentifier;
@property (nonatomic) long long industryCode;
@property (copy, nonatomic) NSString *industryCategory;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *rawName;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSString *rawCANL;
@property (copy, nonatomic) NSString *rawCity;
@property (copy, nonatomic) NSString *rawState;
@property (copy, nonatomic) NSString *rawCountry;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *zip;
@property (nonatomic) long long cleanConfidenceLevel;
@property (nonatomic) BOOL useRawMerchantData;
@property (nonatomic) long long fallbackcategory;
@property (copy, nonatomic) NSString *fallbackDetailedCategory;
@property (retain, nonatomic) PKMapsMerchant *mapsMerchant;
@property (retain, nonatomic) PKMapsBrand *mapsBrand;
@property (nonatomic) BOOL mapsDataIsFromLocalMatch;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL hasMapsMatch;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long category;
@property (readonly, nonatomic) NSString *detailedCategory;
@property (readonly, nonatomic) NSURL *heroImageURL;
@property (readonly, nonatomic) NSString *heroImageAttribution;
@property (readonly, nonatomic) NSURL *logoImageURL;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) NSURL *businessChatURL;

+ (id)recordNamePrefix;

- (BOOL)shouldBeCombinedWithMerchant:(id)a0;
- (BOOL)hasBetterVisualPropertiesThanMerchant:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCloudStoreCoder:(id)a0;
- (id)initWithCloudStoreCoder:(id)a0;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)a0;
- (void)applyPropertiesFromCloudStoreRecord:(id)a0;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (unsigned long long)itemType;
- (id)uniqueIdentifier;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionaryRepresentation;
- (void)_regenerateDisplayName;
- (BOOL)isEqualToMerchant:(id)a0;
- (id)primaryIdentifier;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)a0;
- (BOOL)hasCloudArchivableDeviceData;

@end
