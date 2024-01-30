@class PXGMetalRenderContext;
@protocol MTLTexture, MTLBuffer;

@interface PXGColorProgram : NSObject {
    unsigned int _num_trc_luts;
    unsigned int *_trc_lut_widths;
}

@property (readonly, nonatomic) BOOL needsHDRToSDRConversion;
@property (readonly, nonatomic) PXGMetalRenderContext *metalRenderContext;
@property (readonly, nonatomic) struct CGColorSpace { } *sourceColorSpace;
@property (readonly, nonatomic) struct CGColorSpace { } *destinationColorSpace;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) unsigned int opcodes;
@property (readonly, nonatomic) unsigned short numInputs;
@property (readonly, nonatomic) unsigned short paramCount;
@property (readonly, nonatomic) id<MTLBuffer> params;
@property (readonly, nonatomic) id<MTLTexture> TRCLUTs;
@property (readonly, nonatomic) id<MTLTexture> colorCube;

- (id)diagnosticDescription;
- (BOOL)_compactProgramWithConversionInfo:(struct CGColorConversionInfo { } *)a0 cubeSize:(int)a1 cubeOnly:(BOOL)a2;
- (id)initWithContext:(id)a0 sourceColorSpace:(struct CGColorSpace { } *)a1 destinationColorSpace:(struct CGColorSpace { } *)a2 flags:(unsigned long long)a3;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_generateProgram;

@end
