@class TATrackingAvoidanceServiceSettings, TAFilterLeavingLOISettings, TAFilterSingleVisitSettings, TAVisitStateSettings, TADeviceRecordSettings, TAFilterGeneralSettings, TAScanRequestSettings, TAPersistenceManagerSettings, TAEventBufferSettings, TAFilterVisitsSettings, TAAnalyticsManagerSettings;

@interface TASettings : NSObject

@property (nonatomic) unsigned long long settingsVersion;
@property (nonatomic) BOOL trackingAvoidanceEnabled;
@property (nonatomic) BOOL peopleDensityEnabled;
@property (nonatomic) unsigned long long maximumDailyScans;
@property (nonatomic) unsigned long long notificationThrottleHours;
@property (nonatomic) unsigned long long notificationThrottleMaxPerPeriod;
@property (nonatomic) double persistenceInterval;
@property (nonatomic) BOOL aisFetchEnabled;
@property (retain, nonatomic) TAFilterGeneralSettings *filterGeneralSettings;
@property (retain, nonatomic) TAFilterVisitsSettings *filterVisitsSettings;
@property (retain, nonatomic) TAFilterSingleVisitSettings *filterSingleVisitSettings;
@property (retain, nonatomic) TAFilterLeavingLOISettings *filterLeavingLOISettings;
@property (retain, nonatomic) TAEventBufferSettings *eventBufferSettings;
@property (retain, nonatomic) TAVisitStateSettings *visitStateSettings;
@property (retain, nonatomic) TADeviceRecordSettings *deviceRecordSettings;
@property (retain, nonatomic) TAScanRequestSettings *scanRequestSettings;
@property (retain, nonatomic) TATrackingAvoidanceServiceSettings *serviceSettings;
@property (retain, nonatomic) TAPersistenceManagerSettings *persistenceManagerSettings;
@property (retain, nonatomic) TAAnalyticsManagerSettings *analyticsManagerSettings;

+ (id)getArraySettingsKeys;
+ (id)getIntegerSettingsKeys;
+ (id)getBooleanSettingsKeys;
+ (id)convertEnabledLoiTypesValueContentToNSNumberType:(id)a0;
+ (id)getStringSettingsKeys;
+ (id)getDoubleSettingsKeys;
+ (id)getUnsignedIntegerSettingsKeys;

- (void)setSettings:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
