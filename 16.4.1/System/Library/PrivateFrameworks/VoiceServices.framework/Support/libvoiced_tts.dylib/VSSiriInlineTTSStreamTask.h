@class VSDeviceTTSCore, NSDate, NSCondition, VSSpeechRequest, SATTSSpeechSynthesisResource, NSMutableArray, VSSiriInstrumentation, NSString, VSAudioPlaybackService, SATTSSpeechSynthesisVoice, VSInstrumentMetrics, VSAudioData, NSError;
@protocol VSSpeechServiceDelegate;

@interface VSSiriInlineTTSStreamTask : NSOperation <VSDeviceTTSCoreDelegate, VSSpeechSpeakableProtocol>

@property (retain, nonatomic) VSSpeechRequest *request;
@property (retain, nonatomic) NSString *streamID;
@property (retain, nonatomic) SATTSSpeechSynthesisResource *streamingResource;
@property (retain, nonatomic) SATTSSpeechSynthesisVoice *streamingVoice;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) VSDeviceTTSCore *deviceTTSCore;
@property (retain, nonatomic) VSAudioPlaybackService *playbackServices;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSCondition *refreshTimeoutCondition;
@property (retain, nonatomic) VSAudioData *serverAudio;
@property (retain, nonatomic) NSMutableArray *finalTimingInfo;
@property (nonatomic) double bufferDurationLimit;
@property (nonatomic) double timeoutValue;
@property (retain, nonatomic) NSDate *playbackBeginDate;
@property (retain, nonatomic) VSSiriInstrumentation *siriInstrumentation;
@property (weak, nonatomic) id<VSSpeechServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSpeaking;
- (void)main;
- (void)suspend;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (void)startPlayback;
- (id)voiceKey;
- (BOOL)waitForNewData:(double)a0;
- (id)audioPowerProvider;
- (void)handleBegin:(id)a0;
- (void)handleChunk:(id)a0;
- (void)handleEnd:(id)a0;
- (void)handleStreamNotification:(id)a0;
- (id)initWithRequest:(id)a0 withStreamID:(id)a1;
- (void)reportFinish;
- (void)reportInstrumentMetrics;
- (void)reportSpeechStart;
- (void)reportTimingInfo;
- (void)signalNewDataWithError:(id)a0;
- (void)synthesisCore:(id)a0 didReceiveAudio:(id)a1;
- (void)synthesisCore:(id)a0 didReceiveProcessingWordTimingInfo:(id)a1;
- (void)synthesisCore:(id)a0 didReceiveWordTimingInfo:(id)a1;
- (id)taskHash;

@end
