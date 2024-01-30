@class NSString, PPRecordMonitoringHelper, PPClientFeedbackHelper;

@interface PPContactStore : NSObject <PPFeedbackAccepting, PPClientStore> {
    PPRecordMonitoringHelper *_monitoringHelper;
    PPClientFeedbackHelper *_clientFeedbackHelper;
}

@property (retain, nonatomic) NSString *clientIdentifier;

- (BOOL)iterRankedContactsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)contactHandlesForTopics:(id)a0 error:(id *)a1;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)loadContactNameRecordsAndMonitorChangesWithDelegate:(id)a0 error:(id *)a1;
- (BOOL)iterContactNameRecordsForClient:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)_sendChangesToDelegates;
- (id)contactHandlesForSource:(id)a0 error:(id *)a1;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)a0 chosenContactIdentifier:(id)a1 completion:(id /* block */)a2;
- (id /* block */)_recordGenerator;
- (void)_loadContactNameRecordsWithDelegate:(id)a0;

@end
