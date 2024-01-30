@class NSDictionary, NSString;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImpl;

@interface CSEndpointerProxy : NSObject <CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImplDelegate, CSEndpointAnalyzer>

@property (retain, nonatomic) id<CSEndpointAnalyzerImpl> hybridEndpointer;
@property (retain, nonatomic) id<CSEndpointAnalyzerImpl> nnvadEndpointer;
@property (weak, nonatomic) id<CSEndpointAnalyzerImpl> activeEndpointer;
@property (retain, nonatomic) NSDictionary *recordContext;
@property (nonatomic) BOOL recordingDidStop;
@property (weak, nonatomic) id<CSEndpointAnalyzerDelegate> endpointerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long endpointStyle;
@property (nonatomic) double delay;
@property (nonatomic) double startWaitTime;
@property (nonatomic) double automaticEndpointingSuspensionEndTime;
@property (nonatomic) double minimumDurationForEndpointer;
@property (readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property (readonly, nonatomic) double lastStartOfVoiceActivityTime;
@property (nonatomic) double bypassSamples;
@property (nonatomic) long long endpointMode;
@property (nonatomic) double interspeechWaitTime;
@property (nonatomic) double endWaitTime;
@property (nonatomic) BOOL saveSamplesSeenInReset;

- (void)preheat;
- (void)setActiveChannel:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)endpointer:(id)a0 didDetectHardEndpointAtTime:(double)a1 withMetrics:(id)a2;
- (void)endpointer:(id)a0 didDetectStartpointAtTime:(double)a1;
- (void)endpointer:(id)a0 detectedTwoShotAtTime:(double)a1;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)stopEndpointer;
- (void)recordingStoppedForReason:(long long)a0;
- (double)trailingSilenceDurationAtEndpoint;
- (void)processServerEndpointFeatures:(id)a0;
- (void)updateEndpointerThreshold:(float)a0;
- (void)updateEndpointerDelayedTrigger:(BOOL)a0;
- (void)shouldAcceptEagerResultForDuration:(double)a0 resultsCompletionHandler:(id /* block */)a1;
- (id)endpointerModelVersion;
- (double)elapsedTimeWithNoSpeech;
- (void)logHybridEndpointFeaturesWithEvent:(id)a0 locale:(id)a1;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1 recordSettings:(id)a2 voiceTriggerInfo:(id)a3;
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)a0;
- (unsigned long long)endPointAnalyzerType;
- (void)_setupNNVADEndpointer;
- (BOOL)isWatchRTSTriggered;

@end
