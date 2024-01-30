@class CSSearchQuery, NSArray, NSString, CKQLPreviewControllerDataSource;
@protocol CKSearchControllerDelegate;

@interface CKSearchController : NSObject

@property (retain, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long sectionIndex;
@property (retain, nonatomic) CSSearchQuery *query;
@property (retain, nonatomic) NSString *currentQueryIdentifier;
@property (retain, nonatomic) NSString *currentSearchText;
@property (nonatomic) BOOL queryRunning;
@property (weak, nonatomic) id<CKSearchControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ queryFoundItemHandler;
@property (copy, nonatomic) id /* block */ queryCompletionHandler;
@property (readonly, nonatomic) BOOL hasMoreResults;
@property (nonatomic) BOOL suppressAvatars;
@property (retain, nonatomic) CKQLPreviewControllerDataSource *qlPreviewDataSource;

+ (id)sectionIdentifier;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (BOOL)supportsMacSelection;
+ (id)sectionTitle;
+ (Class)cellClass;
+ (long long)orthogonalScrollingBehavior;
+ (BOOL)supportsMenuInteraction;
+ (BOOL)useRecencyRankedSearchForMode:(unsigned long long)a0;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)indexingString;
+ (id)reuseIdentifier;
+ (BOOL)previewControllerPresentsModally;

- (void).cxx_destruct;
- (id)initWithSectionIndex:(unsigned long long)a0;
- (BOOL)wantsHeaderSection;
- (void)searchWithText:(id)a0 mode:(unsigned long long)a1;
- (void)saveAttachmentForResult:(id)a0;
- (Class)headerOverrideClass;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (void)searchEnded;
- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (void)didSelectResult:(id)a0;
- (id)_queryStringWithText:(id)a0;
- (id)_queryContextWithText:(id)a0;
- (unsigned long long)queryTypeForSearchText:(id)a0;
- (BOOL)_currentModeIsDetails;
- (id)_overridingMenuElementsForResult:(id)a0;
- (id)customLayoutSectionForEnvironment:(id)a0;
- (unsigned long long)layoutWidth;
- (Class)footerClass;
- (void)cancelCurrentSearch;
- (id)menuElementsForResult:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)zkwFilterQueries;
- (id)rankingQueriesWithText:(id)a0;
- (BOOL)wantsFooterSection;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)chatGUIDForSearchableItem:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (id)queryResultsForItems:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementryViewKind:(id)a2;
- (id)layoutGroupWithEnvironment:(id)a0;
- (id)_additionalMenuElementsForResult:(id)a0;
- (id)itemProviderForSearchResult:(id)a0;
- (id)_activityItemProviderForResult:(id)a0;
- (void)deleteAttachmentForResult:(id)a0;
- (BOOL)shouldStartMenuInteractionForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (BOOL)handleSelectionForResult:(id)a0;
- (id)cellForItemInCollectionView:(id)a0 atIndex:(long long)a1 withIdentifier:(id)a2;

@end
