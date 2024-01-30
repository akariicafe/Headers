@class NSString, NSDictionary, SSRSpeakerRecognitionContext, SSRSpeakerAnalyzerSAT, NSObject;
@protocol OS_dispatch_queue, SSRSpeakerRecognizerDelegate;

@interface SSRSpeakerRecognizerSAT : NSObject <SSRSpeakerAnalyzerSATDelegate, SSRSpeakerRecognizer>

@property (retain, nonatomic) SSRSpeakerRecognitionContext *spIdCtx;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSDictionary *lastSpeakerInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<SSRSpeakerRecognizerDelegate> delegate;
@property (retain, nonatomic) NSString *invocationStyleStr;
@property (nonatomic) unsigned long long extraSamplesAtStart;
@property (nonatomic) unsigned long long tdEndInSampleCount;
@property (nonatomic) unsigned long long totalNumSamplesReceived;
@property (nonatomic) unsigned long long numTdTiSamplesProcessed;
@property (nonatomic) BOOL processingEnded;
@property (retain, nonatomic) SSRSpeakerAnalyzerSAT *satAnalyzer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *lastScoreCard;

- (void)dealloc;
- (void)endAudio;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (void)resetWithContext:(id)a0;
- (void)_initializeWithContext:(id)a0;
- (void)processAudioData:(id)a0 numSamples:(unsigned long long)a1;
- (void)voiceRecognitionSATAnalyzer:(id)a0 hasVoiceRecognitionInfo:(id)a1;
- (void)voiceRecognitionSATAnalyzerFinishedProcessing:(id)a0 withVoiceRecognitionInfo:(id)a1;

@end
