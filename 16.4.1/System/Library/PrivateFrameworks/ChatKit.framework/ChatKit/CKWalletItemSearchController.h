@interface CKWalletItemSearchController : CKMessageTypeSearchController

+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (Class)cellClass;
+ (id)sectionTitle;
+ (id)indexingString;
+ (BOOL)previewControllerPresentsModally;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (BOOL)supportsQuicklookForResult:(id)a0;

- (id)filterQueries;
- (double)interGroupSpacing;
- (id)fetchAttributes;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (id)_addOrderViewControllerForURL:(id)a0;
- (id)_addPassViewControllerForURL:(id)a0;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementryViewKind:(id)a2;
- (id)chatGUIDForSearchableItem:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (id)layoutGroupWithEnvironment:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;

@end
