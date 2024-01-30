@class NSArray;

@interface SANPIncreasePlaybackSpeed : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)increasePlaybackSpeed;
+ (id)increasePlaybackSpeedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
