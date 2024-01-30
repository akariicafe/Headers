@interface MPSFColorConversion : MPSFunction {
    struct { void /* unknown type, empty encoding */ max; void /* unknown type, empty encoding */ min; } _inputRange;
    struct { void /* unknown type, empty encoding */ max; void /* unknown type, empty encoding */ min; } _outputRange;
    struct Stage { void /* function */ **x0; struct Stage *x1; } *_stageList;
}

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) unsigned long long inputColorChannels;
@property (readonly, nonatomic) unsigned long long outputColorChannels;

- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (void)dealloc;
- (struct { })effectiveRange:(struct { })a0;
- (BOOL)addGrayToRGBStage;
- (BOOL)addMatrixStage:(struct CGColorConversionIteratorData { unsigned int x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; struct CGColorTRCData **x7; struct CGColorMatrixData **x8; struct CGColorNxMTransformData **x9; })a0 stage:(long long)a1 index:(long long)a2;
- (BOOL)addNxMStage:(struct CGColorConversionIteratorData { unsigned int x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; struct CGColorTRCData **x7; struct CGColorMatrixData **x8; struct CGColorNxMTransformData **x9; })a0 stage:(long long)a1 index:(long long)a2 error:(id *)a3;
- (BOOL)addTRCStage:(struct CGColorConversionIteratorData { unsigned int x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; struct CGColorTRCData **x7; struct CGColorMatrixData **x8; struct CGColorNxMTransformData **x9; })a0 stage:(long long)a1 count:(long long)a2 trcIndices:(long long *)a3 error:(id *)a4;
- (id)descriptorFor1DTexture1;
- (id)descriptorFor3DTexture1;
- (id)descriptorFor3DTexture2;
- (const struct TRCStage { void /* function */ **x0; struct Stage *x1; unsigned long long x2; struct ChannelInfo *x3; } *)find1DTexture1Stage;
- (const struct NxMStage { void /* function */ **x0; struct Stage *x1; struct NxMData { union { struct { unsigned short *x0; unsigned long long x1; } x0; struct { float x0; float x1; float x2[4]; } x1; struct { float x0; float x1; float x2[4]; } x2; struct { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; } x1; float x2[4]; } x3; } x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; unsigned int x3; unsigned long long x4; unsigned long long x5; int x6; } x2; } *)find3dTextureStageAtIndex:(unsigned long long)a0;
- (id)functionPrototype;
- (id)initWithCoder:(id)a0 device:(id)a1 error:(id *)a2;
- (id)initWithDevice:(id)a0 conversion:(const struct CGColorConversionInfo { } *)a1 functionName:(id)a2 sourceRange:(const struct { } *)a3 options:(unsigned long long)a4 error:(id *)a5;
- (id)initWithDevice:(id)a0 startColorSpace:(struct CGColorSpace { } *)a1 endColorSpace:(struct CGColorSpace { } *)a2 functionName:(id)a3 sourceRange:(const struct { } *)a4 options:(unsigned long long)a5 error:(id *)a6;
- (void)initialize1DTexture1:(id)a0;
- (void)initialize3DTexture1:(id)a0;
- (void)initialize3DTexture2:(id)a0;
- (id)newDAGUsingFunctionList:(id)a0;
- (id)newSubroutineListWithError:(id *)a0;
- (void)optimizeStages;

@end
