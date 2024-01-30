@class NSString, AVCMediaStreamConfig, AVCMediaStreamNegotiator, AVCVideoStream, NSObject;
@protocol OS_dispatch_semaphore;

@interface APEndpointStreamScreenAVCWrapper : NSObject <AVCVideoStreamDelegate> {
    int _clientPID;
    AVCVideoStream *_avcVideoStream;
    AVCMediaStreamNegotiator *_avcMediaStreamNegotiator;
    AVCMediaStreamNegotiator *_avcMediaStreamNegotiatorHDR;
    AVCMediaStreamConfig *_videoStreamConfig;
    AVCMediaStreamConfig *_videoStreamConfigHDR;
    int _didStartStatus;
    void *_eventWeakContext;
    void /* function */ *_eventHandleStart;
    void /* function */ *_eventHandleStop;
    void /* function */ *_eventHandleFailed;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    unsigned char _isSubFrameEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stopWithCompletion:(struct { void /* function */ *x0; void *x1; int x2; } *)a0;
- (int)stop;
- (int)start;
- (void)streamDidStop:(id)a0;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidServerDie:(id)a0;
- (unsigned long long)convertHDRMode:(struct __CFString { } *)a0;
- (id)initWithClientPID:(struct __CFNumber { } *)a0 hdrMode:(struct __CFString { } *)a1 presentationMode:(BOOL)a2 eventHandlers:(struct { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; })a3 error:(int *)a4;
- (int)createVideoStreamConfig:(id *)a0 withDirection:(long long)a1 screenOptions:(struct { struct CGSize { double x0; double x1; } x0; int x1; id x2; id x3; unsigned char x4; struct __CFString *x5; id x6; } *)a2 previousConfig:(id)a3;
- (int)getClientUPID:(unsigned long long *)a0;
- (void)getVideoResolutionFromOptions:(struct { struct CGSize { double x0; double x1; } x0; int x1; id x2; id x3; unsigned char x4; struct __CFString *x5; id x6; } *)a0 width:(unsigned long long *)a1 height:(unsigned long long *)a2;
- (void)handleFailureWithError:(int)a0 reason:(struct __CFString { } *)a1;
- (int)initializeNegotiatorWithMode:(struct __CFString { } *)a0 presentationMode:(BOOL)a1;
- (unsigned char)isConfigPresentForPresentationMode:(unsigned char)a0;
- (id)negotiationDataForPresentationMode:(unsigned char)a0;
- (int)restartWithScreenOptions:(struct { struct CGSize { double x0; double x1; } x0; int x1; id x2; id x3; unsigned char x4; struct __CFString *x5; id x6; } *)a0 negotiatedBlob:(id)a1;
- (int)startWithNWConnectionClientID:(unsigned char[16])a0 negotiatedBlob:(id)a1 screenOptions:(struct { struct CGSize { double x0; double x1; } x0; int x1; id x2; id x3; unsigned char x4; struct __CFString *x5; id x6; } *)a2 completion:(struct { void /* function */ *x0; void *x1; int x2; } *)a3;

@end
