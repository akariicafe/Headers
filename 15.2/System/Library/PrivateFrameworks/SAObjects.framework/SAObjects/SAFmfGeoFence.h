@class NSString, SALocation, SAPersonAttribute;

@interface SAFmfGeoFence : SADomainObject

@property (retain, nonatomic) SAPersonAttribute *friend;
@property (copy, nonatomic) NSString *geoFenceTrigger;
@property (retain, nonatomic) SALocation *location;

+ (id)geoFence;
+ (id)geoFenceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
