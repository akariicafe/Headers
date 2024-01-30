@class NSString;

@interface CKLocationSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (id)reuseIdentifier;
+ (id)indexingString;
+ (Class)cellClass;

- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
- (id)itemProviderForSearchResult:(id)a0;
- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (BOOL)handleSelectionForResult:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementryViewKind:(id)a2;
- (id)layoutGroupWithEnvironment:(id)a0;
- (BOOL)shouldStartMenuInteractionForResult:(id)a0;
- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (id)_mapItemForResult:(id)a0;
- (id)urlForQueryResult:(id)a0;
- (id)additionalMenuElementsForResult:(id)a0;
- (id)chatGUIDForSearchableItem:(id)a0;

@end
