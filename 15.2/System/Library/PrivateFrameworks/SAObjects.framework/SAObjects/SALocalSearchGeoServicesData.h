@class NSArray, NSData, NSString;

@interface SALocalSearchGeoServicesData : SADomainObject

@property (copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
@property (copy, nonatomic) NSData *clientMetadata;
@property (copy, nonatomic) NSString *environment;

+ (id)geoServicesData;
+ (id)geoServicesDataWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
