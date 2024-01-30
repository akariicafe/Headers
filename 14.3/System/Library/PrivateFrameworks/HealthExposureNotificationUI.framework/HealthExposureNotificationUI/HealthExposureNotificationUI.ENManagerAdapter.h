@class _TtC28HealthExposureNotificationUI16ENManagerAdapter;

@interface HealthExposureNotificationUI.ENManagerAdapter : NSObject <HealthExposureNotificationUI.ExposureNotifying> {
    void /* unknown type, empty encoding */ statusChangeHandler;
    void /* unknown type, empty encoding */ activationGroup;
    void /* unknown type, empty encoding */ statusObservation;
}

@property (class, nonatomic, retain) _TtC28HealthExposureNotificationUI16ENManagerAdapter *defaultAdapter;

@property (nonatomic) void /* unknown type, empty encoding */ exposureNotificationStatus;
@property (nonatomic) void /* unknown type, empty encoding */ isExposureLoggingDataPresent;
@property (nonatomic) void /* unknown type, empty encoding */ areAvailabilityAlertsEnabled;
@property (nonatomic) void /* unknown type, empty encoding */ isAvailabilityAlertsSwitchEnabled;
@property (nonatomic, copy) id /* block */ statusChangeHandler;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ manager;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setActiveRegion:(id)a0 completion:(id /* block */)a1;
- (void)refreshStatusWithCompletion:(id /* block */)a0;
- (void)setExposureNotificationEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)latestExposureNotification:(id /* block */)a0;
- (void)allRegionConfigurations:(id /* block */)a0;
- (void)setShareAnalyticsEnabled:(BOOL)a0 region:(id)a1 version:(id)a2 completion:(id /* block */)a3;
- (void)isTravelStatusEnabledForRegion:(id)a0 completion:(id /* block */)a1;
- (void)setTravelStatusEnabled:(BOOL)a0 region:(id)a1 completion:(id /* block */)a2;
- (void)isPreReleaseAuthorizedForRegion:(id)a0 completion:(id /* block */)a1;
- (void)setPreReleaseAuthorized:(BOOL)a0 region:(id)a1 completion:(id /* block */)a2;
- (void)setAvailabilityAlertsEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (void)setUserConsent:(long long)a0 region:(id)a1 text:(id)a2 version:(id)a3 completion:(id /* block */)a4;
- (void)onboardingDidStartForRegion:(id)a0 source:(long long)a1;
- (void)fetchSubdivisionsForRegion:(id)a0 completion:(id /* block */)a1;
- (void)setActivePhaseOneAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fetchAgencyModelForRegionCode:(id)a0 reason:(unsigned int)a1 completion:(id /* block */)a2;
- (void)fetchAllEntities:(id /* block */)a0;
- (void)getAgencyModelForBundleID:(id)a0 completion:(id /* block */)a1;
- (void)getAgencyModelForRegionCode:(id)a0 completion:(id /* block */)a1;
- (void)resetAllDataAndDisableExposureNotifications:(id /* block */)a0;
- (void)setWeeklySummaryEnabled:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)tccContainsRecordForBundleIdentifier:(id)a0;

@end
