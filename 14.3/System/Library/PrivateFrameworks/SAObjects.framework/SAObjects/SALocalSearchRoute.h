@class NSData, NSString;

@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *etaFilter;
@property (copy, nonatomic) NSData *evChargingMetadata;
@property (copy, nonatomic) NSData *originalWaypointRoute;
@property (copy, nonatomic) NSData *routeAsZilchBinary;
@property (copy, nonatomic) NSData *routeId;
@property (copy, nonatomic) NSData *sessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)route;
+ (id)routeWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
