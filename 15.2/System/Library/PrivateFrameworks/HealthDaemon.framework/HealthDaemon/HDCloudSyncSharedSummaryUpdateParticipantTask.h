@class HDCodableSummarySharingEntry, NSArray;

@interface HDCloudSyncSharedSummaryUpdateParticipantTask : HDCloudSyncManagerPipelineTask {
    HDCodableSummarySharingEntry *_codableEntry;
    NSArray *_authorizationIdentifiersToAdd;
    NSArray *_authorizationIdentifiersToDelete;
}

- (id)pipelineForRepository:(id)a0;
- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 codableEntry:(id)a2 authorizationIdentifiersToAdd:(id)a3 authorizationIdentifiersToDelete:(id)a4 accessibilityAssertion:(id)a5 completion:(id /* block */)a6;

@end
