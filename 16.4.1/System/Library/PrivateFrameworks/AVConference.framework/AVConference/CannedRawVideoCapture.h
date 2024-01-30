@class NSArray, NSDictionary, VideoScaler, NSString;

@interface CannedRawVideoCapture : NSObject <CannedVideoFrameFeeder> {
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_currentInputFile;
    struct __CVPixelBufferPool { } *_currentPixelBufferPool;
    struct __CVPixelBufferPool { } *_rotatedPixelBufferPool;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _inputMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _attributeMutex;
}

@property (nonatomic) int width;
@property (nonatomic) int height;
@property (retain, nonatomic) NSArray *allResolutions;
@property (nonatomic) int allFrameCount;
@property (nonatomic) double allFrameRate;
@property (retain, nonatomic) NSDictionary *currentResolution;
@property (retain, nonatomic) VideoScaler *videoScaler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPath:(id)a0;
- (void)dealloc;
- (int)setWidth:(int)a0 height:(int)a1;
- (struct __CVBuffer { } *)createPixelBufferForFrameIndex:(int)a0;
- (void)getFrameRate:(double *)a0 frameCount:(int *)a1;
- (int)initializeFrameResolutionArrayFromFolder:(id)a0;

@end
