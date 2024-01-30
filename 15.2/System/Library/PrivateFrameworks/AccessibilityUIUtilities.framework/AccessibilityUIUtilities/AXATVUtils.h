@interface AXATVUtils : NSObject

+ (id)sharedInstance;

- (id)atvaccessibilityLocalizedString:(id)a0;
- (id)accessibilityIdentifierForResourceURL:(id)a0;
- (id)accessibilityLabelForID:(id)a0;
- (BOOL)isTVMLKitLoaded;
- (BOOL)isProcessTVAppStore;
- (id)atvaccessibilityLocalizedNameForBundleID:(id)a0;
- (id)accessibilityLabelForResourceURL:(id)a0;
- (id)currentFocusedView;

@end
