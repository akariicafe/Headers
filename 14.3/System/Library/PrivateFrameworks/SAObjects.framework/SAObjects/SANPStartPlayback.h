@class NSArray;

@interface SANPStartPlayback : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;

+ (id)startPlaybackWithDictionary:(id)a0 context:(id)a1;
+ (id)startPlayback;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
