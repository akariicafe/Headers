@class LNActionParameterMetadata, NSString, LNActionMetadata, LNDynamicOptionsResult;

@interface LNFetchOptionsConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation

@property (retain, nonatomic) LNActionMetadata *actionMetadata;
@property (retain, nonatomic) LNActionParameterMetadata *parameterMetadata;
@property (copy, nonatomic) NSString *searchTerm;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) LNDynamicOptionsResult *result;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void)finishWithError:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)initWithConnectionInterface:(id)a0 actionMetadata:(id)a1 parameterMetadata:(id)a2 searchTerm:(id)a3 localeIdentifier:(id)a4 completionHandler:(id /* block */)a5;

@end
