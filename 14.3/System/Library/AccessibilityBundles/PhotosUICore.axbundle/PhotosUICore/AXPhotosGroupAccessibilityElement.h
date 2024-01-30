@class NSArray;

@interface AXPhotosGroupAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) id group;
@property (weak, nonatomic) id view;
@property (retain, nonatomic) NSArray *additionalScrollViewElements;

+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)canBecomeFocused;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)_accessibilityDefaultFocusGroupDescriptor;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)_accessibilityUserTestingChildren;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)_accessibilityScrollStatus;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrameForScrolling;
- (id)accessibilityCustomActions;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (BOOL)_accessibilityOverridesInstructionsHint;
- (void)_axRefreshGridGroupData:(id)a0;
- (id)initWithAccessibilityContainer:(id)a0 forGroup:(id)a1 inView:(id)a2 withAdditionalScrollViewElements:(id)a3;
- (BOOL)_axIsMonthsView;
- (BOOL)_axIsYearsView;
- (id)_axSectionHeadersInSubgroups;
- (id)_axChapterHeadersInSubgroups;
- (id)_axFilterLeafsByContentKind:(long long)a0;
- (void)_axShouldShowAlternateUI:(BOOL)a0;
- (id)_axCardSectionBodyInSubgroups;
- (id)_axMoreButtonInMonthsView;
- (id)_axUnsortedGroupsAccessibilityElements;
- (id)_axUnsortedLeafAccessibilityElements;
- (long long)_axCompareAXPhotoElement:(id)a0 toElement:(id)a1;
- (void)_axMoveToNextInfoInDirection:(unsigned long long)a0;
- (id)_axCachedSubgroupElements;
- (id)initWithAccessibilityContainer:(id)a0 forGroup:(id)a1 inView:(id)a2;
- (void)_setAxCachedSubgroupElements:(id)a0;
- (void)_cleanupStaleGroupAccessibilityElements;
- (id)_axFilterStaleKeys:(id)a0 usingIndexSet:(id)a1;
- (void)_updateGroupAccessibilityElements;
- (id)_axGroupsAccessibilityElements;
- (BOOL)_axIsSectionHeader;
- (BOOL)_axIsChapterHeader;
- (BOOL)_axIsDecorating;
- (BOOL)_axIsCardSectionBody;
- (id)_axFilterSubgroupsByInfoSourceType:(id)a0;
- (id)_axDecoratingInSubgroups;
- (id)_axCachedLeafElements;
- (id)_accessibilityCuratedLibraryUIViewController;
- (id)_accessibilityInfoSource;
- (void)_updateLeafAccessibilityElements:(id)a0 forVisibleSpriteIndexes:(id)a1;
- (void)_setAxCachedLeafElements:(id)a0;
- (void)_cleanupStaleLeafAccessibilityElements;
- (void)_updateLeafAccessibilityElementsIfNeeded;
- (id)_axLeafAccessibilityElements;
- (void)_axContainingGroup:(id)a0 performedAction:(long long)a1 withUserInfo:(id)a2;
- (BOOL)_axInfoSourceHasClassName:(id)a0;
- (BOOL)_axIsAssetSection;
- (BOOL)_axInZoomLevel:(long long)a0;
- (BOOL)_axIsInlineHeader;
- (BOOL)_axIsGrid;
- (BOOL)_axIsDaysView;
- (BOOL)_axInAllPhotosView;

@end
