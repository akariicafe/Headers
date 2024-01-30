@protocol MTLComputePipelineState, MTLDeviceSPI;

@interface PTColor : NSObject {
    id<MTLDeviceSPI> _device;
    id<MTLComputePipelineState> _convertRGB[9];
    id<MTLComputePipelineState> _convertRGBToYUV[9];
    id<MTLComputePipelineState> _convertYUVToRGB[9];
}

+ (int)getColorMatrix:(id)a0;
+ (struct half3x4 { struct half4 { void /* unknown type, blank encoding */ x0[4]; } x0[3]; })colorMatrixAndBiasFor:(int)a0 toRGB:(BOOL)a1 fullRange:(BOOL)a2 colorYCbCrDepth:(int)a3;
+ (struct half3x4 { struct half4 { void /* unknown type, blank encoding */ x0[4]; } x0[3]; })float4x4ToHalf3x4:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
+ (struct bool2 { BOOL x0; BOOL x1; })getChromaFactor2BooleanFromPTTexture:(id)a0;
+ (void /* unknown type, empty encoding */)getChromaOffsetFromPTTexture:(id)a0;
+ (int)getColorTransferFunction:(id)a0 linearToEncoded:(BOOL)a1;

- (void).cxx_destruct;
- (int)convertRGB:(id)a0 inRGBA:(id)a1 outRGBA:(id)a2 colorTransferFunction:(int)a3;
- (int)convertRGB:(id)a0 inRGBA:(id)a1 outRGBA:(id)a2 colorTransferFunction:(int)a3 rotateCCW:(BOOL)a4;
- (int)convertRGBLinearFromPTTexture:(id)a0 inPTTexture:(id)a1 outRGBA:(id)a2;
- (int)convertRGBLinearToPTTexture:(id)a0 inRGBA:(id)a1 outPTTexture:(id)a2;
- (int)convertRGBtoYUV:(id)a0 inRGBA:(id)a1 outLuma:(id)a2 outChroma:(id)a3 colorTransferFunction:(int)a4 colorYCbCrMatrix:(int)a5 colorYCbCrFullRange:(BOOL)a6 colorYCbCrDepthOut:(int)a7;
- (int)convertYUVtoRGB:(id)a0 inLuma:(id)a1 inChroma:(id)a2 outRGBA:(id)a3 colorTransferFunction:(int)a4 colorYCbCrMatrix:(int)a5 colorYCbCrFullRange:(BOOL)a6 colorYCbCrDepthIn:(int)a7;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2;

@end
