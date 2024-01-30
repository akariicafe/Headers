@class NSArray;

@interface SANPSetPlaybackSpeed : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) double scalingFactor;

+ (id)setPlaybackSpeed;
+ (id)setPlaybackSpeedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
