@class PARSession;

@interface STSFeedbackReporter : NSObject

@property (retain, nonatomic) PARSession *parsecSession;

+ (id)sharedInstance;

- (void)didEngageResult:(id)a0;
- (void).cxx_destruct;
- (void)didGoToSearch:(id)a0;
- (void)didEngageCategoryResult:(id)a0 suggestion:(id)a1;
- (void)didLoadCategoryResults:(id)a0 recents:(id)a1 queryId:(unsigned long long)a2;
- (id)didStartNetworkRequest:(id)a0 query:(id)a1 queryId:(unsigned long long)a2;
- (void)didEndNetworkRequest:(id)a0 infoDict:(id)a1;
- (void)didShowResults:(id)a0 scrolling:(BOOL)a1;
- (void)didPreviewResultLongPress:(id)a0;
- (void)didPreviewResult:(id)a0 peek:(BOOL)a1;
- (void)didShowProactiveSuggestions:(id)a0 conversationId:(id)a1;
- (void)didClearSearchBarInput;
- (void)didClearRecents;
- (void)didSearchWithSuggestedQuery:(id)a0;
- (void)didEngageProviderLogo;
- (void)searchBarDidCancel;
- (void)didSearchWithCustomQuery:(id)a0;
- (void)didLoadResults:(id)a0 indexPaths:(id)a1 queryId:(unsigned long long)a2;
- (void)didShowQuerySuggestions:(id)a0 queryId:(unsigned long long)a1;
- (void)searchViewDidAppearWithEvent:(unsigned long long)a0;
- (void)didShowResults:(id)a0 trigger:(unsigned long long)a1;
- (void)didShowProactiveCategories:(id)a0 conversationId:(id)a1;
- (void)searchViewDidDisappear;
- (void)resourceDidLoad:(id)a0;

@end
