@class AVAssetReaderTrackOutput, AVAssetReader, AVAssetTrack, AVURLAsset, NSString, VideoScaler;

@interface CannedEncodedVideoCapture : NSObject <CannedVideoFrameFeeder> {
    struct __CVPixelBufferPool { } *_pixelBufferPool;
    struct __CVPixelBufferPool { } *_rotatedPixelBufferPool;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _inputMutex;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _attributeMutex;
}

@property (retain, nonatomic) AVURLAsset *compressedFileAsset;
@property (retain, nonatomic) AVAssetReader *assetReader;
@property (retain, nonatomic) AVAssetTrack *videoTrack;
@property (retain, nonatomic) AVAssetReaderTrackOutput *readerVideoTrackOutput;
@property (retain, nonatomic) NSString *movieURLString;
@property (retain, nonatomic) VideoScaler *videoScaler;
@property (nonatomic) int width;
@property (nonatomic) int height;
@property (nonatomic) int allFrameCount;
@property (nonatomic) double allFrameRate;
@property (nonatomic) int frameCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)initialize;
- (id)initWithPath:(id)a0;
- (void)dealloc;
- (int)initializeDecoder;
- (struct __CVBuffer { } *)createPixelBufferForFrameIndex:(int)a0;
- (void)getFrameRate:(double *)a0 frameCount:(int *)a1;
- (int)setWidth:(int)a0 height:(int)a1;

@end
