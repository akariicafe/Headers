@class NSString, VSInstrumentMetrics, VSAudioPlaybackService, VSPresynthesizedAudioRequest, NSMutableData;
@protocol VSSpeechServiceDelegate;

@interface VSSpeechPresynthesizedTask : NSOperation <VSSpeechSpeakableProtocol>

@property (readonly, nonatomic) VSPresynthesizedAudioRequest *request;
@property (weak, nonatomic) id<VSSpeechServiceDelegate> delegate;
@property (retain, nonatomic) VSAudioPlaybackService *playbackService;
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) NSMutableData *audioData;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (id)initWithRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)main;
- (void)resume;
- (BOOL)isSpeaking;
- (void)suspend;
- (void)reportTimingInfo;
- (void)reportInstrumentMetrics;
- (void)reportFinish;
- (void)reportSpeechStart;
- (id)taskHash;
- (id)audioPowerProvider;

@end
