@class NSData, NSString, NSArray, FCKeyValueStore, NSHashTable, FCAsyncSerialQueue, NSDictionary, FCContextConfiguration, RCConfigurationManager, NSObject, FCNewsAppConfig;
@protocol FCCoreConfiguration, FCJSONEncodableObjectProviding, FCFeldsparIDProvider, FCNewsAppConfiguration, OS_dispatch_queue;

@interface FCConfigurationManager : NSObject <FCFeldsparIDProviderObserving, FCNewsAppConfigurationManager, FCCoreConfigurationManager, FCMagazinesConfigurationManager, FCTodayFeedConfigurationManager, FCAudioFeedConfigManager> {
    BOOL _shouldIgnoreCache;
    BOOL _attemptedAppConfigFetch;
    BOOL _runningUnitTests;
    RCConfigurationManager *_remoteConfigurationManager;
    FCContextConfiguration *_contextConfiguration;
    id<FCFeldsparIDProvider> _feldsparIDProvider;
    NSString *_appShortVersionString;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_appConfigFetchQueue;
    FCAsyncSerialQueue *_remoteConfigManagerSerialQueue;
    FCKeyValueStore *_localStore;
    FCNewsAppConfig *_currentAppConfiguration;
    NSDictionary *_cachedWidgetConfigurationDict;
    NSData *_currentMagazinesConfiguration;
    NSData *_currentTodayFeedConfiguration;
    NSData *_currentAudioFeedConfiguration;
    NSHashTable *_appConfigObservers;
    NSHashTable *_coreConfigObservers;
}

@property (copy, nonatomic) NSArray *treatmentIDs;
@property (copy, nonatomic) NSArray *segmentSetIDs;
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
@property (readonly, nonatomic) NSData *todayFeedConfigurationData;
@property (readonly, nonatomic) NSData *audioFeedConfigData;

- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(id)a0 refreshCompletion:(id /* block */)a1;
- (id)initForTesting;
- (void)fetchConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)addObserver:(id)a0;
- (id)initWithContextConfiguration:(id)a0 contentHostDirectoryFileURL:(id)a1 feldsparIDProvider:(id)a2 appShortVersionString:(id)a3;
- (void)removeObserver:(id)a0;
- (void)addAppConfigObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void)fetchAppWidgetConfigurationWithAdditionalFields:(id)a0 completion:(id /* block */)a1;
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(id)a0 completion:(id /* block */)a1;
- (void)removeAppConfigObserver:(id)a0;
- (id)initWithContextConfiguration:(id)a0 contentHostDirectoryFileURL:(id)a1 feldsparIDProvider:(id)a2;
- (void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(id)a0 formatVersion:(id)a1 completion:(id /* block */)a2;
- (void)feldsparIDProviderDidChangeFeldsparID:(id)a0;
- (void)fetchAppConfigurationIfNeededWithCompletion:(id /* block */)a0;
- (void)fetchAudioFeedConfigIfNeededWithCompletionQueue:(id)a0 formatVersion:(id)a1 completion:(id /* block */)a2;
- (void)fetchTodayFeedConfigurationIfNeededWithCompletionQueue:(id)a0 feedType:(unsigned long long)a1 formatVersion:(id)a2 completion:(id /* block */)a3;

@end
