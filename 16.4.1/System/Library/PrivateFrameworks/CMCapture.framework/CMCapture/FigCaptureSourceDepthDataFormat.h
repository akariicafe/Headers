@interface FigCaptureSourceDepthDataFormat : FigCaptureSourceFormat

@property (readonly) float fieldOfView;

- (BOOL)isStillImageOnlyDepthData;
- (id)copyWithNewPixelFormat:(unsigned int)a0;
- (id)highResStillImageDimensions;
- (BOOL)gainMapSupported;
- (unsigned int)mediaType;
- (struct { int x0; int x1; })depthEngineOutputDimensions;
- (BOOL)RGBIRStereoFusionSupported;

@end
