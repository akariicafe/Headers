@class SNAudioStreamAnalyzer, NSString, NSObject, AVAudioFormat;
@protocol CSAudioFileWriter, CSEndpointAnalyzerImplDelegate, OS_dispatch_queue, CSEndpointAnalyzerDelegate;

@interface CSNNVADEndpointAnalyzer : NSObject <SNResultsObserving, CSEndpointAnalyzerImpl>

@property (retain, nonatomic) SNAudioStreamAnalyzer *snAudioStreamAnalyzer;
@property (nonatomic) unsigned long long framePosition;
@property (nonatomic) unsigned long long nnvadState;
@property (nonatomic) unsigned long long numSamplesReceived;
@property (nonatomic) unsigned long long numSamplesProcessedBeforeAnchorTime;
@property (nonatomic) unsigned long long anchorMachAbsTime;
@property (nonatomic) BOOL isAnchorTimeBuffered;
@property (nonatomic) BOOL isRequestTimeout;
@property (nonatomic) unsigned long long currentRequestSampleRate;
@property (retain, nonatomic) AVAudioFormat *currentRequestAudioFormat;
@property (nonatomic) double vtEndInSecs;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) double vtExtraAudioAtStartInMs;
@property (nonatomic) double nnvadAudioOriginInMs;
@property (nonatomic) BOOL shouldDetectTwoShot;
@property (nonatomic) BOOL didEnterTwoshot;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<CSAudioFileWriter> audioFileWriter;
@property (nonatomic) double firstAudioSampleSensorTimestamp;
@property (nonatomic) long long firstSampleId;
@property (nonatomic) unsigned long long numSamplesSkippedForVT;
@property (nonatomic) BOOL finishedSkippingSamplesForVT;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CSEndpointAnalyzerDelegate> delegate;
@property (weak, nonatomic) id<CSEndpointAnalyzerImplDelegate> implDelegate;
@property (readonly, nonatomic) BOOL canProcessCurrentRequest;
@property (nonatomic) unsigned long long activeChannel;
@property (readonly, nonatomic) NSString *endpointerModelVersion;
@property (readonly, nonatomic) double elapsedTimeWithNoSpeech;
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
@property (retain, nonatomic) NSString *mhId;

+ (id)timeStampString;

- (void)request:(id)a0 didFailWithError:(id)a1;
- (void)preheat;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)handleVoiceTriggerWithActivationInfo:(id)a0;
- (void).cxx_destruct;
- (void)stopEndpointer;
- (void)recordingStoppedForReason:(long long)a0;
- (id)init;
- (double)trailingSilenceDurationAtEndpoint;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1;
- (void)reset;
- (void)request:(id)a0 didProduceResult:(id)a1;
- (id)_pcmBufferForAudioChunk:(id)a0;
- (double)_effectiveAudioTimeInSecsForSNObservation:(id)a0;
- (void)_reportStartpointAtTsInSecs:(double)a0;
- (BOOL)_shouldEnterTwoShotAtAudioTimeInSecs:(double)a0;
- (void)_reportTwoShotAtTsInSecs:(double)a0;
- (void)_reportEndpointAtTsInSecs:(double)a0;
- (void)_checkSNObservationForStartpoint:(id)a0;
- (void)_checkSNObservationForEndpoint:(id)a0;
- (void)_emitEndpointDetectedEventWithEndpointTime:(double)a0 endpointBufferHostTime:(unsigned long long)a1;

@end
