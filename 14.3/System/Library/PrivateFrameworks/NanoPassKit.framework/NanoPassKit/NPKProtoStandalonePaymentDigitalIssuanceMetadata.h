@class NSString, NSMutableArray;

@interface NPKProtoStandalonePaymentDigitalIssuanceMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasServiceProviderIdentifier;
@property (retain, nonatomic) NSString *serviceProviderIdentifier;
@property (readonly, nonatomic) BOOL hasServiceProviderCountryCode;
@property (retain, nonatomic) NSString *serviceProviderCountryCode;
@property (retain, nonatomic) NSMutableArray *serviceProviderAcceptedNetworks;
@property (retain, nonatomic) NSMutableArray *serviceProviderCapabilities;
@property (readonly, nonatomic) BOOL hasServiceProviderDictJson;
@property (retain, nonatomic) NSString *serviceProviderDictJson;
@property (readonly, nonatomic) BOOL hasAction;
@property (retain, nonatomic) NSString *action;
@property (readonly, nonatomic) BOOL hasMerchantID;
@property (retain, nonatomic) NSString *merchantID;
@property (retain, nonatomic) NSMutableArray *defaultSuggestions;

+ (Class)serviceProviderAcceptedNetworksType;
+ (Class)serviceProviderCapabilitiesType;
+ (Class)defaultSuggestionsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addServiceProviderAcceptedNetworks:(id)a0;
- (void)addServiceProviderCapabilities:(id)a0;
- (void)addDefaultSuggestions:(id)a0;
- (unsigned long long)serviceProviderAcceptedNetworksCount;
- (void)clearServiceProviderAcceptedNetworks;
- (id)serviceProviderAcceptedNetworksAtIndex:(unsigned long long)a0;
- (unsigned long long)serviceProviderCapabilitiesCount;
- (void)clearServiceProviderCapabilities;
- (id)serviceProviderCapabilitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)defaultSuggestionsCount;
- (void)clearDefaultSuggestions;
- (id)defaultSuggestionsAtIndex:(unsigned long long)a0;

@end
