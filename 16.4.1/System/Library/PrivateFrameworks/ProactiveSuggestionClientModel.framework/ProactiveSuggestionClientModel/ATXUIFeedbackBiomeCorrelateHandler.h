@interface ATXUIFeedbackBiomeCorrelateHandler : BPSCorrelateHandler

+ (id)uiFeedbackCorrelateHandler;

- (void)receivePriorEvent:(id)a0;
- (id)correlateWithCurrentEvent:(id)a0;
- (BOOL)_proactiveSuggestionsContainEqualExecutablesWithSuggestion1:(id)a0 suggestion2:(id)a1;
- (void)receiveCurrentEvent:(id)a0;
- (void)updateMostRecentlySeenBlendingUICacheUpdateUUID:(id)a0;
- (id)boxedExecutableHashForProactiveSuggestion:(id)a0;

@end
