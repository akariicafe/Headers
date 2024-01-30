@interface UIWebViewAccessibility : __UIWebViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;

- (unsigned long long)_accessibilityAutomationType;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webViewClose:(id)a0;

@end
