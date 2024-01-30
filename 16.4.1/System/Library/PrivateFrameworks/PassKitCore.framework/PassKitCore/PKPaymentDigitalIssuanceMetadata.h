@class NSString, NSArray, NSDictionary, NSSet;

@interface PKPaymentDigitalIssuanceMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *serviceProviderIdentifier;
@property (readonly, copy, nonatomic) NSString *serviceProviderCountryCode;
@property (readonly, copy, nonatomic) NSArray *serviceProviderSupportedNetworks;
@property (readonly, copy, nonatomic) NSArray *serviceProviderAcceptedNetworks;
@property (readonly, copy, nonatomic) NSArray *serviceProviderCapabilities;
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderDict;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSString *merchantID;
@property (readonly, copy, nonatomic) NSArray *defaultSuggestions;
@property (readonly, copy, nonatomic) NSSet *serviceProviderSupportedCountries;
@property (readonly, copy, nonatomic) NSString *balanceIdentifier;
@property (readonly, copy, nonatomic) NSString *balanceLocalizedDisplayName;
@property (readonly, copy, nonatomic) NSString *balanceLocalizedDescription;
@property (readonly, copy, nonatomic) NSString *serviceProviderProductsLocalizedDisplayName;
@property (readonly, copy, nonatomic) NSString *serviceProviderProductsLocalizedDescription;
@property (readonly, copy, nonatomic) NSArray *serviceProviderProducts;
@property (readonly, nonatomic, getter=isPurchaseBased) BOOL purchaseBased;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
