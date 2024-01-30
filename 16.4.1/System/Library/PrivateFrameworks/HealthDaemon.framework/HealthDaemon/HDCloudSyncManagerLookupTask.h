@class CKShareParticipant, CKUserIdentityLookupInfo, HDCloudSyncPipelineStageLookupParticipant;

@interface HDCloudSyncManagerLookupTask : HDCloudSyncManagerPipelineTask {
    CKUserIdentityLookupInfo *_lookupInfo;
    HDCloudSyncPipelineStageLookupParticipant *_lookupStage;
}

@property (readonly, copy, nonatomic) CKShareParticipant *participant;

- (void).cxx_destruct;
- (id)initWithManager:(id)a0 context:(id)a1 lookupInfo:(id)a2 accessibilityAssertion:(id)a3 completion:(id /* block */)a4;
- (id)pipelineForRepository:(id)a0;

@end
