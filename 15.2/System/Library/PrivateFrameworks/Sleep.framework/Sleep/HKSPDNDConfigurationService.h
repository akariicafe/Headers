@class NSString, DNDModeConfigurationService, DNDGlobalConfigurationService, HKSPSleepFocusConfiguration;
@protocol NAScheduler, HKSPSleepFocusModeBridgeDelegate;

@interface HKSPDNDConfigurationService : NSObject <DNDModeConfigurationServiceListener, DNDGlobalConfigurationServiceListener, HKSPDiagnosticsProvider, HKSPSleepFocusModeBridge> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
    HKSPSleepFocusConfiguration *_cachedSleepFocusConfiguration;
    id<NAScheduler> _dndScheduler;
}

@property (readonly, nonatomic) DNDModeConfigurationService *modeConfigService;
@property (readonly, nonatomic) DNDGlobalConfigurationService *globalConfigService;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HKSPSleepFocusModeBridgeDelegate> delegate;

+ (id)sleepFocusConfigurationServiceWithOptions:(unsigned long long)a0;
+ (BOOL)_readGlobalConfigForOptions:(unsigned long long)a0;
+ (id)sleepFocusConfigurationService;

- (id)diagnosticDescription;
- (id)diagnosticInfo;
- (void)_notifyDelegate;
- (void).cxx_destruct;
- (void)modeConfigurationService:(id)a0 didReceiveAvailableModesUpdate:(id)a1;
- (void)invalidate;
- (void)_withLock:(id /* block */)a0;
- (id)sleepFocusConfiguration:(id *)a0;
- (id)initWithModeConfigService:(id)a0 globalConfigService:(id)a1 options:(unsigned long long)a2;
- (void)_loadCachedSleepFocusConfig;
- (BOOL)_cacheSleepFocusConfig;
- (void)_checkForUpdatedSleepFocusConfig;
- (id)_sleepFocusConfiguration:(id *)a0 checkCache:(BOOL)a1;
- (void)_updateCachedSleepFocusConfig:(id)a0;
- (void)_updateCacheAndNotifyWithBlock:(id /* block */)a0;
- (BOOL)_lock_updateCachedSleepFocusConfig:(id)a0 updatedSleepFocusConfig:(id)a1;
- (void)_startListeningToModeConfigService;
- (void)_startListeningToGlobalConfigService;
- (void)_stopListeningToModeConfigService;
- (void)_stopListeningToGlobalConfigService;
- (BOOL)_uncachedHasSleepFocusMode:(id *)a0;
- (BOOL)_uncachedMirrorsSleepFocusMode:(id *)a0;
- (BOOL)_readGlobalConfig;
- (void)updateCachedHasSleepFocusMode:(BOOL)a0;
- (void)updateCachedMirrorsSleepFocusMode:(BOOL)a0;
- (void)globalConfigurationService:(id)a0 didReceiveUpdatedPairSyncState:(unsigned long long)a1;
- (BOOL)hasSleepFocusMode:(id *)a0;
- (id)initWithModeConfigService:(id)a0 globalConfigService:(id)a1;

@end
