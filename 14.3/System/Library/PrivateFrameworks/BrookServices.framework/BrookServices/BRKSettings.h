@class NSString, NPSManager, NPSDomainAccessor, NSDate, NSSet, NRDevice;

@interface BRKSettings : NSObject <MCProfileConnectionObserver> {
    NPSManager *_npsManager;
    BOOL _shouldObserveDefaultChanges;
    int _notifyToken;
    BOOL _currentMCDataCollectionValue;
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
@property (nonatomic) double brookCoolDownInterval;
@property (retain, nonatomic) NSDate *lastDataCollectionUploadDate;
@property (nonatomic) unsigned long long overrideDataCollectionAuthorization;
@property (nonatomic, getter=isDataCollectionUploadDisabled) BOOL dataCollectionUploadDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)settingsForActiveDevice;
+ (id)remindersSettingFooter;
+ (id)remindersFooterExplanationSignificantLocationsUnavailable;
+ (id)remindersFooterExplanationNoLocationOrMeCard;
+ (id)remindersFooterLinkTitleContacts;
+ (id)remindersFooterExplanationNoLocation;
+ (id)remindersFooterExplanationInavlidLocationAuth;
+ (id)remindersFooterLinkTitleLocation;
+ (id)remindersFooterExplanationFormat;
+ (id)settingsForDevice:(id)a0;
+ (id)_stringForConfigurationWithKey:(id)a0;
+ (id)settingsTitle;
+ (id)timerSettingTitle;
+ (id)timerSettingFooter;
+ (id)remindersSettingTitle;

- (void).cxx_destruct;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;
- (void)_setValue:(id)a0 forKey:(id)a1;
- (id)_valueForKey:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_handleNPSNotification;
- (id)_initWithDevice:(id)a0;
- (void)_BRKRegisterForBRKSettingsChange;
- (BOOL)_isManagedConfigurationDataCollectionEnabled;
- (void)_observeDefaultChanges:(BOOL)a0;
- (void)_BRKCancelForBRKSettingsChange;

@end
