@class _PASXPCClientHelper;

@interface ATXModeAnchorModelSuggestionClient : NSObject <ATXModeAnchorModelSuggestionClientXPCInterface> {
    _PASXPCClientHelper *_xpcClientHelper;
}

+ (id)sharedInstance;

- (void)anchorModelDidProvideModeSuggestions:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_pingServer;
- (id)_init;
- (void)fetchCombinedSuggestionScoreAndFlagsForModeWithUUID:(id)a0 modeType:(unsigned long long)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7 completionHandler:(id /* block */)a8;
- (void)fetchCombinedSuggestionScoreForModeWithUUID:(id)a0 modeType:(unsigned long long)a1 origin:(long long)a2 originBundleId:(id)a3 originAnchorType:(id)a4 confidenceScore:(double)a5 secondsSinceSuggested:(double)a6 serializedTriggers:(id)a7 completionHandler:(id /* block */)a8;

@end
