@interface UIWebViewAccessibility : __UIWebViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)webViewClose:(id)a0;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (unsigned long long)_accessibilityAutomationType;

@end
