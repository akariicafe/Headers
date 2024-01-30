@class NSString;

@interface CKPhotosSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>

@property (nonatomic) unsigned long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (id)relativeDateFormatter;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (BOOL)supportsMacSelection;
+ (id)sectionTitle;
+ (Class)cellClass;
+ (id)indexingString;
+ (id)reuseIdentifier;

- (id)initWithSectionIndex:(unsigned long long)a0;
- (double)_internalInterGroupSpacing;
- (BOOL)wantsHeaderSection;
- (void)_filterControlTapped:(id)a0;
- (id)sectionSubtitle;
- (void)saveAttachmentForResult:(id)a0;
- (Class)headerOverrideClass;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)chatGUIDForSearchableItem:(id)a0;
- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
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
- (id)previewViewControllerForResult:(id)a0;

@end
