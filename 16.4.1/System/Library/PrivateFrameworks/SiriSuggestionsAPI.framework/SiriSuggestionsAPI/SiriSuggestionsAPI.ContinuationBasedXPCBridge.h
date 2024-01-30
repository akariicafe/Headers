@interface SiriSuggestionsAPI.ContinuationBasedXPCBridge : NSObject <SiriSuggestionsAPI.XPCClientBridge> {
    void /* unknown type, empty encoding */ continuation;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendSuggestionsWithSuggestions:(id)a0;
- (void)connectionErrorWithError:(id)a0;

@end
