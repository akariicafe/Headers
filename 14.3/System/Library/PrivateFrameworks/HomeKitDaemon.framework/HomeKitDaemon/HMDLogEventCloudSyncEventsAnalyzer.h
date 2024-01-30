@class HMDEventFlagsManager, NSMutableDictionary, AWDHomeKitCloudSync, HMDEventCountersManager;

@interface HMDLogEventCloudSyncEventsAnalyzer : HMDLogEventAnalyzer

@property (nonatomic) unsigned int pushCount;
@property (nonatomic) unsigned int fetchCount;
@property (nonatomic) unsigned int uploadCount;
@property (nonatomic) BOOL uploadMaximumDelayReached;
@property (nonatomic) unsigned int uploadErrorCount;
@property (nonatomic) BOOL hasDecryptionFailed;
@property (nonatomic) BOOL lastDecryptionFailed;
@property (nonatomic) unsigned long long dataSyncState;
@property (nonatomic) unsigned int homeManagerFetchCount;
@property (nonatomic) unsigned int homeZoneFetchCount;
@property (nonatomic) unsigned int homeManagerUploadCount;
@property (nonatomic) unsigned int homeZoneUploadCount;
@property (retain, nonatomic) NSMutableDictionary *reasonToCountMap;
@property (retain, nonatomic) NSMutableDictionary *errorToCountMap;
@property (nonatomic) unsigned int homeDataBytesFetched;
@property (nonatomic) unsigned int homeDataBytesPushed;
@property (nonatomic) unsigned int legacyHomeDataBytesFetched;
@property (nonatomic) unsigned int legacyHomeDataBytesPushed;
@property (retain, nonatomic) HMDEventFlagsManager *eventFlagsManager;
@property (retain, nonatomic) HMDEventCountersManager *eventCountersManager;
@property (readonly, nonatomic) AWDHomeKitCloudSync *cloudSyncMetricForAWD;

+ (id)sharedAWDServerConnection;

- (void).cxx_destruct;
- (id)initWithSupportedEventTypes:(id)a0 context:(id)a1 eventCountersManager:(id)a2 eventFlagsManager:(id)a3;
- (id)initWithSupportedEventTypes:(id)a0 context:(id)a1;
- (void)processLogEvent:(id)a0;
- (void)submitAWDCloudSyncMetric:(id)a0;
- (void)clearCloudSyncMetrics;
- (id)getTop:(long long)a0 dictionary:(id)a1;

@end
