@class HMDHomeManager, NSString, HMDCoreDataCloudShareService, HMDCoreDataCloudTransform;

@interface HMDHomeOwnerCloudShareManager : NSObject <HMDCoreDataCloudChangeListener, HMFLogging> {
    HMDCoreDataCloudShareService *_shareService;
    HMDCoreDataCloudTransform *_cloudTransform;
    HMDHomeManager *_homeManager;
    id /* block */ _modelSelectionBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_allExistingSharesForHomeWithModelID:(id)a0 error:(id *)a1;
- (id)_canonicalShareFromSharesToSharedHomes:(id)a0 shareMap:(id)a1;
- (id)_createShareForHome:(id)a0;
- (void)_deleteSharedHome:(id)a0;
- (id)_existingShareForHomeWithModelID:(id)a0 error:(id *)a1;
- (id)_existingSharedHomesWithModelID:(id)a0 error:(id *)a1;
- (id)_removeShare:(id)a0 usingShareService:(id)a1 forHomeWithUUID:(id)a2;
- (id)_shareForHome:(id)a0;
- (id)acceptShareInvitation:(id)a0;
- (id)auditAccessForUsers:(id)a0 home:(id)a1;
- (void)didDeleteModelWithID:(id)a0 tombstone:(id)a1 context:(id)a2;
- (id)grantAccessForUser:(id)a0 home:(id)a1;
- (id)initWithContainer:(id)a0 sharedStore:(id)a1 privateStore:(id)a2 moc:(id)a3 cloudTransform:(id)a4 homeManager:(id)a5;
- (id)initWithShareService:(id)a0 homeManager:(id)a1 cloudTransform:(id)a2 modelSelectionBlock:(id /* block */)a3;
- (id)removeSharesForHome:(id)a0;
- (id)revokeAccessForUser:(id)a0 home:(id)a1;

@end
