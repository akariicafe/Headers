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

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
