@class NSUUID, NSString, HDCloudSyncShareSetupMetadata, NSNumber, CKUserIdentityLookupInfo;

@interface HDCloudSyncPipelineStageAddSharingParticipant : HDCloudSyncPipelineStage

@property (readonly, nonatomic) HDCloudSyncShareSetupMetadata *result;
@property (readonly, copy, nonatomic) CKUserIdentityLookupInfo *identityLookupInfo;
@property (readonly, copy, nonatomic) NSUUID *participantPushStoreIdentifier;
@property (readonly, copy, nonatomic) NSString *participantOwnerIdentifier;
@property (nonatomic) BOOL requireExistingRelationship;
@property (copy, nonatomic) NSNumber *requiredZoneDeviceMode;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 identityLookupInfo:(id)a2;

@end
