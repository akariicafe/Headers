@class NSString, NSArray;

@interface SAMPPlayPodcasts : SADomainCommand

@property (copy, nonatomic) NSString *episodePlaybackOrder;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) BOOL startPlaying;

+ (id)playPodcasts;
+ (id)playPodcastsWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
