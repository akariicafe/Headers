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
- (void)startPlayback;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;
- (id)voiceKey;
- (void)dealloc;
- (void)cancel;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)reportSpeechStart;
- (id)taskHash;
- (id)audioPowerProvider;
- (void)synthesisCore:(id)a0 didReceiveAudio:(id)a1;
- (void)synthesisCore:(id)a0 didReceiveWordTimingInfo:(id)a1;
- (id)initWithRequest:(id)a0 withStreamID:(id)a1;
- (void)handleBegin:(id)a0;
- (void)handleChunk:(id)a0;
- (void)handleEnd:(id)a0;
- (void)signalNewDataWithError:(id)a0;
- (void)handleStreamNotification:(id)a0;
- (BOOL)waitForNewData:(double)a0;

@end
