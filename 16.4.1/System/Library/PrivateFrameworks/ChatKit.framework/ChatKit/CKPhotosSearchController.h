@class NSString;

@interface CKPhotosSearchController : CKMessageTypeSearchController <QLPreviewControllerDelegate, QLPreviewControllerConformingDelegate>

@property (nonatomic) unsigned long long contentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (Class)cellClass;
+ (id)sectionTitle;
+ (id)indexingString;
+ (id)relativeDateFormatter;
+ (BOOL)supportsMacSelection;
+ (BOOL)supportsQuicklookForResult:(id)a0;

- (id)filterQueries;
- (double)interGroupSpacing;
- (id)fetchAttributes;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (id)sectionSubtitle;
- (id)_activityItemProviderForResult:(id)a0;
- (id)previewViewControllerForResult:(id)a0;
- (id)_additionalMenuElementsForResult:(id)a0;
- (void)_filterControlTapped:(id)a0;
- (double)_internalInterGroupSpacing;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (id)cellForSupplementryItemInCollectionView:(id)a0 atIndexPath:(id)a1 supplementryViewKind:(id)a2;
- (id)chatGUIDForSearchableItem:(id)a0;
- (id)detailsFilterQueriesForChatGUIDs:(id)a0;
- (id)filterQueriesBase;
- (id)filterQueriesWithCommSafety;
- (void)fractionalWidth:(double *)a0 count:(unsigned long long *)a1 forLayoutWidth:(unsigned long long)a2;
- (Class)headerOverrideClass;
- (id)initWithSectionIndex:(unsigned long long)a0;
- (id)itemProviderForSearchResult:(id)a0;
- (id)layoutGroupWithEnvironment:(id)a0;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)queryAttributesForText:(id)a0;
- (id)queryResultsForItems:(id)a0;
- (void)saveAttachmentForResult:(id)a0;
- (void)updateSupplementryViewIfNeeded:(id)a0 atIndexPath:(id)a1;
- (BOOL)wantsHeaderSection;

@end
