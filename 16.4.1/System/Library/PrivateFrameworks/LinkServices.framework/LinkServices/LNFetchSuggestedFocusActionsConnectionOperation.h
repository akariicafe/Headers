@class LNActionMetadata, LNFocusConfigurationSuggestionContext, NSArray;

@interface LNFetchSuggestedFocusActionsConnectionOperation : LNInterfaceConnectionOperation

@property (retain, nonatomic) LNActionMetadata *actionMetadata;
@property (retain, nonatomic) LNFocusConfigurationSuggestionContext *suggestionContext;
@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 actionMetadata:(id)a1 suggestionContext:(id)a2 completionHandler:(id /* block */)a3;

@end
