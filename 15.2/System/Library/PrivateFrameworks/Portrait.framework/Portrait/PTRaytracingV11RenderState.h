@class PTRaytracingUtils, PTDisparityUpscale, NSString;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTRaytracingV11RenderState : NSObject <PTRenderState>

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (retain, nonatomic) id<MTLBuffer> aperturePointsXY;
@property (retain, nonatomic) id<MTLTexture> raytracedYUVRadius;
@property (retain, nonatomic) id<MTLTexture> inputLumaPyramid;
@property (retain, nonatomic) id<MTLTexture> inputChromaPyramid;
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale;
@property (retain, nonatomic) PTRaytracingUtils *raytracingUtils;
@property BOOL isAbovePreviewQuality;
@property BOOL doRayMarching;
@property BOOL doDisparityUpsampling;
@property BOOL doVisualization;
@property (readonly) int quality;
@property (nonatomic) float focalLenIn35mmFilm;
@property (nonatomic) int conversionGain;
@property (nonatomic) int readNoise_1x;
@property (nonatomic) int readNoise_8x;
@property (nonatomic) int rawSensorHeight;
@property (nonatomic) int rawSensorWidth;
@property (nonatomic) void /* unknown type, empty encoding */ visCropFactor;
@property (nonatomic) int sensorID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalSensorCrop;
@property (nonatomic) int sourceColorBitDepth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
