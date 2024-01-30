@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (nonatomic) BOOL acceptPodcastCollections;
@property (nonatomic) BOOL acceptPodcastStations;
@property (nonatomic) long long maxResults;
@property (copy, nonatomic) NSString *query;

+ (id)basicPodcastAppSearch;
+ (id)basicPodcastAppSearchWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
