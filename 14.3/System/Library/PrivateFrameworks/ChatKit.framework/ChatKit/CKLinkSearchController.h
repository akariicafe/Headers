@interface CKLinkSearchController : CKMessageTypeSearchController

+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (Class)cellClass;
+ (id)indexingString;
+ (id)reuseIdentifier;

- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (id)queryAttributesForText:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (id)queryResultsForItems:(id)a0;
- (void)postProcessAndUpdateResults:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementryViewKind:(id)a2;
- (id)layoutGroupWithEnvironment:(id)a0;
- (Class)_richLinkDatasourceClass;
- (id)_additionalMenuElementsForResult:(id)a0;
- (id)itemProviderForSearchResult:(id)a0;
- (id)_activityItemProviderForResult:(id)a0;
- (void)deleteAttachmentForResult:(id)a0;
- (BOOL)shouldStartMenuInteractionForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (BOOL)handleSelectionForResult:(id)a0;

@end
