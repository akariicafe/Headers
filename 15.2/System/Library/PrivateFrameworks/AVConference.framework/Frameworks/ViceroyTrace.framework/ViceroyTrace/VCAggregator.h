@class NSObject, NSString, VCAlgosStreamingScorer, NSDate, VCAlgosStreamingScoreAggregator, NSNumber, TimingCollection;
@protocol OS_nw_activity, VCAggregatorDelegate, OS_os_transaction, OS_dispatch_queue;

@interface VCAggregator : NSObject <VCAdaptiveLearningDelegate> {
    int _interval;
    int _frequency;
    NSString *_localInterfaceType;
    NSString *_connectionType;
    unsigned int _switchIntoDupCount;
    TimingCollection *_cameraTimers;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<VCAggregatorDelegate> _delegate;
    id /* block */ _periodicAggregationOccuredHandler;
    VCAlgosStreamingScorer *_algosScorerDefault;
    NSObject<OS_nw_activity> *_sessionNwActivity;
    NSObject<OS_nw_activity> *_nwActivity;
    BOOL _useNwActivitySubmitMetrics;
    NSDate *_conversationTimeBase;
    int _startDate;
    long long _onceAggregatedReportsToken;
    BOOL _isNWActivityReportingEnabled;
    int _thermalTimeToModerate;
    int _thermalTimeToHeavy;
    NSObject<OS_os_transaction> *_transaction;
}

@property (readonly) id<VCAggregatorDelegate> delegate;
@property (readonly) unsigned int direction;
@property (readonly) NSNumber *streamToken;
@property (readonly) NSString *sessionID;
@property (readonly) VCAlgosStreamingScoreAggregator *algosScoreAggregator;
@property (readonly) long long *onceAggregatedReportsToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)learntBitrateForSegment:(id)a0 defaultValue:(int)a1;
- (id)initWithDelegate:(id)a0 nwParentActivity:(id)a1;
- (id)copyWiFiTelemetryForTraffic:(id)a0 shouldRegister:(BOOL)a1;
- (unsigned int)RTPeriod;
- (void)flushCurrentSegment;
- (void)processEventWithCategory:(unsigned short)a0 type:(unsigned short)a1 payload:(id)a2;
- (id)aggregatedSegmentReport:(int)a0;
- (int)initialSettledBitrate;
- (int)previousISBRForSegment:(id)a0;
- (int)adaptiveLearningState;
- (void)updateSegment:(id)a0 TBR:(int)a1 ISBTR:(int)a2 SATXBR:(int)a3 SARBR:(int)a4 BWE:(int)a5;
- (int)shortTermAverageTBRForSegment:(id)a0;
- (int)longTermAverageTBRForSegment:(id)a0;
- (int)longTermAverageISBRForSegment:(id)a0;
- (int)shortTermAverageISBRForSegment:(id)a0;
- (int)longTermAverageSATXBRForSegment:(id)a0;
- (int)shortTermAverageSATXBRForSegment:(id)a0;
- (int)longTermAverageSARBRForSegment:(id)a0;
- (int)shortTermAverageSARBRForSegment:(id)a0;
- (int)longTermAverageBWEForSegment:(id)a0;
- (int)shortTermAverageBWEForSegment:(id)a0;
- (void)setNWActivityReportingEnabled:(BOOL)a0;
- (void)saveCallSegmentHistory;
- (id)initWithDelegate:(id)a0 nwParentActivity:(id)a1 conversationTimeBase:(id)a2;
- (void)addCameraMetricsToReportDictionary:(id)a0 totalDuration:(int)a1;
- (void)addThermalMetricsToReportDictionary:(id)a0;
- (id)aggregatedSegmentQRReport;
- (BOOL)didUpdateStringFrom:(id *)a0 toString:(id)a1;
- (void)initAdaptiveLearningWithParameters:(id)a0;
- (id)aggregatedCallReports;
- (id)aggregatedSessionReport;
- (void)setPeriodicAggregationOccuredHandler:(id /* block */)a0;
- (void)updateThermalMetricsFromPayload:(id)a0;

@end
