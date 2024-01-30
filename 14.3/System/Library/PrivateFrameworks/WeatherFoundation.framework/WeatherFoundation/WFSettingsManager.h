@class NSObject, NSString, NSHashTable, WFRemoteAppSettings, WFUserInfoManager;
@protocol OS_dispatch_queue;

@interface WFSettingsManager : NSObject <WFUserInfoManagerDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestSerialQueue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } settingsLock;
@property (retain, nonatomic) WFRemoteAppSettings *settings;
@property (retain, nonatomic) WFUserInfoManager *userInfoManager;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) NSString *APIVersion;
@property (readonly, nonatomic) BOOL useFallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userIdentifier;
+ (id)sharedInstance;
+ (void)setUserIdentifier:(id)a0;

- (id)containerIdentifier;
- (id)permanentURLForRecordID:(id)a0 containerIdentifier:(id)a1;
- (id)urlSafeBase64EncodedStringWithData:(id)a0 options:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)shouldReroutePermanentURLsForContainerIdentifier:(id)a0;
- (char)containerIDForContainerIdentifier:(id)a0;
- (id)debugOverrides;
- (void)setUseFallback:(BOOL)a0;
- (unsigned long long)debugEnvironmentFromOverride:(id)a0;
- (void)updateAssetURLHostIfNeededWithComponents:(id)a0 containerIdentifier:(id)a1;
- (void)fetchAppConfigurationWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)userInfoManager:(id)a0 didSynchronizeUserIdentifier:(id)a1;
- (void)completeOnQueue:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)setupRemoteSettings;
- (BOOL)clearConfigCacheOnLaunchIfRequested;
- (void)notifyObserversOfAppConfigRefresh;
- (void)fetchAppConfigurationIfExpired;
- (void)forceFetchAppConfiguration;

@end
