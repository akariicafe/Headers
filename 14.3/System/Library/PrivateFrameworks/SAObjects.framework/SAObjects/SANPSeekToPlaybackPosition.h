@class NSArray, NSNumber;

@interface SANPSeekToPlaybackPosition : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSNumber *positionInMilliseconds;

+ (id)seekToPlaybackPosition;
+ (id)seekToPlaybackPositionWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
