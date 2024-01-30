@class ATXDNDModeConfigurationClient, ATXUserEducationSuggestionConnector;

@interface ATXUserEducationSuggestionCustomizeFocusServer : ATXUserEducationSuggestionBaseServer <ATXUserEducationSuggestionModeChangeObserver> {
    ATXUserEducationSuggestionConnector *_connector;
    ATXDNDModeConfigurationClient *_modeConfigurationClient;
}

- (void)sendSuggestion:(id)a0 eventType:(unsigned long long)a1;
- (id)initWithConnector:(id)a0;
- (void)dealloc;
- (void)_processModeChangeEvent:(id)a0;
- (void)processModeChangeEvent:(id)a0;
- (void).cxx_destruct;

@end
