@class NSHashTable, CKDTokenRegistrationScheduler, NSURL, CKSQLiteDatabase, CKDThrottleManager, CKDLogicalDeviceScopedStateManager, CKDAccountDataSecurityObserver, CKDOperationInfoCache, CKDMetadataCache;
@protocol CKTestDeviceReference, CKDTestServer, CKDTestDevice;

@interface CKDLogicalDeviceContext : NSObject

@property (retain, nonatomic) CKDAccountDataSecurityObserver *accountDataSecurityObserver;
@property (retain, nonatomic) CKSQLiteDatabase *deviceScopedDatabase;
@property (retain, nonatomic) NSHashTable *sharedPcsCaches;
@property (readonly, nonatomic) id<CKTestDeviceReference> testDeviceReference;
@property (readonly, nonatomic) id<CKDTestDevice> testDevice;
@property (readonly, nonatomic) id<CKDTestServer> testServer;
@property (readonly, nonatomic) BOOL isLiveDevice;
@property (readonly, nonatomic) CKDMetadataCache *metadataCache;
@property (readonly, nonatomic) CKDOperationInfoCache *operationInfoCache;
@property (readonly, nonatomic) CKDThrottleManager *throttleManager;
@property (readonly, weak, nonatomic) CKDLogicalDeviceScopedStateManager *deviceScopedStateManager;
@property (readonly, nonatomic) CKDTokenRegistrationScheduler *tokenRegistrationScheduler;
@property (readonly, nonatomic) NSURL *cacheDirectory;
@property (readonly, nonatomic) long long pushBehavior;

+ (id)existingDefaultContext;
+ (id)deviceContextForTestDeviceReference:(id)a0;
+ (id)defaultContext;

- (id)_initWithTestDeviceReference:(id)a0;
- (void)clearPCSMemoryCaches;
- (id)deviceScopedPushTopic:(id)a0;
- (void).cxx_destruct;
- (id)pcsCacheForContainerID:(id)a0 accountOverrideInfo:(id)a1 accountID:(id)a2 encryptionServiceName:(id)a3;

@end
