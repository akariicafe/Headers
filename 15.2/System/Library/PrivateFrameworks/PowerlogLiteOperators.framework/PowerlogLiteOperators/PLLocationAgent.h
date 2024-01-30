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

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitionClientStatus;
+ (id)entryEventPointDefinitionGeoFenceHandoff;
+ (id)entryEventForwardDefinitionTechStatus;
+ (id)entryEventForwardDefinitionClientStatus;
+ (id)entryEventForwardDefinitionLogLevel;
+ (id)entryEventForwardDefinitionStatusBar;
+ (id)entryEventIntervalDefinitionMapsBusyness;
+ (id)entryEventIntervalDefinitionSeparationAlert;
+ (id)entryEventNoneDefinitionClientStatusDebug;

- (void)writeModeledPower;
- (void)log;
- (void).cxx_destruct;
- (id)init;
- (void)initOperatorDependancies;
- (void)processesOfInterest:(id)a0;
- (void)logEventForwardTechStatus_withLimiter;
- (void)logEventForwardClientStatuswithPayload:(id)a0;
- (void)logEventIntervalSeparationAlert:(id)a0;
- (void)logEventIntervalMapsBusynessState:(id)a0;
- (void)updateGnssPowerMetric:(id)a0;
- (BOOL)shouldRateLimitTechStatus;
- (void)logEventForwardTechStatus;
- (id)humanReadableNameForTechnology:(id)a0;
- (void)updateLocalCacheWithClient:(id)a0 withType:(id)a1 withEntry:(id)a2;
- (void)updateClientsLocationInfo:(id)a0;
- (void)resyncActiveClients;
- (void)logEventNoneClientStatusDebugWithClients:(id)a0;
- (id)lastEntryWithClient:(id)a0 withType:(id)a1 withEntryKey:(id)a2;
- (id)getOpenEntryForClientSettings:(id)a0 withTimeStarted:(id)a1 withClient:(id)a2 withType:(id)a3 withEntryKey:(id)a4;
- (void)closeOpenEntryForClient:(id)a0 withOpenEntry:(id)a1 withTimeStopped:(id)a2;
- (void)updateLocationDistributionEvents;
- (void)updateLocationQualificationEvents;
- (void)modelGpsSegmentPower:(id)a0 withGpsPower:(double)a1 withTotalDuration:(double)a2;
- (void)logEventPointClientStatus;
- (void)logEventNoneClientStatus;

@end
