@class CSAudioZeroFilter;
@protocol CSVoiceTriggerAwareZeroFilterDelegate;

@interface CSVoiceTriggerAwareZeroFilter : NSObject

@property (nonatomic) float sampleRate;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (retain, nonatomic) CSAudioZeroFilter *zeroFilter;
@property (weak, nonatomic) id<CSVoiceTriggerAwareZeroFilterDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (id)metrics;
- (void)flush;
- (void)resetWithSampleRate:(float)a0 containsVoiceTrigger:(BOOL)a1 voiceTriggerInfo:(id)a2;
- (void)processBuffer:(id)a0 atTime:(unsigned long long)a1;

@end
