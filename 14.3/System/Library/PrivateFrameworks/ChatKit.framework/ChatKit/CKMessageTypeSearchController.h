@class NSSet, NSString, NSArray, NSMutableSet, IMTimingCollection;

@interface CKMessageTypeSearchController : CKSearchController

@property (retain, nonatomic) NSSet *intermediaryResults;
@property (nonatomic) BOOL gotResults;
@property (nonatomic) BOOL searchTerminated;
@property (retain, nonatomic) NSString *priorQueryIdentifier;
@property (retain, nonatomic) NSArray *resultsToCheck;
@property (retain, nonatomic) IMTimingCollection *timingCollection;
@property (retain, nonatomic) NSMutableSet *itemsVerifiedOnDiskCache;

+ (id)timeRankedQueries;
+ (BOOL)useRecencyRankedSearchForMode:(unsigned long long)a0;
+ (unsigned long long)recencyRankedTargetResultCount;

- (void).cxx_destruct;
- (void)searchWithText:(id)a0 mode:(unsigned long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (void)searchEnded;
- (Class)footerClass;
- (void)checkIfResultsExistOnDiskAndNotify:(id)a0;
- (void)_asyncCheckIfResultsExistOnDisk:(id)a0 firstBatch:(BOOL)a1;
- (id)menuElementsForResult:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)wantsDeleteAction;
- (id)zkwFilterQueries;
- (id)rankingQueriesWithText:(id)a0;
- (BOOL)wantsFooterSection;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)chatGUIDForSearchableItem:(id)a0;
- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
- (id)queryResultsForItems:(id)a0;
- (void)postProcessAndUpdateResults:(id)a0;
- (id)itemProviderForSearchResult:(id)a0;
- (void)deleteAttachmentForResult:(id)a0;

@end
