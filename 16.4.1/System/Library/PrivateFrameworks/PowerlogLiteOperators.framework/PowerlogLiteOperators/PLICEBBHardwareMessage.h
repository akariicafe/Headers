@class NSDate, NSString, PLAgent, NSData, PBCodable, NSNumber, NSMutableArray;

@interface PLICEBBHardwareMessage : NSObject

@property (retain) NSNumber *metricId;
@property (retain) NSString *metricData;
@property (retain) NSNumber *triggerId;
@property (retain) NSData *data;
@property (retain) PBCodable *pbc;
@property (retain) NSMutableArray *metricIdArr;
@property (retain) NSMutableArray *metricDataArr;
@property (retain) NSNumber *triggerCnt;
@property (retain) NSNumber *bbtimestamp;
@property (retain) NSDate *bbMonotonic;
@property (retain) PLAgent *logAgent;

+ (id)entryEventBackwardDefinitionBBIceEventMetrics;
+ (id)entryEventBackwardDefinitionBBIcePeriodicMetrics;

- (id)init;
- (void).cxx_destruct;
- (void)protocolHist2ForClass:(id)a0 forEntry:(id)a1;
- (id)decodeEventPayload:(id)a0 forMetricId:(id)a1;
- (void)addToListMetric:(id)a0 payload:(id)a1;
- (void)componentCarrierForClass:(id)a0 forEntry:(id)a1;
- (void)cpcStatsForClass:(id)a0 forEntry:(id)a1;
- (id)decodePayload:(id)a0 forMetricId:(id)a1;
- (void)duplexModeForClass:(id)a0 forEntry:(id)a1;
- (id)initEntryWithBBTS:(id)a0 triggerId:(id)a1 seqnum:(id)a2 payload:(id)a3 logAgent:(id)a4;
- (void)logBBIceAperiodicMetrics;
- (void)logBBIcePeriodicMetrics;
- (void)pdcchStateStatsFor:(id)a0 forEntry:(id)a1;
- (void)protocolHistForClass:(id)a0 forEntry:(id)a1;
- (void)protocolPerStateForClass:(id)a0 forEntry:(id)a1;
- (void)rrcModeHistForClass:(id)a0 forEntry:(id)a1;

@end
