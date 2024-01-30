@class NSString, SAMPPodcastCollection;

@interface SAMPSubscribeToPodcastCollection : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (copy, nonatomic) NSString *hashedRouteUID;
@property (retain, nonatomic) SAMPPodcastCollection *podcastCollection;

+ (id)subscribeToPodcastCollection;
+ (id)subscribeToPodcastCollectionWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
