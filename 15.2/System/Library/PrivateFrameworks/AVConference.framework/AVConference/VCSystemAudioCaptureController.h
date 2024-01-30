@class NSString, VCSystemAudioCapture, NSObject;
@protocol OS_dispatch_queue;

@interface VCSystemAudioCaptureController : NSObject <VCAudioIOControllerControl> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    VCSystemAudioCapture *_systemAudioCapture;
    BOOL _running;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startClient:(id)a0;
- (id)init;
- (void)stopClient:(id)a0;
- (void)dealloc;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (void)updateClient:(id)a0 direction:(unsigned char)a1;

@end
