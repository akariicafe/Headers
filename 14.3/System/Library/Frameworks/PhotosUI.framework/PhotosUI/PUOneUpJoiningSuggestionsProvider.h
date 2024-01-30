@class NSArray;

@interface PUOneUpJoiningSuggestionsProvider : PUOneUpSuggestionsProvider

@property (readonly, copy, nonatomic) NSArray *suggestionsProviders;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canProvideSuggestionForAsset:(id)a0;
- (id)initWithSuggestionsProviders:(id)a0;
- (id)requestSuggestionForAsset:(id)a0 withResultHandler:(id /* block */)a1;

@end
