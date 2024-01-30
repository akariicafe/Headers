@class TATrackingAvoidanceServiceSettings, TAFilterSingleVisitSettings, TAVisitStateSettings, TAScanRequestSettings, TAFilterGeneralSettings, TADeviceRecordSettings, TAPersistenceManagerSettings, TAEventBufferSettings, TAFilterVisitsSettings, TAAnalyticsManagerSettings;

@interface TASettings : NSObject

@property (nonatomic) BOOL trackingAvoidanceEnabled;
@property (nonatomic) BOOL peopleDensityEnabled;
@property (nonatomic) unsigned long long maximumDailyScans;
@property (nonatomic) unsigned long long notificationThrottleHours;
@property (nonatomic) unsigned long long notificationThrottleMaxPerPeriod;
@property (nonatomic) double persistenceInterval;
@property (retain, nonatomic) TAFilterGeneralSettings *filterGeneralSettings;
@property (retain, nonatomic) TAFilterVisitsSettings *filterVisitsSettings;
@property (retain, nonatomic) TAFilterSingleVisitSettings *filterSingleVisitSettings;
@property (retain, nonatomic) TAEventBufferSettings *eventBufferSettings;
@property (retain, nonatomic) TAVisitStateSettings *visitStateSettings;
@property (retain, nonatomic) TADeviceRecordSettings *deviceRecordSettings;
@property (retain, nonatomic) TAScanRequestSettings *scanRequestSettings;
@property (retain, nonatomic) TATrackingAvoidanceServiceSettings *serviceSettings;
@property (retain, nonatomic) TAPersistenceManagerSettings *persistenceManagerSettings;
@property (retain, nonatomic) TAAnalyticsManagerSettings *analyticsManagerSettings;

+ (id)getUnsignedIntegerSettingsKeys;
+ (id)getStringSettingsKeys;
+ (id)getArraySettingsKeys;
+ (id)convertEnabledLoiTypesValueContentToNSNumberType:(id)a0;
+ (id)getDoubleSettingsKeys;
+ (id)getBooleanSettingsKeys;
+ (id)getIntegerSettingsKeys;

- (id)initWithSettings:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)setSettings:(id)a0;

@end
