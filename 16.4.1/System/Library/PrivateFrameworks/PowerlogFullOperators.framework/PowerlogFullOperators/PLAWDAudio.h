@class NSDate, PLEntryNotificationOperatorComposition;

@interface PLAWDAudio : PLAWDAuxMetrics

@property (retain) PLEntryNotificationOperatorComposition *audioRailCallback;
@property (retain) NSDate *startTime;

+ (id)entryAggregateDefinitions;
+ (id)entryAggregateDefinitionAwdAudio;
+ (id)getSharedObjWithOperator:(id)a0;

- (void).cxx_destruct;
- (void)resetAudioTable;
- (void)finalizeAudioTable;
- (void)handleAudioRailCallback:(id)a0;
- (void)startMetricCollection:(id)a0;
- (void)stopMetricCollection:(id)a0;
- (BOOL)submitDataToAWDServer:(id)a0 withAwdConn:(id)a1;

@end
