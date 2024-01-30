@class NSDate, NSString, CLLocationManager, NPSManager, NSSet, NSObject, NPSDomainAccessor, NRDevice;
@protocol OS_dispatch_queue;

@interface BRKSettings : NSObject <MCProfileConnectionObserver, CLLocationManagerDelegate> {
    NPSManager *_npsManager;
    BOOL _shouldObserveDefaultChanges;
    int _notifyToken;
    BOOL _currentIsManagedConfigurationImproveHandwashingEnabled;
    NPSDomainAccessor *_domainAccessor;
    NSSet *_observedKeys;
    NSSet *_dataCollectionKeys;
    NRDevice *_device;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=areRemindersEnabled) BOOL remindersEnabled;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, nonatomic, getter=isBrookTentpoleEnabled) BOOL brookTentpoleEnabled;
@property (nonatomic, getter=isDataCollectionEnabled) BOOL dataCollectionEnabled;
@property (readonly, nonatomic, getter=isDataCollectionOnboardingComplete) BOOL dataCollectionOnboardingComplete;
@property (nonatomic, getter=isOnboardingComplete) BOOL onboardingComplete;
@property (readonly, nonatomic, getter=isStealthUIEnabled) BOOL stealthUIEnabled;
@property (readonly, nonatomic, getter=isCachedLocationAuthFlowEnabled) BOOL locationAuthFlowEnabled;
@property (nonatomic) double brookCoolDownInterval;
@property (retain, nonatomic) NSDate *lastDataCollectionUploadDate;
@property (nonatomic) unsigned long long overrideDataCollectionAuthorization;
@property (nonatomic, getter=isDataCollectionUploadDisabled) BOOL dataCollectionUploadDisabled;
@property (nonatomic, getter=isHealthAndActivityEnabled) BOOL healthAndActivityEnabled;
@property (retain, nonatomic) CLLocationManager *locationManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *locationManagerQueue;
@property (nonatomic) BOOL locationManagerAuthorizationStatusHasChangedOnce;
@property (nonatomic) int locationManagerLastAuthorizationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsForActiveDevice;
+ (id)_stringForConfigurationWithKey:(id)a0;
+ (id)remindersFooterExplanationContactStoreNotAuthorized;
+ (id)remindersFooterExplanationFormat;
+ (id)remindersFooterExplanationInavlidLocationAuth;
+ (id)remindersFooterExplanationNoLocation;
+ (id)remindersFooterExplanationNoLocationOrMeCard;
+ (id)remindersFooterExplanationSignificantLocationsUnavailable;
+ (id)remindersFooterLinkTitleContacts;
+ (id)remindersFooterLinkTitleLocation;
+ (id)remindersSettingFooter;
+ (id)remindersSettingTitle;
+ (id)settingsForDevice:(id)a0;
+ (id)settingsTitle;
+ (id)timerSettingFooter;
+ (id)timerSettingTitle;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (id)_valueForKey:(id)a0;
- (void)dealloc;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)_initWithDevice:(id)a0;
- (id)tinkerDataCollectionCredentials;
- (void)_BRKCancelForBRKSettingsChange;
- (void)_BRKRegisterForBRKSettingsChange;
- (void)_handleNPSNotification;
- (BOOL)_isManagedConfigurationImproveHandwashingEnabled;
- (BOOL)_isManagedConfigurationImproveHealthAndActivityEnabled;
- (BOOL)_isTinkerDataCollectionEnabled;
- (void)_observeDefaultChanges:(BOOL)a0;
- (void)_setupLocationManager;
- (void)isLocationAuthFlowEnabledWithCompletionHandler:(id /* block */)a0;

@end
