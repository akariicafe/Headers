@class VCPCNNData, VCPCNNModel;

@interface VCPLandmarkValidator : NSObject {
    VCPCNNModel *_model;
    VCPCNNData *_input;
    float *_transArray;
    float *_meanLandmarkLoc;
    char *_triIndexMap;
    unsigned char _numTri;
    char *_triList;
}

@property float *orientation;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithModelFile:(id)a0 paramFile:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 numTri:(unsigned char)a2 triList:(char *)a3 angle:(float *)a4;
- (int)validateOneImage:(struct __CVBuffer { } *)a0 landmarks:(float *)a1 numofLandmarks:(int)a2 score:(float *)a3;

@end
