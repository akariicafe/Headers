@class CKShareParticipant, CKUserIdentityLookupInfo;

@interface HDCloudSyncPipelineStageLookupParticipant : HDCloudSyncPipelineStage {
    CKUserIdentityLookupInfo *_identityLookupInfo;
}

@property (readonly) CKShareParticipant *participant;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 identityLookupInfo:(id)a2;

@end
