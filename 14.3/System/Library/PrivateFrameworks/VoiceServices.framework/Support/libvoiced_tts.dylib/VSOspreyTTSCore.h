@class VSServerTTSClient, VSTimeoutCondition, NSError, VSVoiceAsset, VSVoiceResourceAsset, NSCondition, VSSpeechRequest, NSObject, VSInstrumentMetrics, VSSiriServerConfiguration, VSSpeechInternalSettings;
@protocol OS_dispatch_queue, VSOspreyTTSCoreDelegate;

@interface VSOspreyTTSCore : NSOperation

@property (retain, nonatomic) VSServerTTSClient *serverTTSClient;
@property (retain, nonatomic) VSSiriServerConfiguration *serverConfig;
@property (retain, nonatomic) VSSpeechInternalSettings *internalSettings;
@property (nonatomic) double bufferDurationLimit;
@property (retain, nonatomic) VSTimeoutCondition *timeoutCondition;
@property (nonatomic) BOOL didReceiveAudio;
@property (retain, nonatomic) NSCondition *didReceiveAudioCondition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) VSSpeechRequest *request;
@property (weak, nonatomic) id<VSOspreyTTSCoreDelegate> delegate;
@property (weak, nonatomic) VSInstrumentMetrics *instrumentMetrics;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) VSVoiceAsset *voice;
@property (retain, nonatomic) VSVoiceResourceAsset *voiceResource;

- (void)cancel;
- (id)initWithRequest:(id)a0;
- (double)timeout;
- (void).cxx_destruct;
- (void)main;
- (void)waitUntilFinishedIfAudioReceivedWithin:(double)a0;
- (void)performStreamingOspreyTTS;
- (void)performRoundTripOspreyTTS;

@end
