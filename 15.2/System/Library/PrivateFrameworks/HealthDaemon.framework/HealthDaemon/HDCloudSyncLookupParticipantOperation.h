@class CKShareParticipant, CKUserIdentityLookupInfo;

@interface HDCloudSyncLookupParticipantOperation : HDCloudSyncOperation {
    CKUserIdentityLookupInfo *_identityLookupInfo;
}

@property (readonly) CKShareParticipant *participant;

- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 identityLookupInfo:(id)a2;
- (void)_unitTest_setParticipant:(id)a0;

@end
