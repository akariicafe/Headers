@class DNDModeConfiguration;

@interface NCModeConfigurationRemoteSuggestionContentProvider : NCRemoteSuggestionContentProvider {
    unsigned long long _suggestionType;
    unsigned long long _scope;
    DNDModeConfiguration *_modeConfiguration;
}

- (void).cxx_destruct;
- (void)configureOptionButtons:(id)a0;
- (void)handleRejectAction:(id)a0;
- (void)handleAcceptAction:(id)a0;
- (id)initWithNotificationRequest:(id)a0 bundleDisplayName:(id)a1 managementDelegate:(id)a2 suggestionDelegate:(id)a3 uuid:(id)a4 suggestionType:(unsigned long long)a5 scope:(unsigned long long)a6 modeConfiguration:(id)a7;

@end
