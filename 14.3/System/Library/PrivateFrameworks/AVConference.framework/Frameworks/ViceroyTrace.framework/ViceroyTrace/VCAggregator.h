@class NSString, VCAlgosStreamingScorer, NSNumber, NSObject;
@protocol OS_dispatch_queue, VCAggregatorDelegate;

@interface VCAggregator : NSObject <VCAdaptiveLearningDelegate> {
    int _interval;
    int _frequency;
    NSString *_localInterfaceType;
    NSString *_connectionType;
    unsigned int _switchIntoDupCount;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    id<VCAggregatorDelegate> _delegate;
    id /* block */ _periodicAggregationOccuredHandler;
}

@property (readonly) id<VCAggregatorDelegate> delegate;
@property (readonly) unsigned int direction;
@property (readonly) NSNumber *streamToken;
@property (readonly) NSString *sessionID;
@property (readonly) VCAlgosStreamingScorer *algosScorer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (int)learntBitrateForSegment:(id)a0 defaultValue:(int)a1;
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
- (void)saveCallSegmentHistory;
- (id)aggregatedSegmentQRReport;
- (BOOL)didUpdateStringFrom:(id *)a0 toString:(id)a1;
- (void)initAdaptiveLearningWithParameters:(id)a0;
- (id)aggregatedCallReports;
- (id)aggregatedSessionReport;
- (void)setPeriodicAggregationOccuredHandler:(id /* block */)a0;

@end
