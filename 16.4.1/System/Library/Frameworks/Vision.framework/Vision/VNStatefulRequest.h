@class NSUUID;

@interface VNStatefulRequest : VNImageBasedRequest

@property (readonly) NSUUID *requestUUID;
@property (readonly) long long minimumLatencyFrameCount;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } frameAnalysisSpacing;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } requestFrameAnalysisSpacing;

+ (Class)configurationClass;

- (id)description;
- (id)initWithFrameAnalysisSpacing:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 completionHandler:(id /* block */)a1;
- (id)newDefaultRequestInstance;

@end
