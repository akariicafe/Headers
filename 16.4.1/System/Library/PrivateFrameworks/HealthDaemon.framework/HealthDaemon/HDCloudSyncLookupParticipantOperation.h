@class CKShareParticipant, CKUserIdentityLookupInfo;

@interface HDCloudSyncLookupParticipantOperation : HDCloudSyncOperation {
    CKUserIdentityLookupInfo *_identityLookupInfo;
}

@property (readonly) CKShareParticipant *participant;

- (void)main;
- (void).cxx_destruct;
- (void)_unitTest_setParticipant:(id)a0;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 identityLookupInfo:(id)a2;

@end
