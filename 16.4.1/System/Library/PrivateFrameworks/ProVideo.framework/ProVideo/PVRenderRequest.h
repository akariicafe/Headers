@class NSArray;

@interface PVRenderRequest : NSObject

@property (readonly, nonatomic) NSArray *outputNodes;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly, nonatomic) struct CGSize { double width; double height; } outputSize;
@property (nonatomic) int priority;
@property (nonatomic) int gcdPriority;
@property (nonatomic) int gpuPriority;
@property (nonatomic) BOOL highQuality;
@property (retain, nonatomic) id userContext;
@property (nonatomic) unsigned int outputCVPixelBufferFormat;
@property (nonatomic) unsigned int parentCode;
@property (nonatomic) unsigned int childCode;

- (void).cxx_destruct;
- (id)initWithOutputs:(id)a0 atTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 outputSize:(struct CGSize { double x0; double x1; })a2;

@end
