@class VCPCNNMetalContext, NSMutableArray, MPSImage;

@interface VCPCNNData : NSObject

@property (retain) NSMutableArray *size;
@property float *data;
@property BOOL isInputOutput;
@property (retain) MPSImage *mpsImg;
@property (weak) VCPCNNMetalContext *context;

+ (id)cnnData;
+ (Class)cnnDataClass;
+ (id)cnnDataWithGPUContext:(id)a0;
+ (id)cnnDataWithPlane:(int)a0 height:(int)a1 width:(int)a2 context:(id)a3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)normalization;
- (int)softmax;
- (int)allocBuffers:(BOOL)a0;
- (int)bufferAllocCPU;
- (int)convertCPUData2GPU;
- (int)convertGPUData2CPU;
- (int)copyImage:(struct __CVBuffer { } *)a0 withChunk:(int)a1;
- (id)initWithGPUContext:(id)a0;
- (id)initWithParameters:(int)a0 height:(int)a1 width:(int)a2 context:(id)a3;
- (int)randInit;
- (int)readFromDisk:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0 quantFactor:(short)a1;
- (int)reallocGPUTemporalBuffers;

@end
