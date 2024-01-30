@class NSMutableSet, NSString, NSSet, FCHeadlineClusteringRules, NSDictionary, FCSolHeuristic, NSMutableArray;

@interface FCHeadlineClusteringSol : NSObject <FCHeadlineClustering> {
    FCHeadlineClusteringRules *_rules;
    NSSet *_articleIds;
    NSDictionary *_articlesByTag;
    NSDictionary *_tagsByArticle;
    NSDictionary *_tagScores;
    NSDictionary *_headlinesById;
    NSSet *_hardOrphans;
    FCSolHeuristic *_heuristic;
    FCSolHeuristic *_autoFavoriteHeuristic;
    NSMutableArray *_articleGroups;
    NSMutableSet *_groupableTags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)clusterHeadlinesByTopic:(id)a0 subscribedTags:(id)a1 favoritesPersonalizer:(id)a2 personalizer:(id)a3 rules:(id)a4 translationProvider:(id)a5 unpaidHeadlineIDs:(id)a6 ignoreTagIDs:(id)a7;

@end
