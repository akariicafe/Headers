@class NSArray;

@interface SANPIncreasePlaybackSpeed : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)increasePlaybackSpeed;
+ (id)increasePlaybackSpeedWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
