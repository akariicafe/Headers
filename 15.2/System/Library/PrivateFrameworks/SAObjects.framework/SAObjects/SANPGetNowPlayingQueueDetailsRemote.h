@class NSArray, SANPGetNowPlayingQueueDetails;

@interface SANPGetNowPlayingQueueDetailsRemote : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SANPGetNowPlayingQueueDetails *queueDetails;
@property (nonatomic) double routeTimeout;

+ (id)getNowPlayingQueueDetailsRemote;
+ (id)getNowPlayingQueueDetailsRemoteWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
