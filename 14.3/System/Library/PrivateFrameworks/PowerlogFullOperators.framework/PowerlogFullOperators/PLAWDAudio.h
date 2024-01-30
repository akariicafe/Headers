@class NSDate, PLEntryNotificationOperatorComposition;

@interface PLAWDAudio : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *audioRailCallback;
@property (retain) NSDate *startTime;

+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)a0;
+ (id)entryAggregateDefinitionAwdAudio;

- (void).cxx_destruct;
- (void)startMetricCollection:(id)a0;
- (void)stopMetricCollection:(id)a0;
- (BOOL)submitDataToAWDServer:(id)a0 withAwdConn:(id)a1;
- (void)resetAudioTable;
- (void)finalizeAudioTable;
- (void)handleAudioRailCallback:(id)a0;

@end
