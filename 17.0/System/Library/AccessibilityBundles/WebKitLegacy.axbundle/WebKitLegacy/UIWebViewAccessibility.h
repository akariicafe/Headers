@interface UIWebViewAccessibility : __UIWebViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;

- (void)webView:(id)a0 didFailLoadWithError:(id)a1 forFrame:(id)a2;
- (void)webView:(id)a0 didFinishLoadForFrame:(id)a1;
- (void)webViewClose:(id)a0;
- (unsigned long long)_accessibilityAutomationType;

@end
