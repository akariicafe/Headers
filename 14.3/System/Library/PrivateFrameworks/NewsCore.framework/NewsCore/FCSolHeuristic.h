@class NSArray;

@interface FCSolHeuristic : NSObject

@property (retain, nonatomic) NSArray *groupSizes;
@property (readonly, nonatomic) BOOL alternate;
@property (readonly, nonatomic) long long iterations;
@property (readonly, nonatomic) long long maxPublisherOccurrences;
@property (readonly, nonatomic) BOOL enforcePublisherCap;
@property (readonly, nonatomic) long long maxUnpaidArticles;
@property (readonly, nonatomic) long long maxEvergreenArticles;
@property (readonly, nonatomic) long long heuristicSampleSize;
@property (readonly, copy, nonatomic) id /* block */ utilityBlock;

- (id)initWithOption:(long long)a0 minClusterSize:(long long)a1 maxClusterSize:(long long)a2 minIdealClusterSize:(long long)a3 maxIdealClusterSize:(long long)a4 maxPublisherOccurrences:(long long)a5 enforcePublisherCap:(BOOL)a6 maxUnpaidArticles:(long long)a7 maxEvergreenArticles:(long long)a8 heuristicSampleSize:(long long)a9 utilityBlock:(id /* block */)a10;
- (void).cxx_destruct;
- (id)fillGroupsWithSelectedGroup:(id)a0 remainingArticles:(id)a1 remainingTags:(id)a2 articlesByTag:(id)a3;
- (double)computeScoreWithSelectedGroup:(id)a0 remainingArticles:(id)a1 remainingTags:(id)a2 articlesByTag:(id)a3;

@end
