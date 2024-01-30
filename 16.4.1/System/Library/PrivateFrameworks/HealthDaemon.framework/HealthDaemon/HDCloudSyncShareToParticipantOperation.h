@class NSArray, NSUUID, NSString, HDCloudSyncZone, HDCloudSyncShareSetupMetadata, NSNumber, CKUserIdentityLookupInfo;

@interface HDCloudSyncShareToParticipantOperation : HDCloudSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CKUserIdentityLookupInfo *_identityLookupInfo;
    NSUUID *_storeIdentifier;
    NSString *_ownerIdentifier;
    BOOL _requireExistingRelationship;
    NSNumber *_expectedDeviceMode;
    HDCloudSyncZone *_participantPushZone;
    NSArray *_addedParticipants;
}

@property (readonly) HDCloudSyncShareSetupMetadata *result;

- (void)main;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1 identityLookupInfo:(id)a2 requireExistingRelationship:(BOOL)a3 requireZoneDeviceMode:(id)a4;

@end
