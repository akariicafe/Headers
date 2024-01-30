@class PARBag, NSSet, NSXPCConnection, PARSessionConfiguration;
@protocol PARSessionDelegate;

@interface PARSessionSwiftInternal : NSObject <SFResourceLoader, SFFeedbackListener> {
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ fileManager;
    void /* unknown type, empty encoding */ _configuration;
    void /* unknown type, empty encoding */ mapsListener;
    void /* unknown type, empty encoding */ _bag;
    void /* unknown type, empty encoding */ _sampled;
    void /* unknown type, empty encoding */ _sampleClientTimingEventAllowlist;
    void /* unknown type, empty encoding */ _allowedAppsForSiriSuggestions;
    void /* unknown type, empty encoding */ activityMonitor;
    void /* unknown type, empty encoding */ skappToken;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ session;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ client;
@property (nonatomic, retain) id<PARSessionDelegate> delegate;
@property (nonatomic, retain) PARSessionConfiguration *configuration;
@property (nonatomic, copy) NSSet *allowedAppsForSiriSuggestions;
@property (nonatomic, retain) PARBag *bag;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) unsigned long long enabledStatus;

- (void)sendCustomFeedback:(id)a0;
- (void)didReportUserResponseFeedback:(id)a0;
- (void)didRankSections:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)resultsDidBecomeVisible:(id)a0;
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
- (void)searchViewDidAppear:(id)a0;
- (void)cardViewDidDisappear:(id)a0;
- (void)didEngageSection:(id)a0;
- (void)sectionHeaderDidBecomeVisible:(id)a0;
- (void)suggestionsDidBecomeVisible:(id)a0;
- (void)didReceiveResultsAfterTimeout:(id)a0;
- (void)didGoToSearch:(id)a0;
- (void)addEngagedSuggestions:(id)a0;
- (void)send:(id)a0 completion:(id /* block */)a1;
- (void)clearCompletionsFrom:(id)a0 to:(id)a1;
- (void)didGradeLookupHintRelevancy:(id)a0;
- (BOOL)loadImage:(id)a0 withContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)didSubmitUserReportFeedback:(id)a0;
- (void)searchViewDidDisappear:(id)a0;
- (void)addCompletion:(id)a0 forInput:(id)a1;
- (void)didGoToSite:(id)a0;
- (void)updateParametersForSmartSearchV1:(id)a0 smartSearchV2:(id)a1;
- (BOOL)loadImage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)loadMoreResults:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)loadCard:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithSession:(id)a0 configuration:(id)a1 connection:(id)a2 delegate:(id)a3;
- (id)taskWith:(id)a0 completion:(id /* block */)a1;
- (void)loadWithTask:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)sendCBAEngagementFeedback:(id)a0 query:(unsigned long long)a1;
- (void)dealloc;
- (void)fileHandleAndAttributesForResource:(id)a0 completion:(id /* block */)a1;

@end
