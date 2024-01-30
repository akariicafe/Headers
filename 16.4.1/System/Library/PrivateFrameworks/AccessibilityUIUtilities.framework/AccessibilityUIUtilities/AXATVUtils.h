@interface AXATVUtils : NSObject

+ (id)sharedInstance;

- (BOOL)isTVMLKitLoaded;
- (id)accessibilityIdentifierForResourceURL:(id)a0;
- (id)accessibilityLabelForID:(id)a0;
- (id)accessibilityLabelForResourceURL:(id)a0;
- (id)atvaccessibilityLocalizedNameForBundleID:(id)a0;
- (id)atvaccessibilityLocalizedString:(id)a0;
- (id)currentFocusedView;
- (BOOL)isProcessTVAppStore;

@end
