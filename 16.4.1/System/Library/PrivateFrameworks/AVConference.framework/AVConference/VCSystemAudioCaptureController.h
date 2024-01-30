@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCSystemAudioCaptureController : VCObject <VCAudioIOControllerControl> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _running;
    struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int tapType; union { int audioProcessIdToTap; unsigned int sessionTypeToTap; } ; struct __CFString *captureContext; unsigned int source; } tapSettings; } _configuration;
    BOOL _useScreenCaptureKitForAudio;
}

@property (readonly, nonatomic) NSDictionary *reportingStats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captureServerConfigForAudioConfig:(struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; } *)a0 forClient:(id)a1;
+ (int)captureSourceForSystemAudioCaptureControllerConfig:(struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; } *)a0;
+ (int)captureSourceForTypePreSpatialSessionType:(unsigned int)a0;
+ (int)captureSourceForTypeProcessID:(int)a0;
+ (BOOL)isValidConfiguration:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; } *)a0;

- (void)dealloc;
- (id)initWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; } *)a0;
- (id)init;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo { unsigned int x0; double x1; } *)a0;
- (id)dispatchQueueNameWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; } *)a0;
- (void)setupLogPrefixWithConfig:(const struct tagVCSystemAudioCaptureControllerConfig { struct tagVCSystemAudioCaptureTapSettings { unsigned int x0; union { int x0; unsigned int x1; } x1; struct __CFString *x2; unsigned int x3; } x0; } *)a0;
- (void)startClient:(id)a0;
- (void)stopClient:(id)a0;
- (void)updateClient:(id)a0 direction:(unsigned char)a1;

@end
