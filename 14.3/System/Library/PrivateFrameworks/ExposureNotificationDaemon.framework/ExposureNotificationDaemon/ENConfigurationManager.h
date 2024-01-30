@class ENCloudServerChannel, NSMutableDictionary, ENConfigurationStore, ENActiveEntity, ENXPCTimer, NSObject, ENRegionMonitor;
@protocol OS_dispatch_queue, ENConfigurationManagerDelegate;

@interface ENConfigurationManager : NSObject

@property (nonatomic) BOOL mobileCountryCodeOverriden;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) ENXPCTimer *serverConfigurationFetchTimer;
@property (retain, nonatomic) ENXPCTimer *gracePeriodConfigurationFetchTimer;
@property (retain, nonatomic) ENConfigurationStore *configurationStore;
@property (retain, nonatomic) ENCloudServerChannel *cloudServerChannel;
@property (retain, nonatomic) NSMutableDictionary *regionRampModeOverride;
@property (nonatomic) BOOL prefTestHeaderEnabled;
@property (nonatomic) BOOL prefRampTrialPeriodProfile;
@property (weak, nonatomic) NSObject<ENConfigurationManagerDelegate> *delegate;
@property (copy, nonatomic) ENActiveEntity *activeEntity;
@property (retain, nonatomic) ENRegionMonitor *regionMonitor;

+ (id)staticRegionForBundleID:(id)a0;
+ (unsigned long long)rampModeFromServerResponse:(id)a0;
+ (id)iCloudServerEndpoint;
+ (BOOL)verifyAppleServerResponse:(id)a0 signatureHeader:(id)a1;
+ (void)_printServerConfiguration:(id)a0;
+ (BOOL)isRampModeEnabledFromServerResponse:(id)a0;
+ (double)randomSelectPercentagePerDayFromServerResponse:(id)a0;
+ (BOOL)serverResponse:(id)a0 isOnRampMode:(unsigned long long)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_activate;
- (void)activate;
- (BOOL)isInGracePeriodTransition;
- (void)prefsChanged;
- (void)resetConfigurationCache;
- (void)fetchServerConfigurationsForRegion:(id)a0 userInitiated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (id)initWithDelegate:(id)a0 activeEntity:(id)a1;
- (void)overrideRampModeForRegion:(id)a0 rampMode:(unsigned long long)a1;
- (void)regionMonitor:(id)a0 regionDidChange:(id)a1;
- (void)regionMonitor:(id)a0 authorizationStateDidChange:(unsigned long long)a1;
- (void)_scheduleRegionConfigurationRefresh;
- (void)_serverFetchRegionConfiguration:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (unsigned long long)readCachedRampModeForRegion:(id)a0;
- (void)_reportErrorMetricForHTTPStatus:(long long)a0;
- (void)setupGracePeriodFetchTimerWithDelay:(double)a0;
- (void)_fetchServerConfigurationsForRegion:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_processServerConfiguration:(id)a0 forceUpdate:(BOOL)a1;
- (void)resetConfigurationManager;
- (void)stopGracePeriodTimer;
- (void)updateRegionMonitorModeForCurrentRegion;
- (void)_saveAndRemoveStaleConfigurations:(id)a0 region:(id)a1 error:(id)a2;
- (BOOL)updateRampModeForRegion:(id)a0 rampMode:(unsigned long long)a1;
- (void)refreshServerConfigurationsUponProfileChange;
- (void)serverFetchRegionConfiguration:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;

@end
