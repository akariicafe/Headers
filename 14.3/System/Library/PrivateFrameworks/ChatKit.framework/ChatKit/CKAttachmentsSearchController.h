@class NSString;

@interface CKAttachmentsSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (BOOL)supportsMacSelection;
+ (id)sectionTitle;
+ (Class)cellClass;
+ (id)indexingString;
+ (id)reuseIdentifier;

- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)chatGUIDForSearchableItem:(id)a0;
- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
- (id)queryAttributesForText:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementryViewKind:(id)a2;
- (id)layoutGroupWithEnvironment:(id)a0;
- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (BOOL)handleSelectionForResult:(id)a0;
- (id)cellForItemInCollectionView:(id)a0 atIndex:(long long)a1 withIdentifier:(id)a2;

@end
