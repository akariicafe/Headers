@class NSString, PARSession;

@interface PRSFeedbackProxy : NSObject <SFFeedbackListener>

@property (weak, nonatomic) PARSession *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (void).cxx_destruct;

@end
