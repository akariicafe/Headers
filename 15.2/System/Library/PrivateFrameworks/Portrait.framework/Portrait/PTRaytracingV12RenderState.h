@class PTGlobalReduction, PTDisparityUpscale, NSString, PTQualitySettings;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTRaytracingV12RenderState : NSObject <PTRenderState>

@property int rayCount;
@property (retain, nonatomic) id<MTLComputePipelineState> raytracingSDOF;
@property (retain, nonatomic) id<MTLBuffer> randomUChars;
@property (retain, nonatomic) id<MTLBuffer> aperturePointsXY;
@property (retain, nonatomic) id<MTLTexture> inputRGBAPyramid;
@property (retain, nonatomic) PTDisparityUpscale *disparityUpscale;
@property (retain, nonatomic) PTGlobalReduction *globalReduction;
@property (retain, nonatomic) id<MTLBuffer> disparityGlobalMax;
@property BOOL doVisualization;
@property (retain, nonatomic) PTQualitySettings *qualitySettings;
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

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 quality:(int)a3 colorSize:(struct CGSize { double x0; double x1; })a4 disparitySize:(struct CGSize { double x0; double x1; })a5 pyramidPixelFormat:(unsigned long long)a6 config:(id)a7 debugTextures:(id)a8;

@end
