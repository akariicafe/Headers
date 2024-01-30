@class NSArray, MPSKernel;
@protocol MTLTexture, MTLBuffer;

@interface ORBExtractionIntermediateBuffers : NSObject

@property (retain) MPSKernel *mpsFindKeypoints;
@property (retain) MPSKernel *mpsHistogram;
@property (retain) id<MTLBuffer> rectRegionsBuffer;
@property (retain) id<MTLBuffer> rectRegionCount;
@property (retain) id<MTLBuffer> rectRegionsDesiredKeypoints;
@property (retain) id<MTLBuffer> thresholdRangeBuffer;
@property (copy) NSArray *rectRegions;
@property int maxKeypointsPerRegion;
@property (retain) id<MTLTexture> gaussianBlurredTexture_RGBA8Uint;
@property (retain) id<MTLTexture> gaussianBlurredTexture_R8Uint;
@property (retain) id<MTLTexture> gaussianBlurredTexture_R8Unorm;
@property (retain) id<MTLTexture> responseTexture;
@property (retain) id<MTLTexture> suppressedResponseTexture_RGBA8Uint;
@property (retain) id<MTLTexture> suppressedResponseTexture_R8Uint;
@property (retain) id<MTLTexture> suppressedResponseTexture_R8Unorm;
@property (retain) id<MTLTexture> boxBlurredTexture_R8Uint;
@property (retain) id<MTLTexture> boxBlurredTexture_RGBA8Uint;
@property (retain) id<MTLBuffer> thresholdsBuffer;
@property (retain) id<MTLBuffer> histogramsBuffer;
@property (retain) id<MTLBuffer> countOfKeypointsPerRegion;
@property (retain) id<MTLBuffer> cumulativeCountOfKeypointsPerRegion;
@property (retain) id<MTLBuffer> truncatedRegionsBuffer;
@property (retain) id<MTLBuffer> compactKeypointsBuffer;
@property (retain) id<MTLBuffer> refinedKeypointsBuffer;
@property (retain) id<MTLBuffer> compactKeypointsAndResponsesBuffer;
@property (retain) id<MTLBuffer> responseBuffer;
@property (retain) id<MTLBuffer> descriptorBuffer;
@property (retain) id<MTLBuffer> keypointCountBuffer;
@property (retain) id<MTLBuffer> mpsRegionStrideBuffer;
@property (retain) id<MTLBuffer> refinementIntermediatesBuffer;
@property unsigned int maxRegionHeight;
@property unsigned int countOfRectRegions;
@property unsigned long long maxDescriptorCount;

- (void).cxx_destruct;
- (void)_reinitializeIntermediateBuffersWithDevice:(id)a0 templateImage:(struct __CVBuffer { } *)a1 rectRegions:(id)a2 maxKeypointsPerRegion:(int)a3 minKeypointResponseThreshold:(float)a4;
- (id)initWithDevice:(id)a0 templateImage:(struct __CVBuffer { } *)a1 rectRegions:(id)a2 maxKeypointsPerRegion:(int)a3 minKeypointResponseThreshold:(float)a4;

@end
