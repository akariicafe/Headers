@class PARBag, NSSet, NSXPCConnection, NSString, PARSessionConfiguration, PARSessionSwiftInternal, _TtC10CoreParsec15PARSearchClient;
@protocol PARSessionDelegate;

@interface PARSession : NSObject <SFFeedbackListener, SFResourceLoader> {
    PARSessionSwiftInternal *_internal;
}

@property (retain) NSSet *allowedAppsForSiriSuggestions;
@property (readonly) PARBag *bag;
@property (readonly, nonatomic) _TtC10CoreParsec15PARSearchClient *client;
@property (retain) PARSessionConfiguration *configuration;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak) id<PARSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSession;
+ (id)sessionWithConfiguration:(id)a0;
+ (id)sharedPARSessionWithConfiguration:(id)a0;
+ (id)sessionWithConfiguration:(id)a0 delegate:(id)a1 startImmediately:(BOOL)a2;

- (void)sendCustomFeedback:(id)a0;
- (void)didReportUserResponseFeedback:(id)a0;
- (void)didRankSections:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)setAllowedAppsForSiriSuggestions:(id)a0;
- (void)resultsDidBecomeVisible:(id)a0;
- (id)client;
- (void)didStartSearch:(id)a0;
- (void)didGradeResultRelevancy:(id)a0;
- (void)reportFeedback:(id)a0 queryId:(long long)a1;
- (void)didEngageCardSection:(id)a0;
- (void)didEngageResult:(id)a0;
- (void)didClearInput:(id)a0;
- (void)cardViewDidAppear:(id)a0;
- (void)didAppendLateSections:(id)a0;
- (void)didErrorOccur:(id)a0;
- (void)didEngageSuggestion:(id)a0;
- (void)didEndSearch:(id)a0;
- (id)configuration;
- (void)sendCustomFeedback:(id)a0 completion:(id /* block */)a1;
- (void)searchViewDidAppear:(id)a0;
- (void)cardViewDidDisappear:(id)a0;
- (unsigned long long)enabledStatus;
- (id)initInternal:(id)a0 startImmediately:(BOOL)a1;
- (void)didEngageSection:(id)a0;
- (void)sectionHeaderDidBecomeVisible:(id)a0;
- (void)suggestionsDidBecomeVisible:(id)a0;
- (void)didReceiveResultsAfterTimeout:(id)a0;
- (void)didGoToSearch:(id)a0;
- (id)taskWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)clearCompletionsFromDate:(id)a0 toDate:(id)a1;
- (id)bag;
- (void)addEngagedSuggestions:(id)a0;
- (void)reportFeedback:(id)a0;
- (void)setConfiguration:(id)a0;
- (void)didGradeLookupHintRelevancy:(id)a0;
- (void)setDelegate:(id)a0;
- (BOOL)loadImage:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)start;
- (id)initWithConfiguration:(id)a0;
- (void)didSubmitUserReportFeedback:(id)a0;
- (void)setBag:(id)a0;
- (void)searchViewDidDisappear:(id)a0;
- (void).cxx_destruct;
- (void)addCompletion:(id)a0 forInput:(id)a1;
- (id)delegate;
- (void)didGoToSite:(id)a0;
- (void)sendCBAEngagementFeedback:(id)a0 query:(unsigned long long)a1;
- (id)connection;
- (id)allowedAppsForSiriSuggestions;
- (void)reportEvent:(id)a0;
- (id)initWithConfiguration:(id)a0 connection:(id)a1 delegate:(id)a2 startImmediately:(BOOL)a3;
- (void)updateParametersForSmartSearchV1:(id)a0 smartSearchV2:(id)a1;
- (id)initWithConfiguration:(id)a0 connection:(id)a1;
- (BOOL)loadImage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)loadMoreResults:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)loadTask:(id)a0;
- (void)fileHandleAndAttributesForResource:(id)a0 completion:(id /* block */)a1;
- (BOOL)loadCard:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
