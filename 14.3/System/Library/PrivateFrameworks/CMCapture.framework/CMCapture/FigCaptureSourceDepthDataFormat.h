@class NSArray;

@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) struct { int x0; int x1; } dimensions;
@property (readonly) float minSupportedFrameRate;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) float fieldOfView;
@property (readonly) struct { int x0; int x1; } highResStillImageDimensions;
@property (readonly, getter=isStillImageOnlyDepthData) BOOL stillImageOnlyDepthData;
@property (readonly) float portraitEffectsMatteMainImageDownscalingFactor;
@property (readonly) BOOL RGBIRStereoFusionSupported;
@property (readonly) NSArray *supportedSemanticSegmentationMatteURNs;

- (struct opaqueCMFormatDescription { } *)formatDescription;
- (unsigned int)mediaType;
- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (struct { int x0; int x1; })depthEngineOutputDimensions;

@end
