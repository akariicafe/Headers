@class CSKeywordAnalyzerNDAPI, CSAsset, NSString, NSObject, CSAudioTimeConverter;
@protocol OS_dispatch_queue, CSContinuousVoiceTriggerDelegate;

@interface CSContinuousVoiceTrigger : NSObject <CSKeywordAnalyzerNDAPIScoreDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSAsset *currentAsset;
@property (retain, nonatomic) CSKeywordAnalyzerNDAPI *keywordAnalyzer;
@property (nonatomic) float keywordThreshold;
@property (nonatomic) long long mode;
@property (nonatomic) unsigned long long analyzedSampleCount;
@property (nonatomic) unsigned long long triggerEndSampleCount;
@property (nonatomic) unsigned long long twoShotDecisionWaitSamples;
@property (nonatomic) float twoShotThreshold;
@property (nonatomic) unsigned long long activeChannel;
@property (nonatomic) float lastScore;
@property (weak, nonatomic) id<CSContinuousVoiceTriggerDelegate> delegate;
@property (retain, nonatomic) CSAudioTimeConverter *audioTimeConverter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reset;
- (id)init;
- (void)setAsset:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)_setAsset:(id)a0;
- (void)keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)start;
- (void)_keywordAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)_shotAnalyzerNDAPI:(id)a0 hasResultAvailable:(id)a1 forChannel:(unsigned long long)a2;
- (void)startDetectTwoShot:(id)a0;
- (void)processAudioSamples:(id)a0;

@end
