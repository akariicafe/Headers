@class NSString, AVAssetReader, NSArray, VCPMovieAssetWriter, FRCFrameInterpolator, AVAssetReaderTrackOutput, FRCFrame, AVAssetTrack;

@interface VCPSettlingEffectAnalyzer : VCPVideoAnalyzer {
    FRCFrameInterpolator *_frameInterpolator;
    FRCFrame *_previousFrame;
    VCPMovieAssetWriter *_assetWriter;
    unsigned long long _anchorIndex;
    unsigned long long _timingCurveIdx;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _settlingStartPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _anchorPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _stillPTS;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _outputFrameDuration;
    NSString *_filePath;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_livePhotoInfoOutput;
    AVAssetTrack *_originalTrack;
    struct opaqueCMSampleBuffer { } *_previousMetadata;
    NSArray *_framePTSList;
    NSArray *_timingCurveList;
}

@property (readonly) BOOL processAborted;
@property (nonatomic) BOOL cancelled;

+ (long long)getFRCQualityMode;

- (id)results;
- (void)dealloc;
- (void).cxx_destruct;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 andDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 flags:(unsigned long long *)a3;
- (int)createLivePhotoInfoSample:(struct opaqueCMSampleBuffer { } *)a0 withTimestamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 isInterpolated:(BOOL)a2 updatedSample:(struct opaqueCMSampleBuffer **)a3;
- (id)findLivePhotoInfoOutput:(id)a0;
- (int)finishAnalysisPass:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 withStillImageBuffer:(struct __CVBuffer { } *)a1;
- (id)getFramePTSList:(id)a0 before:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (struct CGSize { double x0; double x1; })getFrameSize:(id)a0;
- (id)getRetimingCurve;
- (id)initWithTimestamps:(id)a0 andTrack:(id)a1;
- (int)setupLivePhotoInfoOutput:(id)a0;

@end
