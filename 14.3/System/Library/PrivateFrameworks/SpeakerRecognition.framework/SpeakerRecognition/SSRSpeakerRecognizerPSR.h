@class NSString, NSDictionary, SSRSpeakerRecognitionContext, SSRSpeakerAnalyzerPSR, NSObject;
@protocol OS_dispatch_queue, SSRSpeakerRecognizerDelegate;

@interface SSRSpeakerRecognizerPSR : NSObject <SSRSpeakerAnalyzerPSRDelegate, SSRSpeakerRecognizer>

@property (retain, nonatomic) SSRSpeakerRecognitionContext *spIdCtx;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSDictionary *lastSpeakerInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SSRSpeakerRecognizerDelegate> delegate;
@property (retain, nonatomic) NSString *invocationStyleStr;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (nonatomic) unsigned long long vtEndInSampleCount;
@property (nonatomic) unsigned long long endInSampleCount;
@property (nonatomic) unsigned long long numSamplesProcessed;
@property (nonatomic) BOOL processingEnded;
@property (nonatomic) unsigned long long totalNumSamplesReceived;
@property (retain, nonatomic) SSRSpeakerAnalyzerPSR *psrAnalyzer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *lastScoreCard;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)endAudio;
- (void)resetWithContext:(id)a0;
- (void)processAudioData:(id)a0 numSamples:(unsigned long long)a1;
- (void)voiceRecognitionPSRAnalyzer:(id)a0 hasVoiceRecognitionInfo:(id)a1;
- (void)voiceRecognitionPSRAnalyzerFinishedProcessing:(id)a0 withVoiceRecognitionInfo:(id)a1;
- (void)_initializeWithContext:(id)a0;

@end
