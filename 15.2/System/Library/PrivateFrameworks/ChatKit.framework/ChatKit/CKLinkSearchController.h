@interface CKLinkSearchController : CKMessageTypeSearchController

+ (id)_additionalMenuElementsForResult:(id)a0;
+ (id)itemProviderForSearchResult:(id)a0;
+ (id)_activityItemProviderForResult:(id)a0;
+ (id)previewViewControllerForResult:(id)a0;
+ (BOOL)handleSelectionForResult:(id)a0;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (id)reuseIdentifier;
+ (id)indexingString;
+ (Class)cellClass;

- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
- (id)_additionalMenuElementsForResult:(id)a0;
- (id)itemProviderForSearchResult:(id)a0;
- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (BOOL)handleSelectionForResult:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (id)queryResultsForItems:(id)a0;
- (void)postProcessAndUpdateResults:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementryViewKind:(id)a2;
- (id)layoutGroupWithEnvironment:(id)a0;
- (Class)_richLinkDatasourceClass;
- (void)deleteAttachmentForResult:(id)a0;
- (BOOL)shouldStartMenuInteractionForResult:(id)a0;
- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;

@end
