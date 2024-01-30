@class NSDictionary, NSArray;

@interface FCClusteredHeadlines : NSObject

@property (copy, nonatomic) NSDictionary *headlinesByTopicID;
@property (copy, nonatomic) NSArray *orphanedHeadlines;
@property (copy, nonatomic) NSArray *discardedOrphanedHeadlines;
@property (copy, nonatomic) NSDictionary *d_headlinesByNonWhitelistedTopicID;
@property (readonly, copy, nonatomic) NSArray *d_allHeadlines;

- (void).cxx_destruct;
- (id)d_JSONRepresentationWithTagController:(id)a0 subscriptionList:(id)a1;
- (void)d_sanityCheckAgainstInputHeadlines:(id)a0;
- (void)filterClustersToTopicIDs:(id)a0;

@end
