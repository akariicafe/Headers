@interface _ATXSuggestionsWidgetSuggestion : _ATXCompositeLayoutWidgetSuggestionBase

- (BOOL)addSuggestion:(id)a0 asMainSuggestion:(BOOL)a1 dryRun:(BOOL)a2;
- (BOOL)containsIdenticalContentOfSuggestion:(id)a0;
- (id)initWithSuggestionsWidget:(id)a0 containingStack:(id)a1 suggestionDeduplicator:(id)a2 hyperParameters:(id)a3;
- (id)initWithSuggestionsWidget:(id)a0 containingStack:(id)a1 suggestionLayout:(id)a2 suggestionDeduplicator:(id)a3 hyperParameters:(id)a4;
- (id)initForPreviewOfSize:(unsigned long long)a0 hyperParameters:(id)a1;

@end
