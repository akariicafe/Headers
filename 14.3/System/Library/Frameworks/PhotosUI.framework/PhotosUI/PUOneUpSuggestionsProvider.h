@interface PUOneUpSuggestionsProvider : NSObject

+ (id)defaultProviderWithAccessoryViewControllersManager:(id)a0;

- (BOOL)canProvideSuggestionForAsset:(id)a0;
- (id)requestSuggestionForAsset:(id)a0 withResultHandler:(id /* block */)a1;

@end
