@class FigMetalContext;
@protocol MTLComputePipelineState, MTLTexture;

@interface Demosaic : NSObject {
    id<MTLComputePipelineState> _pipelineStates[3];
    FigMetalContext *_metalContext;
    struct { unsigned int sensorBlack; unsigned int sensorWhite; unsigned int outputOffsetY; unsigned int outputSizeY; float sensorAGC; float noiseE1x8x[2]; float readnoiseStdE; float gatScale; float gatBias; float gatBlackNormalized; float gatWhite; float sensorGain; float expIspGain; float expAwbRgb[3]; unsigned int scaleRawTo16bits; float sensorGainCeilingToFullRange; float scaleSashimi; unsigned int rawSensorWidth; unsigned int rawSensorHeight; void /* unknown type, empty encoding */ lscSampingOffset; void /* unknown type, empty encoding */ lscSampingRatio; int bayerFormat; } _metadataParameters;
    id<MTLTexture> _lscGainsTex;
}

@property (nonatomic) unsigned int outputImageHeight;
@property (nonatomic) float gatNoiseStdInFullResolution;
@property (nonatomic) float tuningNoiseProcessingScale;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)_compileShaders;
- (int)fillLSCGainsTextureFrom:(struct { int x0; union { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; float x10[0]; } x0; } x1; } *)a0;
- (int)demosaic2x:(id)a0 rawImagePixelFormat:(unsigned int)a1 toLuma:(id)a2 toRGBA:(id)a3;
- (int)resampleLuma:(id)a0 toLuma:(id)a1 magnification:(float)a2;
- (int)downscaleRGBA:(SEL)a0 toRGBA:(id)a1 scalingFactor:(id)a2 commandBuffer:(id)a3;
- (int)preProcessMetadata:(id)a0 cameraInfoByPortType:(id)a1;

@end
