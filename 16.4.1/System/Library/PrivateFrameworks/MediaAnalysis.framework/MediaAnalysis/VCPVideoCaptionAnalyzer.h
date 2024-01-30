@class VCPVideoCaptionEncoder, NSString, NSObject, NSURL, MAAsset, NSMutableArray, VCPTransforms;
@protocol OS_dispatch_group;

@interface VCPVideoCaptionAnalyzer : VCPVideoAnalyzer {
    VCPVideoCaptionEncoder *_backbone;
    VCPTransforms *_transformImage;
    float *_inputData;
    int _inputWidth;
    int _inputHeight;
    int _inputNumFrames;
    int _skipNumFramesBothEnds;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastProcess;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeLastDetection;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeStart;
    int _frameIndex;
    int _validFrames;
    BOOL _enoughFrames;
    NSString *_resConfig;
    NSMutableArray *_videoCaptionResult;
    NSMutableArray *_activeFrameIndices;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _timeEnd;
    NSURL *_videoCaptionDecoder;
    NSURL *_videoCaptionEncoder;
    NSObject<OS_dispatch_group> *_downloadGroup;
    MAAsset *_videoCaptionEncoderAsset;
}

+ (long long)mode;
+ (id)cloneCaptionModel:(id)a0 to:(id)a1;
+ (id)imageCaptionModelTestURL;
+ (id)videoCaptionDecoderTestURL;
+ (id)videoCaptionEncoderTestURL;

- (id)results;
- (void)dealloc;
- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)configInputBasedOnDevice;
- (int)copyImage:(struct __CVBuffer { } *)a0 withChannels:(int)a1;
- (int)downloadVideoCaptionEncoderIfNeeded;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (int)inference:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithFrameRate:(float)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;

@end
