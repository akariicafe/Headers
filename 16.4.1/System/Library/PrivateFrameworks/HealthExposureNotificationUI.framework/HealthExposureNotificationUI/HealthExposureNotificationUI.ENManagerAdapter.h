@class _TtC28HealthExposureNotificationUI16ENManagerAdapter, NSSet;

@interface HealthExposureNotificationUI.ENManagerAdapter : NSObject <HealthExposureNotificationUI.ExposureNotifying> {
    void /* unknown type, empty encoding */ activationGroup;
    void /* unknown type, empty encoding */ statusObservation;
    void /* unknown type, empty encoding */ statusChangeObservers;
}

@property (class, nonatomic, retain) _TtC28HealthExposureNotificationUI16ENManagerAdapter *defaultAdapter;

@property (nonatomic) void /* unknown type, empty encoding */ exposureNotificationStatus;
@property (nonatomic) void /* unknown type, empty encoding */ isExposureLoggingDataPresent;
@property (nonatomic) void /* unknown type, empty encoding */ areAvailabilityAlertsEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ isAvailabilityAlertsSwitchEnabled;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ manager;
@property (nonatomic, copy) NSSet *statusChangeObservers;

- (void)dealloc;
- (void)setActiveRegion:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)allRegionConfigurations:(id /* block */)a0;
- (void)didEnterLegalConsentPageForRegion:(id)a0;
- (void)fetchAgencyModelForRegionCode:(id)a0 reason:(unsigned int)a1 completion:(id /* block */)a2;
- (void)fetchAllEntities:(id /* block */)a0;
- (void)fetchSubdivisionsForRegion:(id)a0 completion:(id /* block */)a1;
- (void)getAgencyModelForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)getAgencyModelForRegionCode:(id)a0 completion:(id /* block */)a1;
- (void)getLastVisitedRegionWithCompletion:(id /* block */)a0;
- (void)isKeyReleasePreAuthorizedForRegion:(id)a0 completion:(id /* block */)a1;
- (void)isTravelStatusEnabledForRegion:(id)a0 completion:(id /* block */)a1;
- (void)latestExposureNotification:(id /* block */)a0;
- (void)notifyChangeObserversForChangeFrom:(long long)a0 to:(long long)a1;
- (void)onboardingDidStartForRegion:(id)a0 source:(long long)a1;
- (void)refreshStatusWithCompletion:(id /* block */)a0;
- (void)resetAllDataAndDisableExposureNotifications:(id /* block */)a0;
- (void)setActivePhaseOneAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setAvailabilityAlertsEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)setExposureNotificationEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)setPreAuthorizeDiagnosisKeysEnabled:(BOOL)a0 forRegion:(id)a1 completion:(id /* block */)a2;
- (void)setShareAnalyticsEnabled:(BOOL)a0 region:(id)a1 version:(id)a2 completion:(id /* block */)a3;
- (void)setTravelStatusEnabled:(BOOL)a0 region:(id)a1 completion:(id /* block */)a2;
- (void)setUserConsent:(long long)a0 region:(id)a1 text:(id)a2 version:(id)a3 completion:(id /* block */)a4;
- (void)setWeeklySummaryEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)tccContainsRecordForBundleIdentifier:(id)a0;

@end
