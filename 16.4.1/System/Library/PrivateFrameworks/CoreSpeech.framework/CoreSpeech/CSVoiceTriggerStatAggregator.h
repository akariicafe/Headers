@class NSString, NSMutableDictionary;

@interface CSVoiceTriggerStatAggregator : NSObject <CSDigitalZeroReporting>

@property (nonatomic) unsigned long long numFalseWakeUp;
@property (nonatomic) unsigned long long lastAggTimeFalseWakeUp;
@property (retain, nonatomic) NSMutableDictionary *falseWakePhraseDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAggregator;

- (id)init;
- (void).cxx_destruct;
- (void)reportDigitalZerosWithAudioZeroRun:(float)a0;
- (void)logAOPFirstPassTriggerWakeupLatency:(float)a0;
- (void)logFalseWakeUp:(BOOL)a0 withPhrase:(id)a1;
- (void)logSecondPassResult:(int)a0 eventInfo:(id)a1 triggerAPWakeUp:(BOOL)a2;
- (void)logTriggerLengthSampleCountStatistics:(unsigned long long)a0 withFirstPassDeterministicTriggerLengthSampleCount:(unsigned long long)a1;

@end
