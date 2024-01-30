@interface PAREngagedCompletionCache : NSObject

+ (id)sharedInstance;

- (void)clearCompletionsFromDate:(id)a0 toDate:(id)a1;
- (void)clearAllCompletions;
- (void)addEngagedSuggestions:(id)a0;
- (void)addCompletion:(id)a0 forInput:(id)a1;
- (void)updateParametersForSmartSearchV1:(id)a0 smartSearchV2:(id)a1;

@end
