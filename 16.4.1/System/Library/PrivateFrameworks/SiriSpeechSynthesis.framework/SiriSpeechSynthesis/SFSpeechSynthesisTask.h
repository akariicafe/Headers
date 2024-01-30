@class SFSSVoiceAsset, NSString, NSError, SFSSResourceAsset, NSCondition, SFSpeechSynthesisRequest, SFSSInstrumentMetrics, NSMutableArray, SFSSAudioPlaybackService;
@protocol SFSpeechSynthesisTaskPrivateDelegate;

@interface SFSpeechSynthesisTask : NSObject <SFSpeechSynthesisTaskProtocol>

@property (retain, nonatomic) NSCondition *synthesisStateCondition;
@property (nonatomic) double audioPlaybackBufferDuration;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (retain, nonatomic) SFSpeechSynthesisRequest *request;
@property (retain, nonatomic) SFSSAudioPlaybackService *playbackService;
@property (retain, nonatomic) SFSSVoiceAsset *voiceAsset;
@property (retain, nonatomic) SFSSResourceAsset *resourceAsset;
@property (retain, nonatomic) SFSSInstrumentMetrics *instrumentMetrics;
@property (copy, nonatomic) NSString *taskIdentifer;
@property (nonatomic) double bufferedDuration;
@property (retain, nonatomic) NSMutableArray *bufferedAudios;
@property (retain, nonatomic) NSMutableArray *bufferedAudioData;
@property (retain, nonatomic) NSMutableArray *phonemeSequence;
@property (nonatomic) long long speakState;
@property (nonatomic) long long synthesisState;
@property (weak, nonatomic) id<SFSpeechSynthesisTaskPrivateDelegate> delegate;
@property (nonatomic) BOOL isSpeaking;
@property (nonatomic) BOOL isFinished;
@property (nonatomic) BOOL isCancelled;
@property (copy, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)start:(id /* block */)a0;
- (id)pause;
- (id)cancel;
- (void).cxx_destruct;
- (id)resume;
- (void)initSpeak:(unsigned int)a0 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1;
- (void)handleSynthesisBegin:(unsigned int)a0 asbd:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a1 audioPlaybackBufferDuration:(double)a2 voiceAsset:(id)a3 resourceAsset:(id)a4;
- (void)handleSynthesisChunks:(id)a0;
- (void)handleSynthesisEnd:(id)a0;
- (void)handleSynthesisEndCallback;
- (void)handleSynthesisFrontendFeaturePhoneme:(id)a0;
- (void)handleSynthesisInit;
- (BOOL)isSpeakRequest;
- (void)setErrorIfNotNull:(id)a0;
- (void)startSpeakIfValid;
- (void)waitForSpeakFinish;

@end
