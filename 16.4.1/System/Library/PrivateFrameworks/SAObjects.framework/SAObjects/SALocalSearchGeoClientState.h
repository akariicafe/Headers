@class NSArray, NSString;

@interface SALocalSearchGeoClientState : SAAceClientState

@property (copy, nonatomic) NSArray *additionalEnabledTransitMarkets;
@property (copy, nonatomic) NSString *environment;

+ (id)syncKey;
+ (id)deliveryDeadline;
+ (id)geoClientState;
+ (id)geoClientStateWithDictionary:(id)a0 context:(id)a1;
+ (id)persistencePolicy;
+ (id)uniqueObjectIdentifier;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
