@interface SBIconScrollViewAccessibility : __SBIconScrollViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (long long)accessibilityContainerType;
- (id)_accessibilityUserTestingChildren;
- (BOOL)accessibilityScroll:(long long)a0;
- (BOOL)accessibilityViewIsModal;
- (BOOL)shouldGroupAccessibilityChildren;
- (double)_accessibilityAllowedGeometryOverlap;
- (BOOL)_accessibilityIsGroupedParent;
- (BOOL)_accessibilityRemembersLastFocusedChild;
- (id)_accessibilityScrollStatus;
- (BOOL)accessibilityScrollToTopSupported;
- (BOOL)accessibilityScrollUpPage;
- (BOOL)accessibilityScrollUpPageSupported;
- (void)_accessibilityActivateSpotlight;
- (BOOL)_axIsRootFolder;
- (id)_accessibilityCurrentFolderIconForPage:(long long)a0;
- (BOOL)_accessibilitySBScrollToNextPage;
- (BOOL)_accessibilitySBScrollToPreviousPage;
- (id)_accessibilityScrollStatus:(BOOL)a0;

@end
