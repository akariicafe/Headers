@class NSString, HMDCoreDataCloudShareService;

@interface HMDHomeSharedUserCloudShareManager : NSObject <HMFLogging> {
    HMDCoreDataCloudShareService *_shareService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_createShareForSharedUserDataWithHomeModelID:(id)a0;
- (void)_deleteDanglingShare:(id)a0 homeModelID:(id)a1;
- (id)_existingShareForSharedUserDataWithHomeModelID:(id)a0 error:(id *)a1;
- (id)_existingSharesForSharedUserDataWithHomeModelID:(id)a0 error:(id *)a1;
- (BOOL)_onlyShareOwnerInShare:(id)a0;
- (void)_removeSharedUserDataRootsForHomeWithModelID:(id)a0;
- (id)_shareForSharedUserDataWithHomeModelID:(id)a0;
- (id)acceptShareInvitation:(id)a0;
- (id)grantAccessForOwner:(id)a0 sharedUserDataWithHomeModelID:(id)a1;
- (id)initWithCloudShareService:(id)a0;
- (id)initWithContainer:(id)a0 sharedStore:(id)a1 privateStore:(id)a2 moc:(id)a3;
- (void)leaveShareWithSharedHomeModelID:(id)a0;
- (void)removeShareForSharedUserDataWithHomeModelID:(id)a0;
- (void)removeSharesWithNoParticipantForHomeWithModelID:(id)a0;
- (void)revokeAccessForOwner:(id)a0 sharedUserDataWithHomeModelID:(id)a1;

@end
