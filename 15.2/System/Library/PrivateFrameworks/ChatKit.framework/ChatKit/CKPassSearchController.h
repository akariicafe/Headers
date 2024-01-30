@class NSString;

@interface CKPassSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (BOOL)previewControllerPresentsModally;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (id)reuseIdentifier;
+ (id)indexingString;
+ (Class)cellClass;

- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementryViewKind:(id)a2;
- (id)layoutGroupWithEnvironment:(id)a0;
- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (id)chatGUIDForSearchableItem:(id)a0;

@end
