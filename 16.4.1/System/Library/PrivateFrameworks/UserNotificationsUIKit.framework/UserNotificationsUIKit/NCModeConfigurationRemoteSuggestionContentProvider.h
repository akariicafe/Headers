@class DNDModeConfiguration;

@interface NCModeConfigurationRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider {
    unsigned long long _suggestionType;
    unsigned long long _scope;
    DNDModeConfiguration *_modeConfiguration;
}

+ (id)_localizedSummaryStringForSuggestionType:(unsigned long long)a0 configurationType:(unsigned long long)a1 scope:(unsigned long long)a2 semanticType:(long long)a3 modeName:(id)a4 bundleDisplayName:(id)a5 preferredSenderSummary:(id)a6 localizedStringForKeyBlock:(id /* block */)a7;

- (id)auxiliaryOptionActions;
- (void).cxx_destruct;
- (void)handleAcceptAction:(id)a0;
- (void)handleRejectAction:(id)a0;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3 uuid:(id)a4 suggestionType:(unsigned long long)a5 scope:(unsigned long long)a6 modeConfiguration:(id)a7;

@end
