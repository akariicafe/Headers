@class NSDictionary;

@interface WFSuggestionsWorkflowRunnerClient : WFWorkflowRunnerClient

@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)allSuggestionsRunSources;

- (void).cxx_destruct;
- (id)initWithINShortcut:(id)a0 executionContext:(long long)a1;
- (id)initWithINShortcut:(id)a0 executionContext:(long long)a1 remoteDialogPresenterEndpoint:(id)a2;
- (id)initWithLinkAction:(id)a0 bundleIdentifier:(id)a1 resultSurface:(unsigned long long)a2;

@end
