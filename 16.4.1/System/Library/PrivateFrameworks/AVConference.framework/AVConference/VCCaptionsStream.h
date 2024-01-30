@class NSString, VCCaptionsReceiver;
@protocol VCCaptionsSourceDelegate;

@interface VCCaptionsStream : VCVideoStream <VCCaptionsReceiverDelegate, VCCaptionsSource> {
    VCCaptionsReceiver *_captionsReceiver;
    id<VCCaptionsSourceDelegate> _captionsDelegate;
    BOOL _enabled;
}

@property (readonly, nonatomic) BOOL captionsSupported;
@property (readonly, nonatomic) BOOL captionsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)enableCaptions:(BOOL)a0;
- (id)captionsDelegate;
- (id)dataFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)didReceiveCaptions:(id)a0;
- (id)initWithTransportSessionID:(unsigned int)a0 idsParticipantID:(unsigned long long)a1 ssrc:(unsigned int)a2 streamToken:(long long)a3;
- (void)onStartWithCompletionHandler:(id /* block */)a0;
- (void)onStopWithCompletionHandler:(id /* block */)a0;
- (void)registerCaptionsEventDelegate:(id)a0;
- (void)setCaptionsLocale:(id)a0;
- (BOOL)vcVideoReceiver:(id)a0 didReceiveSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 isFirstFrame:(BOOL)a2;

@end
