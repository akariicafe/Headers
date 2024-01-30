@class NSString, NSData, NSMutableArray, PKProtobufPaymentMerchantSession;

@interface PKProtobufPaymentRequest : PBRequest <NSCopying> {
    struct { unsigned char apiType : 1; unsigned char merchantCapabilities : 1; unsigned char requiredBillingAddressFields : 1; unsigned char requiredShippingAddressFields : 1; unsigned char expectsMerchantSession : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMerchantIdentifier;
@property (retain, nonatomic) NSString *merchantIdentifier;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (retain, nonatomic) NSMutableArray *supportedNetworks;
@property (nonatomic) BOOL hasMerchantCapabilities;
@property (nonatomic) unsigned int merchantCapabilities;
@property (nonatomic) BOOL hasRequiredBillingAddressFields;
@property (nonatomic) unsigned int requiredBillingAddressFields;
@property (nonatomic) BOOL hasRequiredShippingAddressFields;
@property (nonatomic) unsigned int requiredShippingAddressFields;
@property (readonly, nonatomic) BOOL hasBillingContact;
@property (retain, nonatomic) NSData *billingContact;
@property (readonly, nonatomic) BOOL hasShippingContact;
@property (retain, nonatomic) NSData *shippingContact;
@property (retain, nonatomic) NSMutableArray *summaryItems;
@property (retain, nonatomic) NSMutableArray *shippingMethods;
@property (readonly, nonatomic) BOOL hasApplicationData;
@property (retain, nonatomic) NSData *applicationData;
@property (readonly, nonatomic) BOOL hasOriginatingURL;
@property (retain, nonatomic) NSString *originatingURL;
@property (readonly, nonatomic) BOOL hasMerchantSession;
@property (retain, nonatomic) PKProtobufPaymentMerchantSession *merchantSession;
@property (retain, nonatomic) NSMutableArray *thumbnailURLs;
@property (nonatomic) BOOL hasExpectsMerchantSession;
@property (nonatomic) BOOL expectsMerchantSession;
@property (retain, nonatomic) NSMutableArray *requiredShippingContactFields;
@property (retain, nonatomic) NSMutableArray *requiredBillingContactFields;
@property (retain, nonatomic) NSMutableArray *supportedCountries;
@property (nonatomic) BOOL hasApiType;
@property (nonatomic) unsigned int apiType;

+ (Class)shippingMethodsType;
+ (Class)summaryItemsType;
+ (Class)supportedNetworksType;
+ (Class)thumbnailURLsType;
+ (Class)requiredShippingContactFieldsType;
+ (Class)requiredBillingContactFieldsType;
+ (Class)supportedCountriesType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addThumbnailURLs:(id)a0;
- (void)addSummaryItems:(id)a0;
- (void)addShippingMethods:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)shippingMethodsCount;
- (void)clearShippingMethods;
- (id)shippingMethodsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)addSupportedNetworks:(id)a0;
- (void)addRequiredShippingContactFields:(id)a0;
- (void)addRequiredBillingContactFields:(id)a0;
- (void)addSupportedCountries:(id)a0;
- (unsigned long long)supportedNetworksCount;
- (void)clearSupportedNetworks;
- (id)supportedNetworksAtIndex:(unsigned long long)a0;
- (unsigned long long)summaryItemsCount;
- (void)clearSummaryItems;
- (id)summaryItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)thumbnailURLsCount;
- (void)clearThumbnailURLs;
- (id)thumbnailURLsAtIndex:(unsigned long long)a0;
- (unsigned long long)requiredShippingContactFieldsCount;
- (void)clearRequiredShippingContactFields;
- (id)requiredShippingContactFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)requiredBillingContactFieldsCount;
- (void)clearRequiredBillingContactFields;
- (unsigned long long)supportedCountriesCount;
- (id)requiredBillingContactFieldsAtIndex:(unsigned long long)a0;
- (void)clearSupportedCountries;
- (id)supportedCountriesAtIndex:(unsigned long long)a0;

@end
