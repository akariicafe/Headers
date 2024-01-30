@class NSString, SALocation, SAPersonAttribute;

@interface SAFmfGeoFence : SADomainObject

@property (retain, nonatomic) SAPersonAttribute *theFriend;
@property (retain, nonatomic) SAPersonAttribute *friend;
@property (copy, nonatomic) NSString *geoFenceTrigger;
@property (retain, nonatomic) SALocation *location;

+ (id)geoFenceWithDictionary:(id)a0 context:(id)a1;
+ (id)geoFence;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
