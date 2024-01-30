@class NSString;

@interface CKMessagesSearchController : CKMessageTypeSearchController <CKMessageSearchResultCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionIdentifier;
+ (BOOL)supportsQuicklookForResult:(id)a0;
+ (id)sectionTitle;
+ (Class)cellClass;
+ (BOOL)supportsMenuInteraction;
+ (id)reuseIdentifier;

- (void)searchWithText:(id)a0 mode:(unsigned long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })additionalGroupInsets;
- (id)fetchAttributes;
- (id)customLayoutSectionForEnvironment:(id)a0;
- (unsigned long long)maxResultsForMode:(unsigned long long)a0;
- (id)queryAttributesForText:(id)a0;
- (BOOL)applyLayoutMarginsToLayoutGroup;
- (double)widthForDeterminingAvatarVisibility;
- (id)cellForItemInCollectionView:(id)a0 atIndex:(long long)a1 withIdentifier:(id)a2;

@end
