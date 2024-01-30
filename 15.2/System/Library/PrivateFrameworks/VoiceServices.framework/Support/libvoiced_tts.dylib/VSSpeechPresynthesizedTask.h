@class NSError, NSString, VSInstrumentMetrics, VSSiriInstrumentation, VSAudioPlaybackService, VSPresynthesizedAudioRequest, NSMutableData;
@protocol VSSpeechServiceDelegate;

@interface VSSpeechPresynthesizedTask : NSOperation <VSSpeechSpeakableProtocol>

@property (readonly, nonatomic) VSPresynthesizedAudioRequest *request;
@property (weak, nonatomic) id<VSSpeechServiceDelegate> delegate;
@property (retain, nonatomic) VSAudioPlaybackService *playbackService;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) NSMutableData *audioData;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSSiriInstrumentation *siriInstrumentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (BOOL)isSpeaking;
- (void)main;
- (void).cxx_destruct;
- (id)init;
- (void)suspend;
- (void)resume;
- (void)cancel;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)reportSpeechStart;
- (id)taskHash;
- (id)audioPowerProvider;

@end
