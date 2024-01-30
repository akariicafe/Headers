@class NSString;

@interface CKMessagesSearchController : CKMessageTypeSearchController <CKMessageSearchResultCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (BOOL)supportsMenuInteraction;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (id)reuseIdentifier;
+ (Class)cellClass;

- (id)queryAttributesForText:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (double)widthForDeterminingAvatarVisibility;
- (id)fetchAttributes;
- (id)customLayoutSectionForEnvironment:(id)a0;
- (id)cellForItemInCollectionView:(id)a0 atIndex:(long long)a1 withIdentifier:(id)a2;
- (void)searchWithText:(id)a0 mode:(unsigned long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;

@end
