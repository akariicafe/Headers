@protocol MTLLibrary, MTLDeviceSPI, MTLComputePipelineState;

@interface PTColor : NSObject {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _defaultLibrary;
    id<MTLComputePipelineState> _convertRGB[9];
    id<MTLComputePipelineState> _convertYUV[2][9];
    id<MTLComputePipelineState> _convertYUVPyramid[2][9];
    id<MTLComputePipelineState> _convertRGBToYUV[9];
    id<MTLComputePipelineState> _convertYUVPyramidFromRGB[9];
    id<MTLComputePipelineState> _convertYUVToRGB[9];
    id<MTLComputePipelineState> _convertRGBPyramid[9];
    id<MTLComputePipelineState> _convertRGBPyramidFromYUV[9];
}

+ (int)getColorMatrix:(id)a0;
+ (int)getColorTransferFunction:(id)a0 linearToEncoded:(BOOL)a1;
+ (struct { void /* unknown type, empty encoding */ x0[4]; })colorMatrixAndBiasFor:(int)a0 toRGB:(BOOL)a1 fullRange:(BOOL)a2 colorYCbCrDepth:(int)a3;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2;
- (int)convertYUVLinearFromSource:(id)a0 renderRequest:(id)a1 outLuma:(id)a2 outChroma:(id)a3;
- (int)convertYUVLinearToDestination:(id)a0 renderRequest:(id)a1 inLuma:(id)a2 inChroma:(id)a3;
- (int)convertYUVtoRGB:(id)a0 inLuma:(id)a1 inChroma:(id)a2 outRGBA:(id)a3 colorTransferFunction:(int)a4 colorYCbCrMatrix:(int)a5 colorYCbCrFullRange:(BOOL)a6 colorYCbCrDepthIn:(int)a7;
- (int)convertRGBLinearFromSource:(id)a0 renderRequest:(id)a1 outRGBA:(id)a2;
- (int)convertRGBPyramidFromSource:(id)a0 renderRequest:(id)a1 rgbaPyramidArray:(id)a2;
- (int)convertRGBLinearToDestination:(id)a0 renderRequest:(id)a1 inRGBA:(id)a2;
- (int)convertRGBPyramidFromSource:(id)a0 renderRequest:(id)a1 rgbaPyramidArray:(id)a2 skipLevel0:(BOOL)a3;
- (int)convertYUVPyramidFromSource:(id)a0 renderRequest:(id)a1 lumaPyramidArray:(id)a2 chromaPyramidArray:(id)a3 outDownscaleX2RGBA:(id)a4;
- (int)convertRGB:(id)a0 inRGBA:(id)a1 outRGBA:(id)a2 colorTransferFunction:(int)a3 rotateCCW:(BOOL)a4;
- (int)convertRGBPyramid:(id)a0 inRGBA:(id)a1 rgbaPyramidArray:(id)a2 colorTransferFunction:(int)a3 skipLevel0:(BOOL)a4;
- (int)convertRGBPyramidFromYUV:(id)a0 inLuma:(id)a1 inChroma:(id)a2 rgbaPyramidArray:(id)a3 colorTransferFunction:(int)a4 colorYCbCrMatrix:(int)a5 colorYCbCrFullRangeIn:(BOOL)a6 colorYCbCrDepthIn:(int)a7 skipLevel0:(BOOL)a8;
- (int)convertYUVPyramidFromRGB:(id)a0 inRGBA:(id)a1 lumaPyramidArray:(id)a2 chromaPyramidArray:(id)a3 outDownscaleX2RGBA:(id)a4 colorTransferFunction:(int)a5 colorYCbCrMatrix:(int)a6 colorYCbCrFullRange:(BOOL)a7 colorYCbCrDepthOut:(int)a8;
- (int)convertYUVPyramid:(id)a0 inLuma:(id)a1 inChroma:(id)a2 lumaPyramidArray:(id)a3 chromaPyramidArray:(id)a4 outDownscaleX2RGBA:(id)a5 colorTransferFunction:(int)a6 colorYCbCrMatrix:(int)a7 colorYCbCrFullRange:(BOOL)a8 colorYCbCrDepthIn:(int)a9 colorYCbCrDepthOut:(int)a10;
- (int)convertRGB:(id)a0 inRGBA:(id)a1 outRGBA:(id)a2 colorTransferFunction:(int)a3;
- (int)convertRGBtoYUV:(id)a0 inRGBA:(id)a1 outLuma:(id)a2 outChroma:(id)a3 colorTransferFunction:(int)a4 colorYCbCrMatrix:(int)a5 colorYCbCrFullRange:(BOOL)a6 colorYCbCrDepthOut:(int)a7;
- (int)convertYUV:(id)a0 inLuma:(id)a1 inChroma:(id)a2 outLuma:(id)a3 outChroma:(id)a4 colorTransferFunction:(int)a5 colorYCbCrMatrix:(int)a6 colorYCbCrFullRange:(BOOL)a7 colorYCbCrDepthIn:(int)a8 colorYCbCrDepthOut:(int)a9;
- (int)convertRGBPyramid:(id)a0 inRGBA:(id)a1 rgbaPyramidArray:(id)a2 colorTransferFunction:(int)a3;
- (int)convertRGBPyramidFromYUV:(id)a0 inLuma:(id)a1 inChroma:(id)a2 rgbaPyramidArray:(id)a3 colorTransferFunction:(int)a4 colorYCbCrMatrix:(int)a5 colorYCbCrFullRangeIn:(BOOL)a6 colorYCbCrDepthIn:(int)a7;

@end
