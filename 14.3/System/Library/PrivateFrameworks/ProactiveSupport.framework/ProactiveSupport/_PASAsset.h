@class _PASLock, NSString, NSDictionary, NSObject, _PASNotificationTracker;
@protocol OS_dispatch_queue;

@interface _PASAsset : NSObject <_PASAssetProtocol> {
    NSString *_bundleIdentifier;
    NSDictionary *_requiredMobileAssetProperties;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _installNotificationToken;
    int _metadataNotificationToken;
    _PASNotificationTracker *_updateNotificationTracker;
    _PASLock *_lock;
}

@property (readonly, nonatomic) unsigned long long assetVersion;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) unsigned long long compatibilityVersion;
@property (readonly, nonatomic) unsigned long long bestAssetVersionObserved;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_loadDefaultBundleVersionWithGuardedData:(id)a0;
- (id)init;
- (void)setBundlePath:(id)a0;
- (BOOL)deregisterUpdateHandlerAsyncWithToken:(id)a0;
- (id)bundlePath;
- (void).cxx_destruct;
- (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
- (id)_assetDescription;
- (void)dealloc;
- (BOOL)deregisterUpdateHandlerWithToken:(id)a0;
- (void)_updateAssetMetadata;
- (void)_issueUpdateNotificationsWithCallback:(id /* block */)a0;
- (void)callAssetUpdateHandlers;
- (void)clearOverrides;
- (void)invokeWithBundleOverride:(id)a0 block:(id /* block */)a1;
- (id)pathForResourceWithName:(id)a0 extension:(id)a1;
- (id)initWithAssetTypeDescriptorPath:(id)a0 defaultBundlePath:(id)a1 matchingKeysAndValues:(id)a2 notificationQueue:(id)a3;
- (id)initWithAssetTypeDescriptorPath:(id)a0 defaultBundlePath:(id)a1 matchingKeysAndValues:(id)a2 notificationQueue:(id)a3 enableAssetUpdates:(BOOL)a4;
- (id)pathsForResourcesWithNames:(id)a0;
- (id)registerUpdateHandler:(id /* block */)a0;
- (id)_initWithBundleIdentifier:(id)a0 defaultBundlePath:(id)a1 compatibilityVersion:(unsigned long long)a2 matchingKeysAndValues:(id)a3 notificationQueue:(id)a4 enableAssetUpdates:(BOOL)a5;
- (id)pathForResourceWithName:(id)a0 extension:(id)a1 assetVersion:(unsigned long long *)a2;
- (id)pathForResourceWithNameAndExtension:(id)a0 assetVersion:(unsigned long long *)a1;
- (id)pathForResourceWithNameAndExtension:(id)a0;
- (id)pathsForResourcesWithNames:(id)a0 assetVersion:(unsigned long long *)a1;
- (BOOL)_updateAssetMetadataUsingQueryResults:(id)a0;

@end
