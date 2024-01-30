@class NSString, PPRecordMonitoringHelper, PPClientFeedbackHelper;

@interface PPContactStore : NSObject <PPFeedbackAccepting, PPClientStore> {
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)contactHandlesForSource:(id)a0 error:(id *)a1;
- (BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)a0 error:(id *)a1;
- (id)contactHandlesForTopics:(id)a0 error:(id *)a1;
- (id /* block */)_recordGenerator;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)_loadContactNameRecordsWithDelegate:(id)a0;
- (BOOL)iterRankedContactsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)_sendChangesToDelegates;
- (BOOL)iterContactNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)upcomingRelevantContactsForQuery:(id)a0 error:(id *)a1;
- (id)init;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
