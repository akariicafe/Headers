@class NSSet, NSArray, _PSSuggester;

@interface CKConversationSearchController : CKSearchController

@property (nonatomic) BOOL gotResults;
@property (retain, nonatomic) NSSet *intermediaryResults;
@property (nonatomic) BOOL searchTerminated;
@property (retain, nonatomic) _PSSuggester *zkwSuggester;
@property (retain, nonatomic) NSArray *currentZKWSuggestions;

+ (id)sectionIdentifier;
+ (BOOL)useRecencyRankedSearchForMode:(unsigned long long)a0;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (BOOL)supportsMenuInteraction;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (id)reuseIdentifier;
+ (Class)cellClass;

- (id)queryAttributesForText:(id)a0;
- (id)queryResultsForItems:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)layoutGroupWithEnvironment:(id)a0;
- (void)searchEnded;
- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (id)rankingQueriesWithText:(id)a0;
- (BOOL)isTokenizationSearchController;
- (void)didSelectResult:(id)a0;
- (void).cxx_destruct;
- (id)_appendRecencyToRankingQuery:(id)a0 hours:(unsigned long long)a1;
- (void)_searchZKWWithText:(id)a0 mode:(unsigned long long)a1;
- (void)searchSpotlightWithText:(id)a0 mode:(unsigned long long)a1;
- (id)tokenizedQueryResultsForItems:(id)a0;
- (id)_sortedAndRankedItemsWithItems:(id)a0;
- (BOOL)wantsHeaderSection;
- (void)searchWithText:(id)a0 mode:(unsigned long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)chatGUIDForSearchableItem:(id)a0;

@end
