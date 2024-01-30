@class CKShareParticipant, NSArray, NSDictionary, NSString, HDSynchronousTaskGroup;

@interface HDCloudSyncAddSharingParticipantOperation : HDCloudSyncOperation <HDSynchronousTaskGroupDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CKShareParticipant *_participant;
    NSArray *_zones;
    BOOL _requireExistingRelationship;
    HDSynchronousTaskGroup *_taskGroup;
}

@property (retain) CKShareParticipant *participant;
@property (copy) NSArray *zones;
@property BOOL requireExistingRelationship;
@property (readonly, copy, nonatomic) NSArray *shareURLs;
@property (readonly, copy, nonatomic) NSDictionary *invitationTokensByShareURL;
@property (readonly, copy, nonatomic) CKShareParticipant *ownerParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;
- (void)synchronousTaskGroup:(id)a0 didFinishWithSuccess:(BOOL)a1 errors:(id)a2;
- (BOOL)_isValidParticipant:(id)a0 withPermissions:(long long)a1;
- (BOOL)_isSharingWithParticipant:(id)a0;
- (id)_updateShareRecordsWithParticipant:(id)a0 container:(id)a1;
- (id)_updatedRegistryRecordIfNeededForContainer:(id)a0;
- (void)_didSaveSharesInZones:(id)a0;
- (id)_addParticipantIfNeeded:(id)a0 zone:(id)a1 share:(id)a2;
- (void)_foundOwnerParticipant:(id)a0;

@end
