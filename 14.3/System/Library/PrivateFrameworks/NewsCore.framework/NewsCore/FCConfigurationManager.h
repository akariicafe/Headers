@class NSData, NSString, NSArray, FCKeyValueStore, NSHashTable, FCAsyncSerialQueue, NSDictionary, FCContextConfiguration, FCNewsAppConfig, RCConfigurationManager, NSObject;
@protocol FCFeldsparIDProvider, FCJSONEncodableObjectProviding, FCCoreConfiguration, FCNewsAppConfiguration, OS_dispatch_queue;

@interface FCConfigurationManager : NSObject <FCFeldsparIDProviderObserving, FCNewsAppConfigurationManager, FCCoreConfigurationManager, FCMagazinesConfigurationManager>

@property (readonly, nonatomic) RCConfigurationManager *remoteConfigurationManager;
@property (readonly, nonatomic) FCContextConfiguration *contextConfiguration;
@property (readonly, nonatomic) id<FCFeldsparIDProvider> feldsparIDProvider;
@property (readonly, copy, nonatomic) NSString *appShortVersionString;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *appConfigFetchQueue;
@property (readonly, nonatomic) FCAsyncSerialQueue *remoteConfigManagerSerialQueue;
@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (copy, nonatomic) FCNewsAppConfig *currentAppConfiguration;
@property (copy, nonatomic) NSArray *treatmentIDs;
@property (copy, nonatomic) NSArray *segmentSetIDs;
@property (nonatomic) BOOL shouldIgnoreCache;
@property (retain, nonatomic) NSDictionary *cachedWidgetConfigurationDict;
@property (copy, nonatomic) NSData *currentMagazinesConfiguration;
@property (retain, nonatomic) NSHashTable *appConfigObservers;
@property (retain, nonatomic) NSHashTable *coreConfigObservers;
@property (nonatomic) BOOL attemptedAppConfigFetch;
@property (nonatomic, getter=isRunningUnitTests) BOOL runningUnitTests;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<FCNewsAppConfiguration> appConfiguration;
@property (readonly, nonatomic) id<FCNewsAppConfiguration> possiblyUnfetchedAppConfiguration;
@property (readonly, copy, nonatomic) NSString *feldsparID;
@property (readonly, nonatomic) id<FCNewsAppConfiguration> fetchedAppConfiguration;
@property (readonly, nonatomic) id<FCNewsAppConfiguration, FCJSONEncodableObjectProviding> jsonEncodableAppConfiguration;
@property (readonly, nonatomic) id<FCCoreConfiguration> configuration;
@property (readonly, nonatomic) NSData *magazinesConfigurationData;

+ (id)overrideAppConfigID;
+ (id)internalOverrideSegmentSetIDs;
+ (id)internalOverrideAdditionalSegmentSetIDs;

- (id)initForTesting;
- (id)_deviceInfo;
- (void)removeAppConfigObserver:(id)a0;
- (BOOL)_paywallConfigDidChangeOldConfig:(id)a0 newConfig:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (id)_storefrontID;
- (void)fetchAppWidgetConfigurationWithCompletion:(id /* block */)a0;
- (void)addAppConfigObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)_permanentURLForRequestKey:(id)a0 storefrontID:(id)a1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (id)_requestInfoForRequestKey:(id)a0 storefrontID:(id)a1 additionalChangeTags:(id)a2;
- (void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)_fetchRemoteMagazinesConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (id)_changeTagsInWidgetConfigurationDict:(id)a0;
- (id)_mergeRecords:(id)a0 withCachedRecords:(id)a1;
- (id)initWithContextConfiguration:(id)a0 contentHostDirectoryFileURL:(id)a1 feldsparIDProvider:(id)a2 appShortVersionString:(id)a3;
- (id)initWithContextConfiguration:(id)a0 contentHostDirectoryFileURL:(id)a1 feldsparIDProvider:(id)a2;
- (void)feldsparIDProviderDidChangeFeldsparID:(id)a0;
- (void)_configurationDidChangeSignificantConfigChange:(BOOL)a0 paywallConfigDidChange:(BOOL)a1;
- (void)_refreshAppConfigurationWithConfigurationSettings:(id)a0 force:(BOOL)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
- (BOOL)_checkIfShouldIgnoreCache;
- (id)_recordIDForRequestKey:(id)a0 storefrontID:(id)a1;
- (id)_configurationSettingsWithRequestInfos:(id)a0 feldsparID:(id)a1 storefrontID:(id)a2 contextConfiguration:(id)a3 useBackgroundRefreshRate:(BOOL)a4;
- (void)_fetchAppConfigurationIfNeededWithCompletionQueue:(id)a0 forceRefresh:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)_configurationSourceForSourceName:(id)a0;
- (void)_loadConfigurationFromStore:(id)a0;
- (id)_mergeCachedDataWithWidgetConfigurationData:(id)a0;
- (id)_responseKeyForRequestKey:(id)a0;
- (void)_fetchRemoteAppWidgetConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_remoteConfigurationEnvironmentForContextIdentifier:(long long)a0;
- (id)_changeTagsInRecords:(id)a0;
- (void)fetchConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)a0 refreshCompletion:(id /* block */)a1;

@end
