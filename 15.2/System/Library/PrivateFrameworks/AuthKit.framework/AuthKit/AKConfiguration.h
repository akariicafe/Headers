@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AKConfiguration : NSObject {
    NSMutableDictionary *_cachedSettings;
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_settingsQueue;
}

@property (nonatomic) long long shouldDisablePETs;
@property (nonatomic) long long shouldFakeAuthSuccess;
@property (nonatomic) long long shouldDisablePiggybacking;
@property (nonatomic) long long shouldSuppressHSA2Suggestions;
@property (nonatomic) long long shouldAddHSA2CreateHeader;
@property (nonatomic) long long shouldAllowPhoneNumberAccounts;
@property (nonatomic) long long shouldAllowExperimentalMode;
@property (nonatomic) long long shouldHideInternalBuildHeader;
@property (nonatomic) long long shouldAllowDemoMode;
@property (nonatomic) long long shouldAllowTestApplication;
@property (nonatomic) long long shouldEnableTestAccountMode;
@property (nonatomic) long long shouldSuppressModalSheetsInMacBuddy;
@property (nonatomic) long long shouldAlwaysShowWelcome;
@property (nonatomic) long long shouldAutocycleAppsInTiburon;
@property (nonatomic) long long shouldAutocycleAppsInWebTakeover;
@property (nonatomic) unsigned long long lastKnownIDMSEnvironment;
@property (nonatomic) long long requestedCloudPartition;
@property (nonatomic) long long shouldBypassCustodianDeviceCheck;
@property (nonatomic) long long shouldEnableBeneficiaryLiveOn;
@property (readonly, nonatomic) unsigned long long internalFeaturesMaskValue;

+ (id)sharedConfiguration;

- (BOOL)_validCloudPartition:(long long)a0;
- (id)configurationValueForKey:(id)a0;
- (void)setConfigurationValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
