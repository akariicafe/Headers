@class NSString, PARSession, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface SPFeedbackManager : NSObject <SFFeedbackListener>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *feedbackQueue;
@property (retain, nonatomic) NSUserDefaults *defaultsCenter;
@property BOOL needsToDisplayFirstTimeView;
@property BOOL isParsecEnabled;
@property (retain, nonatomic) PARSession *parsecFeedbackListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bumpPriorityOnQueue:(id)a0 withCompletion:(id /* block */)a1;
+ (void)flushFeedbackWithCompletion:(id /* block */)a0;
+ (id)sharedManager;

- (void)didStartSearch:(id)a0;
- (void)didEngageResult:(id)a0;
- (void)sectionHeaderDidBecomeVisible:(id)a0;
- (void)searchViewDidDisappear:(id)a0;
- (void)didEngageSuggestion:(id)a0;
- (void)suggestionsDidBecomeVisible:(id)a0;
- (void)didRankSections:(id)a0;
- (void)didEndSearch:(id)a0;
- (void)didEngageCardSection:(id)a0;
- (void)didReportUserResponseFeedback:(id)a0;
- (void)didGradeResultRelevancy:(id)a0;
- (void)didPerformCommand:(id)a0;
- (void)cardViewDidAppear:(id)a0;
- (void)reportFeedback:(id)a0 queryId:(long long)a1;
- (void)didClearInput:(id)a0;
- (void)didAppendLateSections:(id)a0;
- (void)searchViewDidAppear:(id)a0;
- (void)didReceiveResultsAfterTimeout:(id)a0;
- (void)cardViewDidDisappear:(id)a0;
- (void)resultsDidBecomeVisible:(id)a0;
- (void)didErrorOccur:(id)a0;
- (void)sendCustomFeedback:(id)a0;
- (void)didEngageSection:(id)a0;
- (void)updateParsecEnabled;
- (void)_sendFeedback:(id)a0 type:(long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isParsecFeedbackEnabled;
- (id)init;
- (void).cxx_destruct;
- (void)_sendFeedback:(id)a0 type:(long long)a1 queryId:(unsigned long long)a2;
- (void)updateNeedsToDisplayFirstTimeView;

@end
