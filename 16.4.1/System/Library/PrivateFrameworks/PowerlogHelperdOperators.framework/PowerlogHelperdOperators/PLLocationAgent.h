@class NSDate, NSMutableDictionary, PLEntryNotificationOperatorComposition, PLCFNotificationOperatorComposition, NSMutableSet, PLXPCListenerOperatorComposition, NSNumber, PLNSNotificationOperatorComposition;

@interface PLLocationAgent : PLAgent

@property (retain) PLCFNotificationOperatorComposition *techStatusChangedNotification;
@property (retain) NSDate *lastTechStatusNotificationDate;
@property (retain) NSNumber *techStatusLimiterIsActive;
@property (retain) PLXPCListenerOperatorComposition *logLevelNotification;
@property (retain) PLXPCListenerOperatorComposition *statusBarNotification;
@property (retain) PLXPCListenerOperatorComposition *clientStatusNotification;
@property (retain) PLXPCListenerOperatorComposition *mapsBusynessStateListener;
@property (retain) PLXPCListenerOperatorComposition *separationAlertListener;
@property (retain) PLXPCListenerOperatorComposition *locationGPSListener;
@property (retain) PLEntryNotificationOperatorComposition *sbcLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *thermalMonitorListener;
@property (retain) PLXPCListenerOperatorComposition *wifiLocationScanRequestersListener;
@property (retain) NSMutableDictionary *localCache;
@property (retain) NSMutableDictionary *clientStatusTypeStrings;
@property (retain) NSMutableSet *processes;
@property (retain) NSMutableDictionary *bundleIDToWeightUsingGPSCache;
@property (retain) NSMutableDictionary *bundleIDToWeightUsingWiFiCache;
@property (retain) NSMutableDictionary *bundleIDToWeightUsingLocationCache;
@property (retain) NSMutableDictionary *activeClients;
@property (retain) NSMutableSet *activeBackgroundLocationClients;
@property (retain) NSDate *lastResyncActiveClientsDate;
@property double gps_segment_power;
@property (retain) NSDate *gps_segment_lastWrittenDate;
@property double gps_segment_lastWrittenTimestamp;
@property (retain) NSDate *gps_segment_date;
@property double gps_segment_timestamp;

+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)defaults;
+ (void)load;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitionClientStatus;
+ (id)entryEventForwardDefinitionLogLevel;
+ (id)entryEventForwardDefinitionStatusBar;
+ (id)entryEventForwardDefinitionTechStatus;
+ (id)entryEventIntervalDefinitionMapsBusyness;
+ (id)entryEventIntervalDefinitionSeparationAlert;
+ (id)entryEventNoneDefinitionClientStatusDebug;
+ (id)entryEventPointDefinitionClientStatus;
+ (id)entryEventPointDefinitionGeoFenceHandoff;
+ (id)entryEventPointDefinitionWifiLocationScanRequesters;

- (void)initOperatorDependancies;
- (void)writeModeledPower;
- (void)log;
- (id)init;
- (void).cxx_destruct;
- (id)humanReadableNameForTechnology:(id)a0;
- (void)closeOpenEntryForClient:(id)a0 withOpenEntry:(id)a1 withTimeStopped:(id)a2;
- (id)getOpenEntryForClientSettings:(id)a0 withTimeStarted:(id)a1 withClient:(id)a2 withType:(id)a3 withEntryKey:(id)a4;
- (id)lastEntryWithClient:(id)a0 withType:(id)a1 withBundleID:(id)a2 withEntryKey:(id)a3;
- (void)logEventForwardClientStatuswithPayload:(id)a0;
- (void)logEventForwardTechStatus;
- (void)logEventForwardTechStatus_withLimiter;
- (void)logEventIntervalMapsBusynessState:(id)a0;
- (void)logEventIntervalSeparationAlert:(id)a0;
- (void)logEventNoneClientStatus;
- (void)logEventNoneClientStatusDebugWithClients:(id)a0;
- (void)logEventPointClientStatus;
- (void)logEventPointWifiLocationScanRequesters:(id)a0;
- (void)modelGpsSegmentPower:(id)a0 withGpsPower:(double)a1 withTotalDuration:(double)a2;
- (void)processesOfInterest:(id)a0;
- (void)resyncActiveClients;
- (BOOL)shouldRateLimitTechStatus;
- (void)updateClientsLocationInfo:(id)a0;
- (void)updateGnssPowerMetric:(id)a0;
- (void)updateLocalCacheWithClient:(id)a0 withType:(id)a1 withBundleID:(id)a2 withEntry:(id)a3;
- (void)updateLocationDistributionEvents;
- (void)updateLocationQualificationEvents;

@end
