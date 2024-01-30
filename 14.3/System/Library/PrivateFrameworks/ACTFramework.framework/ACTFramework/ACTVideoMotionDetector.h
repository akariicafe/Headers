@class NSURL, NSDictionary, ACTSlowmoResults;

@interface ACTVideoMotionDetector : ACTVideoProcessor {
    double _startTimestamp;
    struct __sbp_Slowmo_Projection { struct FastRegistration_Signatures { float *piRow; unsigned long long nPiRow; struct Projections_meanStdTable { float *sumTable; float *sumSqTable; } piRowTable; float *piCol; unsigned long long nPiCol; struct Projections_meanStdTable { float *sumTable; float *sumSqTable; } piColTable; } signature; float deltaRow[3264]; float deltaCol[3264]; unsigned long long nDeltaRow; unsigned long long nDeltaCol; unsigned char valid; double timestamp; void *allocatedBuffer; struct vImage_Buffer { void *data; unsigned long long height; unsigned long long width; unsigned long long rowBytes; } allocatedvImage; } _projections[2];
    int _curProjIndex;
    int _frameCount;
    int _processedFrameCount;
    double _lastFrameTimestamp;
    ACTSlowmoResults *_results;
    BOOL _outputRawMarkers;
    BOOL _verbose;
    BOOL _skipSecondPass;
    BOOL _singleTimeRange;
    float _rowGradient[3264];
    float _colGradient[3264];
}

@property (readonly) NSURL *url;
@property (readonly) NSDictionary *result;

+ (id)motionDetectorWithURL:(id)a0 options:(id)a1;

- (void)dealloc;
- (void)finishProcessing;
- (void)processBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithURL:(id)a0 options:(id)a1;
- (unsigned char)calculateProjectionSignature:(struct __sbp_Slowmo_Projection { struct FastRegistration_Signatures { float *x0; unsigned long long x1; struct Projections_meanStdTable { float *x0; float *x1; } x2; float *x3; unsigned long long x4; struct Projections_meanStdTable { float *x0; float *x1; } x5; } x0; float x1[3264]; float x2[3264]; unsigned long long x3; unsigned long long x4; unsigned char x5; double x6; void *x7; struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } x8; } *)a0 buffer:(struct __CVBuffer { } *)a1;
- (void)gradientForSignature:(float *)a0 gradient:(float *)a1 count:(int)a2;
- (void)startProcessing;
- (void)processVideo;

@end
