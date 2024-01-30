@class LNActionMetadata, LNFullyQualifiedActionIdentifier;

@interface LNActionDefaultValueProvider : NSObject

@property (retain, nonatomic) LNActionMetadata *actionMetadata;
@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *actionIdentifier;

- (void)loadDefaultValuesWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 actionMetadata:(id)a1;
- (id)loadActionMetadataWithError:(id *)a0;
- (id)loadStaticDefaultValueForBundleIdentifier:(id)a0 error:(id *)a1;
- (void)loadSuggestedFocusActionsWithSuggestionContext:(id)a0 completion:(id /* block */)a1;

@end
