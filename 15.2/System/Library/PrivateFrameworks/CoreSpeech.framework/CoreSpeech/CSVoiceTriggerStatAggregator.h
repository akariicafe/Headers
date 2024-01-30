@interface CSVoiceTriggerStatAggregator : NSObject

@property (nonatomic) unsigned long long numFalseWakeUp;
@property (nonatomic) unsigned long long lastAggTimeFalseWakeUp;

+ (id)sharedAggregator;

- (id)init;
- (void)logAudioZeroRun:(float)a0;
- (void)logSecondPassResult:(int)a0 eventInfo:(id)a1 triggerAPWakeUp:(BOOL)a2;
- (void)logAOPFirstPassTriggerWakeupLatency:(float)a0;
- (void)logFalseWakeUp:(BOOL)a0;
- (void)logTriggerLengthSampleCountStatistics:(unsigned long long)a0 withFirstPassDeterministicTriggerLengthSampleCount:(unsigned long long)a1;

@end
