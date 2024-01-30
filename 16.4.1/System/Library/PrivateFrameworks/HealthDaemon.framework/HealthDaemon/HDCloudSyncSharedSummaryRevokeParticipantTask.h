@class HDCodableSummarySharingEntry;

@interface HDCloudSyncSharedSummaryRevokeParticipantTask : HDCloudSyncManagerPipelineTask {
    HDCodableSummarySharingEntry *_codableEntry;
}

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 codableEntry:(id)a2 accessibilityAssertion:(id)a3 completion:(id /* block */)a4;
- (id)pipelineForRepository:(id)a0;

@end
