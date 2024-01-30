@class NSString, ATXProactiveSuggestionClientModel;

@interface ATXProactiveCardSuggestionClient : NSObject {
    ATXProactiveSuggestionClientModel *_clientModel;
    NSString *_sourceId;
}

- (void).cxx_destruct;
- (void)retrieveAvailableCriterionIdentifiersWithReply:(id /* block */)a0;
- (void)updateSuggestions:(id)a0 completionHandler:(id /* block */)a1;
- (id)createSuggestionWithAppBundleIdentifier:(id)a0 widgetBundleIdentifier:(id)a1 criterion:(id)a2 applicableLayouts:(unsigned long long)a3 suggestionIdentifier:(id)a4 startDate:(id)a5 endDate:(id)a6 intent:(id)a7 metadata:(id)a8;
- (id)initWithSourceId:(id)a0;
- (id)createSuggestionWithAppBundleIdentifier:(id)a0 widgetBundleIdentifier:(id)a1 widgetKind:(id)a2 criterion:(id)a3 applicableLayouts:(unsigned long long)a4 suggestionIdentifier:(id)a5 startDate:(id)a6 endDate:(id)a7 intent:(id)a8 metadata:(id)a9;
- (void)clearSuggestionsWithCompletionHandler:(id /* block */)a0;
- (void)clearSuggestions;
- (void)retrieveCurrentSuggestionsWithReply:(id /* block */)a0;
- (void)updateSuggestions:(id)a0;

@end
