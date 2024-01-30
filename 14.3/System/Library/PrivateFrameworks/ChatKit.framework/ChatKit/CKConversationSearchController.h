@class NSSet, NSArray, _PSSuggester;

@interface CKConversationSearchController : CKSearchController

@property (nonatomic) BOOL gotResults;
@property (retain, nonatomic) NSSet *intermediaryResults;
@property (nonatomic) BOOL searchTerminated;
@property (retain, nonatomic) _PSSuggester *zkwSuggester;
@property (retain, nonatomic) NSArray *currentZKWSuggestions;

+ (id)sectionIdentifier;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (Class)cellClass;
+ (BOOL)supportsMenuInteraction;
+ (BOOL)useRecencyRankedSearchForMode:(unsigned long long)a0;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (BOOL)wantsHeaderSection;
- (void)searchWithText:(id)a0 mode:(unsigned long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (void)searchEnded;
- (id)fetchAttributes;
- (id)_appendRecencyToRankingQuery:(id)a0 hours:(unsigned long long)a1;
- (void)_searchZKWWithText:(id)a0 mode:(unsigned long long)a1;
- (void)_searchSpotlightWithText:(id)a0 mode:(unsigned long long)a1;
- (id)_sortedAndRankedItemsWithItems:(id)a0;
- (id)filterQueries;
- (double)interGroupSpacing;
- (void)didSelectResult:(id)a0;
- (id)rankingQueriesWithText:(id)a0;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)chatGUIDForSearchableItem:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (id)queryResultsForItems:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)layoutGroupWithEnvironment:(id)a0;

@end
