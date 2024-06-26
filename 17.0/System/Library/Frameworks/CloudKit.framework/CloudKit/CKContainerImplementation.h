@class NSLock, NSHashTable, CKEntitlements, NSObject, NSMutableArray, CKContainerID, CKRecordID, CKContainerOptions, CKUploadRequestManager, CKDatabaseImplementation, NSOperationQueue, NSNumber, NSString, NSXPCConnection, CKContainer, CKContainerSetupInfo;
@protocol OS_dispatch_queue, CKXPCContainerScopedDaemon, NSObject;

@interface CKContainerImplementation : NSObject <CKXPCContainerScopedClient> {
    CKRecordID *_containerScopedUserID_locked;
    CKRecordID *_orgAdminUserID_locked;
    NSString *_sourceApplicationBundleIdentifier_locked;
    NSString *_sourceApplicationSecondaryIdentifier_locked;
    BOOL _hasValidContainerScopedDaemonProxyCreator;
    BOOL _hasValidDiscretionaryXPCConnection;
    id<CKXPCContainerScopedDaemon> _containerScopedDaemonProxyCreator;
    id<NSObject> _connectionInterruptedObserver;
    NSOperationQueue *_convenienceOperationQueue;
    NSMutableArray *_sandboxExtensionHandles;
    NSLock *_daemonConnectionLock;
    NSHashTable *_sharingUIObservers;
}

@property (readonly, weak, nonatomic) CKContainer *unconfiguredWrappingContainer;
@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly, copy, nonatomic) CKContainerOptions *options;
@property (readonly, nonatomic) CKDatabaseImplementation *privateCloudDatabaseImplementation;
@property (readonly, nonatomic) CKDatabaseImplementation *publicCloudDatabaseImplementation;
@property (readonly, nonatomic) CKDatabaseImplementation *sharedCloudDatabaseImplementation;
@property (readonly, nonatomic) CKDatabaseImplementation *organizationCloudDatabaseImplementation;
@property (readonly, nonatomic) NSMutableArray *codeServiceImplementations;
@property (readonly, nonatomic) CKUploadRequestManager *uploadRequestManager;
@property (readonly, nonatomic) NSXPCConnection *discretionaryXPCConnection;
@property (readonly, nonatomic) NSOperationQueue *throttlingOperationQueue;
@property (readonly, nonatomic) NSOperationQueue *backgroundThrottlingOperationQueue;
@property (readonly, nonatomic) NSOperationQueue *discretionaryThrottlingOperationQueue;
@property (readonly, nonatomic) int statusReportToken;
@property (readonly, nonatomic) CKContainerSetupInfo *cachedSetupInfo;
@property (nonatomic) BOOL hasCachedSetupInfo;
@property (readonly, nonatomic) CKEntitlements *resolvedEntitlements;
@property (copy) NSNumber *fakeDeviceToDeviceEncryptionAvailability;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;
@property (copy) CKRecordID *containerScopedUserID;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (copy) CKRecordID *orgAdminUserID;
@property (copy) NSString *personaIdentifier;

+ (void)initialize;

- (void)manuallyTriggerUploadRequests;
- (id)deviceContext;
- (id)sourceApplicationBundleIdentifier;
- (id)CKStatusReportArray;
- (id)initWithContainerID:(id)a0 options:(id)a1 unconfiguredWrappingContainer:(id)a2;
- (void)setSourceApplicationBundleIdentifier:(id)a0;
- (void)submitEventMetric:(id)a0;
- (id)serverPreferredPushEnvironmentWithError:(id *)a0;
- (id)_discretionaryDaemonMachServiceConnection;
- (id)codeServiceImplementationWithName:(id)a0;
- (id)sourceApplicationSecondaryIdentifier;
- (void)reloadAccountWithCompletionHandler:(id /* block */)a0;
- (id)recordChangeProvider;
- (void)dealloc;
- (void)statusGroupsForApplicationPermission:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)submitEventMetric:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchCurrentDeviceIDWithCompletionHandler:(id /* block */)a0;
- (id)setupInfo;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(id /* block */)a0;
- (void)fetchFrameworkCachesDirectoryWithCompletionHandler:(id /* block */)a0;
- (void)unregisterFromUploadRequests;
- (void)accountInfoWithCompletionHandler:(id /* block */)a0;
- (void)acceptShareMetadata:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)consumeSandboxExtensions:(id)a0 reply:(id /* block */)a1;
- (void)discoverAllIdentitiesWithWrappingContainer:(id)a0 convenienceConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleSharingUIUpdatedShare:(id)a0 recordID:(id)a1 isDeleted:(BOOL)a2 error:(id)a3 reply:(id /* block */)a4;
- (id)untrustedEntitlements;
- (void)unregisterFromUploadRequestsWithMachServiceName:(id)a0;
- (id)primaryIdentifier;
- (void)fetchShareMetadataWithURL:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (id)codeServiceImplementationWithName:(id)a0 databaseScope:(long long)a1 serviceInstanceURL:(id)a2;
- (void)addOperation:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2;
- (void)fetchShareParticipantWithUserRecordID:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (id)CKPropertiesDescription;
- (void)registerForPackageUploadRequests:(id /* block */)a0 machServiceName:(id)a1;
- (void)discoverUserIdentityWithEmailAddress:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)_submitEventMetric:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleRecordChanged:(id)a0 changeType:(long long)a1 record:(id)a2 error:(id)a3;
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(id /* block */)a0;
- (void)dumpDaemonStatusReport;
- (void)discoverUserIdentityWithPhoneNumber:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)discoverUserIdentityWithUserRecordID:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)serverPreferredPushEnvironmentSynchronous:(BOOL)a0 withCompletionHandler:(id /* block */)a1;
- (id)description;
- (void)tossConfigWithCompletionHandler:(id /* block */)a0;
- (void)setSourceApplicationSecondaryIdentifier:(id)a0;
- (id)applicationBundleIdentifierForPush;
- (void)_addPreparedConvenienceOperation:(id)a0;
- (void)fetchOrgAdminUserRecordIDWithCompletionHandler:(id /* block */)a0;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(id /* block */)a0;
- (void)addPreparedOperationToDiscretionaryThrottlingOperationQueue:(id)a0;
- (void)fetchLongLivedOperationWithID:(id)a0 wrappingContainer:(id)a1 completionHandler:(id /* block */)a2;
- (void)registerForAssetRequests:(id /* block */)a0 packageRequests:(id /* block */)a1 machServiceName:(id)a2;
- (void)addPreparedOperationToBackgroundThrottlingOperationQueue:(id)a0;
- (void)fetchShareParticipantWithEmailAddress:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)fetchShareParticipantWithLookupInfo:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)_scheduleConvenienceOperation:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2;
- (void)fetchSignatureGeneratorForCurrentUserBoundaryKeyWithCompletionHandler:(id /* block */)a0;
- (void)dropDetachedContainersWithCompletionHandler:(id /* block */)a0;
- (void)fetchUserRecordIDWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setFakeResponseOperationResult:(id)a0 forNextRequestOfClassName:(id)a1 forItemID:(id)a2 withLifetime:(int)a3;
- (void)accountStatusWithCompletionHandler:(id /* block */)a0;
- (void)fetchShareParticipantWithPhoneNumber:(id)a0 wrappingContainer:(id)a1 convenienceConfiguration:(id)a2 completionHandler:(id /* block */)a3;
- (void)wipeAllCachesAndDie;
- (void)registerForAssetUploadRequests:(id /* block */)a0;
- (void)representativeDataclassEnabledWithCompletionHandler:(id /* block */)a0;
- (void)fetchFullNameAndFormattedUsernameOfAccountWithCompletionHandler:(id /* block */)a0;
- (long long)lastKnownDeviceCount;
- (void)fetchFullNameAndPrimaryEmailOnAccountWithCompletionHandler:(id /* block */)a0;
- (void)clearPILSCacheForLookupInfos:(id)a0;
- (void)statusForApplicationPermission:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)cancelUploadRequests;
- (id)codeServiceImplementationWithName:(id)a0 databaseScope:(long long)a1;
- (void)fetchAllLongLivedOperationIDsWithCompletionHandler:(id /* block */)a0;
- (void)requestApplicationPermission:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)setApplicationPermission:(unsigned long long)a0 enabled:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)networkTransferEndpointWithError:(id *)a0;
- (void)fetchServerEnvironment:(id /* block */)a0;
- (void)fetchCurrentUserBoundaryKeyWithCompletionHandler:(id /* block */)a0;
- (void)addPreparedOperationToThrottlingOperationQueue:(id)a0;
- (void)registerForAssetUploadRequests:(id /* block */)a0 machServiceName:(id)a1;
- (void)registerForPackageUploadRequests:(id /* block */)a0;
- (id)codeServiceImplementationWithName:(id)a0 serviceInstanceURL:(id)a1;
- (void)decryptPersonalInfoOnShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)setFakeError:(id)a0 forNextRequestOfClassName:(id)a1;
- (void)dumpDaemonStatusReportToFileHandle:(id)a0 completionHandler:(id /* block */)a1;
- (void)getOutstandingOperationCountWithCompletionHandler:(id /* block */)a0;
- (void)clearContainerFromMetadataCache;

@end
