@class NSArray, HDCloudSyncPipelineStageSharedSummaryAddParticipant, HDCloudSyncShareSetupMetadata, HDCodableSummarySharingEntry, CKUserIdentity;

@interface HDCloudSyncSharedSummarySetupTask : HDCloudSyncManagerPipelineTask {
    HDCodableSummarySharingEntry *_codableEntry;
    NSArray *_authorizationIdentifiers;
    HDCloudSyncPipelineStageSharedSummaryAddParticipant *_addParticipantStage;
}

@property (readonly, copy, nonatomic) HDCloudSyncShareSetupMetadata *shareSetupMetadata;
@property (readonly, copy, nonatomic) CKUserIdentity *participantIdentity;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 codableEntry:(id)a2 authorizationIdentifiers:(id)a3 accessibilityAssertion:(id)a4 completion:(id /* block */)a5;
- (id)pipelineForRepository:(id)a0;

@end
