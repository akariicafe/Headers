@interface PAREngagedCompletionCache : NSObject

+ (id)sharedInstance;

- (void)addCompletion:(id)a0 forInput:(id)a1;
- (void)clearCompletionsFromDate:(id)a0 toDate:(id)a1;
- (void)clearAllCompletions;
- (void)updateParametersForSmartSearchV1:(id)a0 smartSearchV2:(id)a1;

@end
