@class NSString;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTRaytracingV10RenderState : NSObject <PTRenderState>

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingInterpolateLuma;
@property (retain, nonatomic) id<MTLBuffer> aperturePointsXY;
@property (retain, nonatomic) id<MTLTexture> lumaRadiusTexture;
@property (retain, nonatomic) id<MTLTexture> inputLumaPyramid;
@property (retain, nonatomic) id<MTLTexture> inputChromaPyramid;
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
