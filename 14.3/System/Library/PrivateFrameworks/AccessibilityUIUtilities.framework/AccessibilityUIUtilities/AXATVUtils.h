@interface AXATVUtils : NSObject

+ (id)sharedInstance;

- (id)atvaccessibilityLocalizedString:(id)a0;
- (id)accessibilityIdentifierForResourceURL:(id)a0;
- (BOOL)isProcessTVAppStore;
- (id)atvaccessibilityLocalizedNameForBundleID:(id)a0;
- (id)accessibilityLabelForResourceURL:(id)a0;
- (id)currentFocusedView;
- (BOOL)isTVMLKitLoaded;
- (id)accessibilityLabelForID:(id)a0;

@end
