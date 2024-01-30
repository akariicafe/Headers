@class NSString;
@protocol MTLComputePipelineState, MTLBuffer;

@interface PTRaytracingV2RenderState : NSObject <PTRenderState>

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingVisualizeIntersection;
@property (retain, nonatomic) id<MTLComputePipelineState> antialiasRGB;
@property (copy, nonatomic) NSString *description;
@property (retain, nonatomic) id<MTLBuffer> aperturePoints;
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
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorSize:(struct CGSize { double x0; double x1; })a1 quality:(int)a2 library:(id)a3 pipelineLibrary:(id)a4;

@end
