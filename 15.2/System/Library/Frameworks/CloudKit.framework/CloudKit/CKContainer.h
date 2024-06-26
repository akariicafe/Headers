@class CKContainerID, NSString, CKDatabase, CKContainerOptions, NSMutableArray, CKContainerSetupInfo, CKConvenienceConfiguration, CKContainerImplementation;

@interface CKContainer : NSObject

@property (retain, nonatomic) CKDatabase *privateCloudDatabase;
@property (retain, nonatomic) CKDatabase *publicCloudDatabase;
@property (retain, nonatomic) CKDatabase *sharedCloudDatabase;
@property (retain, nonatomic) NSMutableArray *codeServices;
@property (nonatomic) int scopedIdentityUpdateToken;
@property (readonly, nonatomic) CKContainerImplementation *implementation;
@property (retain, nonatomic) CKConvenienceConfiguration *convenienceConfiguration;
@property (readonly, copy, nonatomic) CKContainerID *containerID;
@property (readonly, copy, nonatomic) CKContainerOptions *options;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *sourceApplicationSecondaryIdentifier;
@property (readonly, copy, nonatomic) CKContainerSetupInfo *setupInfo;
@property (readonly, nonatomic) CKDatabase *organizationCloudDatabase;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (id)containerIDForContainerIdentifier:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_CKXPCClientToDiscretionaryDaemonInterface;
+ (id)defaultContainer;
+ (id)containerIDForContainerIdentifier:(id)a0 environment:(long long)a1;
+ (id)matterhornName;
+ (BOOL)currentProcessCanUseCloudKit;
+ (id)uploadRequestFetchAllNotificationName;
+ (id)importantUserRecordAccessQueue;
+ (id)containerWithIdentifier:(id)a0;

- (void)fetchOrgAdminUserRecordIDWithCompletionHandler:(id /* block */)a0;
- (void)fetchFullNameAndPrimaryEmailOnAccountWithCompletionHandler:(id /* block */)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void)registerForAssetUploadRequests:(id /* block */)a0 machServiceName:(id)a1;
- (void)fetchUserRecordIDWithCompletionHandler:(id /* block */)a0;
- (void)statusGroupsForApplicationPermission:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)registerForPackageUploadRequests:(id /* block */)a0 machServiceName:(id)a1;
- (void)submitEventMetric:(id)a0;
- (void)accountStatusWithCompletionHandler:(id /* block */)a0;
- (void)setFakeError:(id)a0 forNextRequestOfClassName:(id)a1;
- (void)registerForPackageUploadRequests:(id /* block */)a0;
- (void)submitEventMetric:(id)a0 completionHandler:(id /* block */)a1;
- (void)registerForAssetUploadRequests:(id /* block */)a0;
- (id)initWithContainerID:(id)a0;
- (void)fetchCurrentDeviceIDWithCompletionHandler:(id /* block */)a0;
- (void)setApplicationPermission:(unsigned long long)a0 enabled:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)unregisterFromUploadRequestsWithMachServiceName:(id)a0;
- (void)discoverAllContactUserInfosWithCompletionHandler:(id /* block */)a0;
- (void)discoverUserInfoWithEmailAddress:(id)a0 completionHandler:(id /* block */)a1;
- (void)discoverUserInfoWithUserRecordID:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_initWithContainerIdentifier:(id)a0;
- (id)_initUnconfiguredContainerWithImplementation:(id)a0;
- (id)codeServiceWithName:(id)a0 serviceInstanceURL:(id)a1;
- (id)codeServiceWithName:(id)a0;
- (id)initWithImplementation:(id)a0 convenienceConfiguration:(id)a1;
- (id)initWithContainerSetupInfo:(id)a0;
- (id)databaseWithDatabaseScope:(long long)a0;
- (id)codeServiceWithName:(id)a0 databaseScope:(long long)a1;
- (id)codeServiceWithName:(id)a0 databaseScope:(long long)a1 serviceInstanceURL:(id)a2;
- (void)discoverAllIdentitiesWithCompletionHandler:(id /* block */)a0;
- (void)discoverUserIdentityWithEmailAddress:(id)a0 completionHandler:(id /* block */)a1;
- (void)discoverUserIdentityWithPhoneNumber:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchShareMetadataWithURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)discoverUserIdentityWithUserRecordID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchShareParticipantWithEmailAddress:(id)a0 completionHandler:(id /* block */)a1;
- (void)acceptShareMetadata:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchShareParticipantWithPhoneNumber:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchShareParticipantWithUserRecordID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchLongLivedOperationWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchShareParticipantWithLookupInfo:(id)a0 completionHandler:(id /* block */)a1;
- (void)accountInfoWithCompletionHandler:(id /* block */)a0;
- (void)requestApplicationPermission:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithContainerID:(id)a0 options:(id)a1;
- (id)serverPreferredPushEnvironmentWithError:(id *)a0;
- (void)manuallyTriggerUploadRequests;
- (void)unregisterFromUploadRequests;
- (void)fetchFullNameAndFormattedUsernameOfAccountWithCompletionHandler:(id /* block */)a0;
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(id /* block */)a0;
- (void)cancelUploadRequests;
- (void)dealloc;
- (void)fetchAllLongLivedOperationIDsWithCompletionHandler:(id /* block */)a0;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(id /* block */)a0;
- (void)statusForApplicationPermission:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)addOperation:(id)a0;
- (void)wipeAllCachesAndDie;

@end
