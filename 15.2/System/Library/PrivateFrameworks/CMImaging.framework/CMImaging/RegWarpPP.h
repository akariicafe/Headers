@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface RegWarpPP : NSObject {
    struct rwppRegistrationEngineS { struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; unsigned int x9; BOOL x10; } x0; struct { unsigned int x0; unsigned int x1; struct rwppRegistrationEngineS *x2; struct *x3; unsigned int x4; unsigned int x5; struct { unsigned int x0; struct *x1; struct *x2; struct { unsigned int x0[256]; } x3; } x6; struct { unsigned int x0; } x7; } x1[4]; struct { BOOL x0; unsigned int x1; unsigned int x2; unsigned int x3; } x2; BOOL x3; unsigned int x4; unsigned int x5; struct { char *x0[2]; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; unsigned int x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; } x6; unsigned int x7; unsigned int x8; struct { char *x0[2]; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; unsigned int x2; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; } x3; } x9[8]; struct { unsigned int x0; void /* unknown type, empty encoding */ x1[1024]; unsigned short x2[1024]; } x10[8]; struct { void /* unknown type, empty encoding */ x0[1024]; void /* unknown type, empty encoding */ x1[1024]; void /* unknown type, empty encoding */ x2[1024]; void /* unknown type, empty encoding */ x3[1024]; } x11; float x12[1024]; struct { float x0; unsigned int x1; struct { unsigned int x0; unsigned short x1[2][1024]; } x2; struct { unsigned int x0; unsigned short x1[2][1024]; } x3; struct { unsigned int x0; unsigned short x1[2][1024]; } x4; } x13; struct { unsigned char x0[256]; } x14; struct { unsigned int x0; char *x1; unsigned int x2; char *x3; struct { unsigned short x0; unsigned short x1; unsigned short x2; } x4[1024]; unsigned int x5; } x15; } *_regEng;
    BOOL _resourcesAllocated;
    BOOL _usesExternalMemory;
    NSObject<OS_dispatch_queue> *_mtQueue;
    NSObject<OS_dispatch_group> *_mtGroup;
}

+ (int)CheckParameters:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; unsigned int x9; BOOL x10; } *)a0 imageWidth:(unsigned int)a1 imageHeight:(unsigned int)a2 imageFormat:(unsigned int)a3;
+ (unsigned int)getMaxNumCorners;
+ (unsigned int)computeExternalMemoryBlockSize:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; unsigned int x9; BOOL x10; } *)a0 imageWidth:(unsigned int)a1 imageHeight:(unsigned int)a2 imageFormat:(unsigned int)a3;
+ (void)getDefaults:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; unsigned int x9; BOOL x10; } *)a0;
+ (int)convertFromImageSizeToUnity:(struct { float x0[9]; } *)a0 inMatrix:(struct { float x0[9]; } *)a1 imgWidth:(unsigned long long)a2 imgHeight:(unsigned long long)a3;
+ (int)convertFromUnityToImageSize:(struct { float x0[9]; } *)a0 inMatrix:(struct { float x0[9]; } *)a1 imgWidth:(unsigned long long)a2 imgHeight:(unsigned long long)a3;

- (void)releaseResources;
- (void).cxx_destruct;
- (void)dealloc;
- (int)processReference:(struct __CVBuffer { } *)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 numKeypoints:(unsigned int *)a2 mapping:(struct { unsigned char x0[256]; } *)a3;
- (int)processParameters:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 inputImage:(struct __CVBuffer { } *)a1;
- (void)constructPyramid:(struct __CVBuffer { } *)a0 selector:(unsigned int)a1 mapping:(struct { unsigned char x0[256]; } *)a2 level0Only:(BOOL)a3;
- (id)initWithParms:(unsigned char)a0 config:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; float x7; float x8; unsigned int x9; BOOL x10; } *)a1 dispatchQueue:(id)a2;
- (int)allocateResources:(unsigned int)a0 imageHeight:(unsigned int)a1 imageFormat:(unsigned int)a2 externalMemory:(void *)a3 externalMemorySize:(unsigned int)a4;
- (int)calculateHistEqLUT:(struct { unsigned char x0[256]; } *)a0 fromHistogram:(struct { unsigned int x0[256]; } *)a1;
- (int)calculateTotalCornerStrength:(struct __CVBuffer { } *)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 mapping:(struct { unsigned char x0[256]; } *)a2 outTotalCornerStrength:(float *)a3;
- (int)getReferenceKeypoints:(struct { float x0; float x1; float x2; } *)a0;
- (int)processNonReference:(struct __CVBuffer { } *)a0 seedTransform:(struct { float x0[9]; } *)a1 outputTransform:(struct { float x0[9]; } *)a2 mapping:(struct { unsigned char x0[256]; } *)a3;
- (int)getNonReferenceKeypoints:(struct { float x0; float x1; float x2; } *)a0;
- (int)getNormalizedPoints:(struct { struct { float x0; float x1; } x0; struct { float x0; float x1; } x1; } *)a0 numPairs:(unsigned int *)a1;

@end
