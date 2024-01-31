@class NSString;

@interface CKBrowserSwitcherViewControllerAccessibility : __CKBrowserSwitcherViewControllerAccessibility_super <UIScrollViewAccessibilityDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)loadView;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)a0 withReason:(long long)a1;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)a0 withReason:(long long)a1;
- (void)setCurrentViewController:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)accessibilityScrollStatusForScrollView:(id)a0;
- (void)_axSetIsScrollingByDragGesture:(BOOL)a0;
- (BOOL)_axIsScrollingByDragGesture;

@end
