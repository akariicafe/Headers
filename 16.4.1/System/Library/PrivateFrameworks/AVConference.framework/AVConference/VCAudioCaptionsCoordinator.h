@class VCAudioCaptionsBufferInfoCollection, NSString, VCAudioCaptions, NSObject;
@protocol VCCaptionsSourceDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface VCAudioCaptionsCoordinator : NSObject <VCAudioCaptionsDelegate, VCCaptionsSource> {
    id<VCCaptionsSourceDelegate> _captionsDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    struct opaqueRTCReporting { } *_reportingAgent;
    NSObject<OS_dispatch_semaphore> *_startStopSemaphore;
    VCAudioCaptions *_audioCaptions;
    VCAudioCaptionsBufferInfoCollection *_bufferInfos;
    BOOL _oneToOneEnabled;
    struct opaqueVCVoiceDetector { } *_voiceDetector;
    BOOL _isVoiceDetectorRunning;
    struct tagVCAudioFrameFormat { struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } format; unsigned int samplesPerFrame; } _lastUsedAudioFormat;
}

@property (nonatomic) long long currentlyCaptionedStreamToken;
@property (nonatomic) long long state;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;
@property (readonly, nonatomic) BOOL captionsSupported;
@property (readonly, nonatomic) BOOL captionsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setOneToOneModeEnabled:(BOOL)a0;
- (void)enableCaptions:(BOOL)a0;
- (void)registerStreamToken:(long long)a0 withFormat:(const struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } *)a1;
- (id)captionsDelegate;
- (void)didDisableCaptions:(BOOL)a0 error:(id)a1;
- (void)didEnableCaptions:(BOOL)a0 error:(id)a1;
- (void)didStartCaptioningWithReason:(int)a0 streamToken:(long long)a1;
- (void)didStopCaptioningWithReason:(int)a0 streamToken:(long long)a1;
- (void)didUpdateCaptions:(id)a0;
- (id)initWithOneToOneEnabled:(BOOL)a0 reportingAgent:(struct opaqueRTCReporting { } *)a1;
- (void)registerCaptionsEventDelegate:(id)a0;
- (void)setCaptionsLocale:(id)a0;

@end
