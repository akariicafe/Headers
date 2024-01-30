@class NSString;

@interface CKPassSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (id)sectionTitle;
+ (Class)cellClass;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)indexingString;
+ (id)reuseIdentifier;
+ (BOOL)previewControllerPresentsModally;

- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (id)chatGUIDForSearchableItem:(id)a0;
- (id)queryAttributesForText:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementryViewKind:(id)a2;
- (id)layoutGroupWithEnvironment:(id)a0;
- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (id)cellForItemInCollectionView:(id)a0 atIndex:(long long)a1 withIdentifier:(id)a2;

@end
