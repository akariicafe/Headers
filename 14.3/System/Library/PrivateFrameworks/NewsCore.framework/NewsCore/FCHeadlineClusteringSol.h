@class NSString, NSSet, NSDictionary, FCHeadlineClusteringRules, NSMutableSet, FCSolHeuristic, NSMutableArray;

@interface FCHeadlineClusteringSol : NSObject <FCHeadlineClustering>

@property (retain, nonatomic) FCHeadlineClusteringRules *rules;
@property (retain, nonatomic) NSSet *articleIds;
@property (retain, nonatomic) NSDictionary *articlesByTag;
@property (retain, nonatomic) NSDictionary *tagsByArticle;
@property (retain, nonatomic) NSDictionary *tagScores;
@property (retain, nonatomic) NSDictionary *headlinesById;
@property (retain, nonatomic) NSSet *hardOrphans;
@property (retain, nonatomic) FCSolHeuristic *heuristic;
@property (retain, nonatomic) FCSolHeuristic *autoFavoriteHeuristic;
@property (retain, nonatomic) NSMutableArray *articleGroups;
@property (retain, nonatomic) NSMutableSet *groupableTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)computeBestGrouping:(id)a0 tagScores:(id)a1 headlinesById:(id)a2;
- (id)sortedScoredArticles:(id)a0 length:(long long)a1 asc:(BOOL)a2;
- (double)specificityScoreForTag:(id)a0;
- (void).cxx_destruct;
- (void)optimizeForLayout:(id)a0;
- (double)computeGroupingUtility:(id)a0;
- (void)computeGrouping:(id)a0 topK:(double)a1;
- (void)filterOverflowedOrphans:(id)a0;
- (id)clusterHeadlinesByTopic:(id)a0 subscribedTags:(id)a1 personalizer:(id)a2 rules:(id)a3 translationProvider:(id)a4 unpaidHeadlineIDs:(id)a5;

@end
