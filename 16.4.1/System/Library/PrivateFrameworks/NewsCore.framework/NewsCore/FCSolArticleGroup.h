@class FCSolTagID, NSMutableSet, FCHeadlineClusteringRules;

@interface FCSolArticleGroup : NSObject

@property (nonatomic) double heuristicScore;
@property (retain, nonatomic) FCSolTagID *tagId;
@property (retain, nonatomic) NSMutableSet *articles;
@property (nonatomic) double personalizationScore;
@property (retain, nonatomic) FCHeadlineClusteringRules *rules;
@property (readonly, nonatomic) NSMutableSet *topArticles;
@property (readonly, nonatomic) NSMutableSet *orphans;
@property (readonly, nonatomic) double score;

+ (id)formGroup:(id)a0 withMinClusterSize:(long long)a1 maxClusterSize:(long long)a2 maxPublisherOccurrences:(long long)a3 maxUnpaidArticles:(long long)a4 maxEvergreenArticles:(long long)a5 enforcePublisherCap:(BOOL)a6;
+ (id)formBestOfGroup:(id)a0 clusteringRules:(id)a1 topicDiversityThreshold:(double)a2 topicDiversityWindowSize:(long long)a3 allowUnfilteredArticles:(BOOL)a4;
+ (id)predictBestGroup:(id)a0 ungroupedArticles:(id)a1 ungroupedTags:(id)a2 articlesByTag:(id)a3 heuristic:(id)a4 autoFavoriteHeuristic:(id)a5;

- (void).cxx_destruct;
- (void)computeTopArticlesAndScore;
- (id)initWithTagId:(id)a0 personalizationScore:(double)a1 articles:(id)a2 rules:(id)a3;
- (void)intersectArticles:(id)a0;

@end
