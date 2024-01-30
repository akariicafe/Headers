@class NSArray, HDCloudSyncShareSetupMetadata, HDCodableSummarySharingEntry, CKUserIdentity;

@interface HDCloudSyncPipelineStageSharedSummaryAddParticipant : HDCloudSyncPipelineStage {
    HDCodableSummarySharingEntry *_codableEntry;
    NSArray *_authorizationIdentifiers;
}

@property (readonly) HDCloudSyncShareSetupMetadata *shareSetupMetadata;
@property (readonly) CKUserIdentity *participantIdentity;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 codableEntry:(id)a2 authorizationIdentifiers:(id)a3;

@end
