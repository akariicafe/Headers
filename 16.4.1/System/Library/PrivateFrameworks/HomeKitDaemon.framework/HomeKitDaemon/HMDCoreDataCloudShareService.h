@class NSPersistentStore, NSString, NSPersistentCloudKitContainer, HMDManagedObjectContext, CKContainer;

@interface HMDCoreDataCloudShareService : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CKContainer *_ckContainer;
}

@property (readonly) NSPersistentCloudKitContainer *container;
@property (readonly) NSPersistentStore *sharedStore;
@property (readonly) NSPersistentStore *privateStore;
@property (readonly) HMDManagedObjectContext *managedObjectContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)ckContainer;
- (void).cxx_destruct;
- (id)_pushUpdatedShare:(id)a0;
- (id)_acceptShareInvitation:(id)a0;
- (void)_acceptShareInvitationsFromMetadata:(id)a0 intoPersistentStore:(id)a1 completion:(id /* block */)a2;
- (id)_addParticipant:(id)a0 share:(id)a1;
- (id)_auditUsersForRevokedAccessWithAccountHandles:(id)a0 share:(id)a1;
- (id)_fetchParticipantForAccountHandle:(id)a0;
- (id)_fetchParticipantsForAccountHandles:(id)a0;
- (id)_fetchShareMetadataForInvitation:(id)a0;
- (void)_fetchShareMetadataForInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_fetchShareWithRecordID:(id)a0 completion:(id /* block */)a1;
- (id)_grantAccessForUserWithAccountHandle:(id)a0 share:(id)a1;
- (void)_pushUpdatedShare:(id)a0 completion:(id /* block */)a1;
- (id)_removeParticipant:(id)a0 share:(id)a1;
- (id)_revokeAccessForUserWithAccountHandle:(id)a0 share:(id)a1;
- (id)acceptShareInvitation:(id)a0;
- (id)acceptShareInvitationsFromMetadata:(id)a0 intoPersistentStore:(id)a1;
- (id)auditUsersForRevokedAccessWithAccountHandles:(id)a0 share:(id)a1;
- (id)fetchShareWithRecordID:(id)a0;
- (id)grantAccessForUserWithAccountHandle:(id)a0 share:(id)a1;
- (id)initWithContainer:(id)a0 sharedStore:(id)a1 privateStore:(id)a2 moc:(id)a3;
- (id)revokeAccessForUserWithAccountHandle:(id)a0 share:(id)a1;

@end
