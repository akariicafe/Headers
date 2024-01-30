@class CLLocationManager, NSString, NPSManager, NPSDomainAccessor, NSDate, NSSet, NRDevice;

@interface BRKSettings : NSObject <MCProfileConnectionObserver, CLLocationManagerDelegate> {
    NPSManager *_npsManager;
    BOOL _shouldObserveDefaultChanges;
    int _notifyToken;
    BOOL _currentIsManagedConfigurationImproveHandwashingEnabled;
    NPSDomainAccessor *_domainAccessor;
    NSSet *_observedKeys;
    NSSet *_dataCollectionKeys;
    NRDevice *_device;
    CLLocationManager *_locationManager;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=areRemindersEnabled) BOOL remindersEnabled;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic, getter=isBrookTentpoleEnabled) BOOL brookTentpoleEnabled;
@property (nonatomic, getter=isDataCollectionEnabled) BOOL dataCollectionEnabled;
@property (readonly, nonatomic, getter=isDataCollectionOnboardingComplete) BOOL dataCollectionOnboardingComplete;
@property (nonatomic, getter=isOnboardingComplete) BOOL onboardingComplete;
@property (readonly, nonatomic, getter=isStealthUIEnabled) BOOL stealthUIEnabled;
@property (readonly, nonatomic, getter=isLocationAuthFlowEnabled) BOOL locationAuthFlowEnabled;
@property (nonatomic) double brookCoolDownInterval;
@property (retain, nonatomic) NSDate *lastDataCollectionUploadDate;
@property (nonatomic) unsigned long long overrideDataCollectionAuthorization;
@property (nonatomic, getter=isDataCollectionUploadDisabled) BOOL dataCollectionUploadDisabled;
@property (nonatomic, getter=isHealthAndActivityEnabled) BOOL healthAndActivityEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remindersSettingTitle;
+ (id)remindersFooterExplanationNoLocation;
+ (id)remindersSettingFooter;
+ (id)_stringForConfigurationWithKey:(id)a0;
+ (id)remindersFooterExplanationFormat;
+ (id)remindersFooterExplanationSignificantLocationsUnavailable;
+ (id)remindersFooterLinkTitleLocation;
+ (id)settingsTitle;
+ (id)remindersFooterExplanationContactStoreNotAuthorized;
+ (id)remindersFooterLinkTitleContacts;
+ (id)timerSettingFooter;
+ (id)timerSettingTitle;
+ (id)remindersFooterExplanationNoLocationOrMeCard;
+ (id)settingsForDevice:(id)a0;
+ (id)settingsForActiveDevice;
+ (id)remindersFooterExplanationInavlidLocationAuth;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (id)_valueForKey:(id)a0;
- (void)_setValue:(id)a0 forKey:(id)a1;
- (id)_initWithDevice:(id)a0;
- (id)tinkerDataCollectionCredentials;
- (void)_BRKCancelForBRKSettingsChange;
- (void)_BRKRegisterForBRKSettingsChange;
- (void).cxx_destruct;
- (BOOL)_isManagedConfigurationImproveHealthAndActivityEnabled;
- (BOOL)_isTinkerDataCollectionEnabled;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (BOOL)_isManagedConfigurationImproveHandwashingEnabled;
- (void)_handleNPSNotification;
- (void)_observeDefaultChanges:(BOOL)a0;

@end
