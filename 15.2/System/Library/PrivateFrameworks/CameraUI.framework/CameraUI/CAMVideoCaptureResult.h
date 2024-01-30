@class NSArray, NSURL, NSDate, CAMCaptureCoordinationInfo, NSError;

@interface CAMVideoCaptureResult : NSObject

@property (readonly, nonatomic) NSURL *localDestinationURL;
@property (readonly, nonatomic) NSURL *filteredLocalDestinationURL;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillDisplayTime;
@property (readonly, nonatomic) struct { int width; int height; } dimensions;
@property (readonly, copy, nonatomic) NSArray *metadata;
@property (readonly, nonatomic) double videoZoomFactor;
@property (readonly, nonatomic) long long reason;
@property (readonly, nonatomic) BOOL stoppedUnexpectedly;
@property (readonly, nonatomic) struct __CVBuffer { } *videoPreviewPixelBuffer;
@property (readonly, nonatomic) NSDate *captureDate;
@property (readonly, nonatomic) CAMCaptureCoordinationInfo *coordinationInfo;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithURL:(id)a0 filteredLocalDestinationURL:(id)a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 stillDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 dimensions:(struct { int x0; int x1; })a4 metadata:(id)a5 videoZoomFactor:(double)a6 reason:(long long)a7 videoPreviewPixelBuffer:(struct __CVBuffer { } *)a8 coordinationInfo:(id)a9 error:(id)a10;

@end
