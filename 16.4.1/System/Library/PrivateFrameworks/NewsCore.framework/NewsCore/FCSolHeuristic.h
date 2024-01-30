@class NSArray;

@interface FCSolHeuristic : NSObject {
    BOOL _alternate;
    BOOL _enforcePublisherCap;
    NSArray *_groupSizes;
    long long _iterations;
    long long _maxPublisherOccurrences;
    long long _maxUnpaidArticles;
    long long _maxEvergreenArticles;
    long long _heuristicSampleSize;
    id /* block */ _utilityBlock;
}

- (void).cxx_destruct;
- (double)computeScoreWithSelectedGroup:(id)a0 remainingArticles:(id)a1 remainingTags:(id)a2 articlesByTag:(id)a3;
- (id)initWithOption:(long long)a0 minClusterSize:(long long)a1 maxClusterSize:(long long)a2 minIdealClusterSize:(long long)a3 maxIdealClusterSize:(long long)a4 maxPublisherOccurrences:(long long)a5 enforcePublisherCap:(BOOL)a6 maxUnpaidArticles:(long long)a7 maxEvergreenArticles:(long long)a8 heuristicSampleSize:(long long)a9 utilityBlock:(id /* block */)a10;

@end
