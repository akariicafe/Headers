@class NSArray;

@interface SANPDecreasePlaybackSpeed : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)decreasePlaybackSpeed;
+ (id)decreasePlaybackSpeedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
