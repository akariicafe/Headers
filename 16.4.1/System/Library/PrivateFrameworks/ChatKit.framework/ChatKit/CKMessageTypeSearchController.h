@class NSString, NSArray, NSMutableSet, NSSet, IMTimingCollection;

@interface CKMessageTypeSearchController : CKSearchController

@property (nonatomic) BOOL searchTerminated;
@property (retain, nonatomic) NSString *priorQueryIdentifier;
@property (retain, nonatomic) NSArray *resultsToCheck;
@property (retain, nonatomic) IMTimingCollection *timingCollection;
@property (retain, nonatomic) NSMutableSet *itemsVerifiedOnDiskCache;
@property (retain, nonatomic) NSSet *intermediaryResults;
@property (nonatomic) BOOL gotResults;

+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)timeRankedQueries;
+ (BOOL)useRecencyRankedSearchForMode:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_asyncCheckIfResultsExistOnDisk:(id)a0 firstBatch:(BOOL)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (id)chatGUIDForSearchableItem:(id)a0;
- (void)checkIfResultsExistOnDiskAndNotify:(id)a0;
- (id /* block */)createFoundItemsHandler;
- (void)deleteAttachmentForResult:(id)a0;
- (Class)footerClass;
- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
- (BOOL)isTokenizationSearchController;
- (id)itemProviderForSearchResult:(id)a0;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)menuElementsForResult:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)postProcessAndUpdateResults:(id)a0;
- (id)queryResultsForItems:(id)a0;
- (id)rankingQueriesWithText:(id)a0;
- (void)removeFromCache:(id)a0;
- (void)searchEnded;
- (void)searchWithText:(id)a0 mode:(unsigned long long)a1;
- (void)sendSyndicationActionForResult:(id)a0 actionType:(unsigned char)a1;
- (BOOL)wantsDeleteAction;
- (BOOL)wantsFooterSection;
- (id)zkwFilterQueries;

@end
