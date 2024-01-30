@class PARBag, NSXPCConnection, NSString, NSSet, GEOSearchFoundationFeedbackListener, PARSessionConfiguration, NSObject, NSFileManager, PARSearchClient;
@protocol PARSessionDelegate, OS_dispatch_queue;

@interface PARSession : NSObject <SFFeedbackListener, SFResourceLoader> {
    NSFileManager *_fileManager;
    GEOSearchFoundationFeedbackListener *_mapsListener;
    PARBag *_bag;
    _Atomic BOOL _sampled;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSSet *_allowedAppsForSiriSuggestions;
    NSSet *_sampleClientTimingEventWhitelist;
}

@property (retain) PARBag *bag;
@property (readonly, nonatomic) NSSet *sampleClientTimingEventWhitelist;
@property (retain) NSSet *allowedAppsForSiriSuggestions;
@property (readonly, nonatomic) PARSearchClient *client;
@property (retain) PARSessionConfiguration *configuration;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (weak) id<PARSessionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sessionWithConfiguration:(id)a0;
+ (id)sharedSession;
+ (id)sharedPARSessionWithConfiguration:(id)a0;
+ (id)sessionWithConfiguration:(id)a0 delegate:(id)a1 startImmediately:(BOOL)a2;

- (void)sendCustomFeedback:(id)a0;
- (void)didClearInput:(id)a0;
- (void)suggestionsDidBecomeVisible:(id)a0;
- (void)cardViewDidAppear:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)didEndSearch:(id)a0;
- (void)cardViewDidDisappear:(id)a0;
- (void)didReceiveResultsAfterTimeout:(id)a0;
- (void)sectionHeaderDidBecomeVisible:(id)a0;
- (void)didAppendLateSections:(id)a0;
- (void)didEngageSection:(id)a0;
- (void)didErrorOccur:(id)a0;
- (void)didRankSections:(id)a0;
- (void)searchViewDidDisappear:(id)a0;
- (void)resultsDidBecomeVisible:(id)a0;
- (void)didEngageSuggestion:(id)a0;
- (void)searchViewDidAppear:(id)a0;
- (void)didStartSearch:(id)a0;
- (void)didReportUserResponseFeedback:(id)a0;
- (void)reportFeedback:(id)a0 queryId:(long long)a1;
- (void)didEngageResult:(id)a0;
- (void)didGradeResultRelevancy:(id)a0;
- (id)initWithConfiguration:(id)a0 connection:(id)a1 delegate:(id)a2 startImmediately:(BOOL)a3;
- (void)fileHandleAndAttributesForResource:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)taskWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)loadTask:(id)a0;
- (void)didSubmitUserReportFeedback:(id)a0;
- (BOOL)loadCard:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)loadImage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)reportEvent:(id)a0;
- (void)_flushUsingConnectionToFBF:(id)a0;
- (void)sendCustomFeedback:(id)a0 completion:(id /* block */)a1;
- (void)didUpdateSiriSuggestionsAppWhitelist;
- (id)initWithConfiguration:(id)a0;
- (void)_scheduleEagerFlush;
- (void)didGoToSite:(id)a0;
- (void)sendCBAEngagementFeedback:(id)a0 query:(unsigned long long)a1;
- (id)initWithConfiguration:(id)a0 connection:(id)a1;
- (BOOL)loadMoreResults:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)didGradeLookupHintRelevancy:(id)a0;
- (void)start;
- (void)reportFeedback:(id)a0;
- (void)didGoToSearch:(id)a0;
- (unsigned long long)enabledStatus;

@end
