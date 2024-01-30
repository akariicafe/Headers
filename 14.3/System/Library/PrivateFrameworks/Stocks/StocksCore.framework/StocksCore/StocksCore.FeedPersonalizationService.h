@class FCPersonalizationWhitelist;

@interface StocksCore.FeedPersonalizationService : NSObject <FCTagRanking, FCFeedPersonalizing>

@property (nonatomic, readonly) FCPersonalizationWhitelist *whitelist;

- (id)sortItems:(id)a0;
- (id)sortItems:(id)a0 options:(long long)a1;
- (id)limitItemsByMinimumItemQuality:(id)a0;
- (unsigned long long)whitelistLevelForTagID:(id)a0;
- (id)limitItemsByFlowRate:(id)a0 timeInterval:(double)a1 publisherCount:(unsigned long long)a2;
- (id)diversifyItems:(id)a0 limit:(unsigned long long)a1 preselectedItems:(id)a2;
- (id)diversifyItems:(id)a0 limit:(unsigned long long)a1;
- (void)prepareForUseWithCompletionHandler:(id /* block */)a0;
- (double)decayedPublisherDiversificationPenalty;
- (id)rankTagIDsDescending:(id)a0;
- (id)scoresForTagIDs:(id)a0;
- (id)init;

@end
