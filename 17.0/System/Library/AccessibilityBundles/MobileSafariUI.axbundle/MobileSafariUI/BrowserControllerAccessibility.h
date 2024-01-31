@interface BrowserControllerAccessibility : __BrowserControllerAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (void)_initSubviews;
- (void)dealloc;
- (void)setShowingReader:(BOOL)a0 animated:(BOOL)a1;
- (void)browserViewController:(id)a0 didCreateUnifiedBar:(id)a1;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)updateInsetsForBackgroundWebView:(id)a0;
- (void)tabDocumentDidCompleteCheckForAppBanner:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySpeakThisViews;
- (void)_accessibilityKeyboardDidHide:(id)a0;
- (void)_axUpdateVisibleContentInset;
- (void)_axUpdateVisibleContentInsetForScrollView:(id)a0;
- (id)accessibilityActiveTabDocument;
- (id)accessibilityCurrentWebView;

@end
