@class NSString;

@interface CKHighlightsSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (id)supportedCellClasses;
+ (id)itemTypeForResult:(id)a0;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (id)indexingString;

- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
- (id)_additionalMenuElementsForResult:(id)a0;
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
- (void)deleteAttachmentForResult:(id)a0;
- (BOOL)shouldStartMenuInteractionForResult:(id)a0;
- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (id /* block */)createFoundItemsHandler;
- (id)reuseIdentifierForIndex:(long long)a0;
- (id)cellForItemInCollectionView:(id)a0 atIndex:(long long)a1 withIdentifier:(id)a2;

@end
