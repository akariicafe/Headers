@class SoftISPStaticParameters, FigMetalContext, QDEMTuningParams, H13FastDemosaicConfigMetal, H13FastDemosaicShaders, ZimmerDEMTuningParams;
@protocol MTLBuffer;

@interface H13FastDemosaicStageMetal : NSObject {
    SoftISPStaticParameters *_staticParameters;
    H13FastDemosaicConfigMetal *_h13FastConfig;
    id<MTLBuffer> _noiseSuppressStrengthBuffer;
    id<MTLBuffer> _adaptiveGradPushDBuffer;
    id<MTLBuffer> _adaptiveGradPushHVBuffer;
}

@property (readonly, nonatomic) H13FastDemosaicShaders *shaders;
@property (retain, nonatomic) FigMetalContext *metal;
@property (retain, nonatomic) QDEMTuningParams *qdemTuningParams;
@property (retain, nonatomic) ZimmerDEMTuningParams *zimmerDEMTuningParams;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)convertRGBToYUV:(id)a0 demosaicConfig:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; struct { void /* unknown type, empty encoding */ x0[3]; } x4; int x5; BOOL x6; unsigned short x7; } *)a1 outputTexY:(id)a2 outputTexUV:(id)a3 commandBuffer:(id)a4;
- (int)convertRGBToYUV:(id)a0 inputMetadata:(id)a1 zeroBias:(int)a2 cameraInfoByPortType:(id)a3 outputTexY:(id)a4 outputTexUV:(id)a5;
- (id)createIntermediateMetalTexture:(id)a0 pixelFormat:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3;
- (int)runQuadraWithInputTex:(SEL)a0 demosaicConfig:(id)a1 outputRGBATex:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; struct { void /* unknown type, empty encoding */ x0[3]; } x4; int x5; BOOL x6; unsigned short x7; } *)a2 outputLumaTex:(id)a3 outputChromaTex:(id)a4 outputRGB:(id)a5 outputSize:(BOOL)a6 commandBuffer:(id)a7;
- (int)runWithInputTex:(SEL)a0 demosaicConfig:(id)a1 outputRGBATex:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; struct { void /* unknown type, empty encoding */ x0[3]; } x4; int x5; BOOL x6; unsigned short x7; } *)a2 outputSize:(id)a3;
- (int)runWithInputTex:(SEL)a0 demosaicConfig:(id)a1 outputSize:(struct { unsigned char x0; unsigned char x1; unsigned char x2; unsigned char x3; struct { void /* unknown type, empty encoding */ x0[3]; } x4; int x5; BOOL x6; unsigned short x7; } *)a2 outputTexY:(id)a3 outputTexUV:(id)a4 commandBuffer:(id)a5;
- (int)runWithInputTex:(id)a0 inputCropRect:(struct { union { struct { int x0; int x1; } x0; } x0; union { struct { unsigned int x0; unsigned int x1; } x0; } x1; })a1 inputMetadata:(id)a2 firstPix:(int)a3 zeroBias:(int)a4 cfaLayout:(int)a5 cameraInfoByPortType:(id)a6 outputRGBATex:(id)a7 outputCropRect:(struct { union { struct { int x0; int x1; } x0; } x0; union { struct { unsigned int x0; unsigned int x1; } x0; } x1; })a8;

@end
