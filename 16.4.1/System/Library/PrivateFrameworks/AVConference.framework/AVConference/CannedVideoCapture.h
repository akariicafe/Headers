@class NSString, NSObject;
@protocol OS_dispatch_queue, CannedVideoFrameFeeder;

@interface CannedVideoCapture : VCVideoCapture <VCVideoSource> {
    NSObject<OS_dispatch_queue> *_captureSessionQueue;
}

@property (readonly, nonatomic) struct CannedVideoCapturePrivate { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; _Atomic int x1; struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; } x2; int x3; struct OpaqueCMClock *x4; BOOL x5; struct OpaqueFigThread *x6; BOOL x7; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x8; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x9; struct OpaqueFigThread *x10; BOOL x11; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x12; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x13; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x14; struct Frame *x15; int x16; struct { BOOL x0; BOOL x1; int x2; BOOL x3; BOOL x4; int x5; unsigned char x6; } x17; } *pimpl;
@property (retain, nonatomic) id<CannedVideoFrameFeeder> frameFeeder;
@property (readonly, nonatomic) BOOL enableTxTimestampAlignmentLogs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)cannedVideoTypeForPath:(id)a0;
+ (int)createPixelBufferPool:(struct __CVPixelBufferPool **)a0 withWidth:(int)a1 height:(int)a2;

- (void)setOrientation:(int)a0;
- (void)dealloc;
- (int)setFrameRate:(int)a0;
- (int)stop:(BOOL)a0;
- (int)startPreview;
- (BOOL)isPreviewRunning;
- (BOOL)isFrontCamera;
- (BOOL)cameraSupportsFormatWidth:(int)a0 height:(int)a1;
- (int)configureCaptureWithToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a0;
- (int)copyColorInfo:(const struct __CFDictionary **)a0;
- (int)frameBecameAvailableCount:(int *)a0 figBufferQueueEmptyCount:(int *)a1 figBufferQueueErrorCount:(int *)a2;
- (int)frameCount:(BOOL)a0;
- (int)getFrameRate;
- (id)initWithCaptureServer:(id)a0 width:(int)a1 height:(int)a2 frameRate:(int)a3 videoSourceToken:(struct _VCVideoSourceToken { union { struct { unsigned int x0 : 24; unsigned char x1 : 8; } x0; unsigned int x1; } x0; })a4 video:(id)a5 isCamera:(BOOL)a6 error:(int *)a7;
- (BOOL)isPortraitResolutionCaptureActive;
- (int)setWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (int)startCaptureWithWidth:(int)a0 height:(int)a1 frameRate:(int)a2;
- (int)startThreads;
- (void)stopThreads;

@end
