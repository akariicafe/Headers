@interface HWBrowserViewControllerAccessibility : __HWBrowserViewControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)viewDidLoad;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_clear:(id)a0;
- (void)_undo:(id)a0;
- (void)_axAnnounceHandwritingViewScroll;
- (double)_axLastContentOffsetX;
- (void)_axSetLastContentOffsetX:(double)a0;
- (void)_axSetShouldAnnounceScroll:(BOOL)a0;
- (BOOL)_axShouldAnnounceScroll;
- (void)_axUpdateAndFocusCanvas;
- (void)_inkViewTouchesEndedNotification:(id)a0;
- (void)_scrollPageToLeft:(id)a0;
- (void)_scrollPageToRight:(id)a0;
- (void)setCurrentHandwritingItem:(id)a0;

@end
