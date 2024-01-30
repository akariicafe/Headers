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

+ (id)sharedInstance;
+ (id)userIdentifier;
+ (void)setUserIdentifier:(id)a0;

- (void)completeOnQueue:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (id)containerIdentifier;
- (void)fetchAppConfigurationIfExpired;
- (void)setUseFallback:(BOOL)a0;
- (void)updateAssetURLHostIfNeededWithComponents:(id)a0 containerIdentifier:(id)a1;
- (id)permanentURLForRecordID:(id)a0 containerIdentifier:(id)a1;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)userInfoManager:(id)a0 didSynchronizeUserIdentifier:(id)a1;
- (BOOL)clearConfigCacheOnLaunchIfRequested;
- (void)notifyObserversOfAppConfigRefresh;
- (void)forceFetchAppConfiguration;
- (char)containerIDForContainerIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldReroutePermanentURLsForContainerIdentifier:(id)a0;
- (unsigned long long)debugEnvironmentFromOverride:(id)a0;
- (void)setupRemoteSettings;
- (id)urlSafeBase64EncodedStringWithData:(id)a0 options:(unsigned long long)a1;
- (id)debugOverrides;
- (void)fetchAppConfigurationWithCompletionQueue:(id)a0 completion:(id /* block */)a1;

@end
