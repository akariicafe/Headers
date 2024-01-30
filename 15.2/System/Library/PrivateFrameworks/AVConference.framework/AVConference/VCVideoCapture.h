@class VideoAttributes, NSString, NSMutableArray, NSObject;
@protocol VCVideoCaptureServer;

@interface VCVideoCapture : NSObject {
    id _captureServer;
    NSString *_sourceUID;
    VideoAttributes *_localVideoAttributes;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _sinkArrayMutex;
}

@property (readonly) NSMutableArray *sinkArray;
@property (readonly) unsigned int sinkCount;
@property (readonly) NSObject<VCVideoCaptureServer> *captureServer;

- (void)dealloc;
- (void)distributeVideoFrame:(struct opaqueCMSampleBuffer { } *)a0 frameTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 preview:(BOOL)a2 orientation:(int)a3 fromCamera:(BOOL)a4 camera:(int)a5 switching:(BOOL)a6 videoMirrored:(BOOL)a7;
- (id)initWithCaptureServer:(id)a0;
- (unsigned int)addSink:(id)a0;
- (unsigned int)removeSink:(id)a0;

@end
