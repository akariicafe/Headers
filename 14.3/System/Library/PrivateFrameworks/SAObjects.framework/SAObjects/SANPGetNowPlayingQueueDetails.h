@class NSArray, NSNumber;

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) long long nextItemCount;
@property (copy, nonatomic) NSNumber *preemptiveNowPlayingQueueDetailsTimeOut;
@property (nonatomic) long long previousItemCount;

+ (id)getNowPlayingQueueDetails;
+ (id)getNowPlayingQueueDetailsWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
