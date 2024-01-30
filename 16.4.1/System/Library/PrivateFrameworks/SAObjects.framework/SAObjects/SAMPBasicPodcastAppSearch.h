@class NSString;

@interface SAMPBasicPodcastAppSearch : SADomainCommand

@property (nonatomic) BOOL acceptPodcastCollections;
@property (nonatomic) BOOL acceptPodcastStations;
@property (nonatomic) long long maxResults;
@property (copy, nonatomic) NSString *query;

+ (id)basicPodcastAppSearch;
+ (id)basicPodcastAppSearchWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)mutatingCommand;

@end
