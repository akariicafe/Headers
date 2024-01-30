@class NSString;

@interface CKMessagesSearchController : CKMessageTypeSearchController <CKMessageSearchResultCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (id)sectionIdentifier;
+ (Class)cellClass;
+ (id)sectionTitle;
+ (BOOL)supportsMenuInteraction;
+ (BOOL)supportsQuicklookForResult:(id)a0;

- (id)fetchAttributes;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (id)cellForItemInCollectionView:(id)a0 atIndex:(long long)a1 withIdentifier:(id)a2;
- (id)customLayoutSectionForEnvironment:(id)a0;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)queryAttributesForText:(id)a0;
- (void)searchWithText:(id)a0 mode:(unsigned long long)a1;
- (double)widthForDeterminingAvatarVisibility;

@end
