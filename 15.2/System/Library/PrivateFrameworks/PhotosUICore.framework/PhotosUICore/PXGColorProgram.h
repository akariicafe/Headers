@protocol MTLTexture, MTLDevice, MTLBuffer;

@interface PXGColorProgram : NSObject {
    unsigned int _num_trc_luts;
    unsigned int *_trc_lut_widths;
}

@property (readonly, nonatomic) BOOL needsHDRToSDRConversion;
@property (readonly, nonatomic) id<MTLDevice> device;
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
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDevice:(id)a0 sourceColorSpace:(struct CGColorSpace { } *)a1 destinationColorSpace:(struct CGColorSpace { } *)a2 flags:(unsigned long long)a3;
- (void)dealloc;
- (BOOL)_generateProgram;
- (BOOL)_compactProgramWithConversionInfo:(struct CGColorConversionInfo { } *)a0 cubeSize:(int)a1 cubeOnly:(BOOL)a2;

@end
