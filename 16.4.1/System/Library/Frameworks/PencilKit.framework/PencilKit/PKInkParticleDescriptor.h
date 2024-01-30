@class NSString;

@interface PKInkParticleDescriptor : NSObject {
    double _dynamicStep;
    struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction *__value_; } __ptr_; } _particleSpacingFunction;
}

@property (copy, nonatomic) NSString *textureName;
@property (retain, nonatomic) struct CGImage { } *textureImage;
@property (copy, nonatomic) NSString *maskTextureName;
@property (retain, nonatomic) struct CGImage { } *maskTextureImage;
@property (nonatomic) double particleSpacing;
@property (nonatomic) long long particleCount;
@property (nonatomic) struct CGSize { double width; double height; } particleSize;
@property (nonatomic) double maskScale;
@property (nonatomic) double maskMovement;
@property (nonatomic) unsigned long long particleRotation;
@property (nonatomic) BOOL initialRandomRotation;
@property (nonatomic) unsigned long long particleBlendMode;
@property (nonatomic) double maskDepth;
@property (nonatomic) BOOL maskInitialRandomOffset;
@property (nonatomic, getter=adjustEndCapParticleAlpha, setter=setAdjustEndCapParticleAlpha:) BOOL adjustEndCapParticleAlpha;

+ (id)arrayFromVector:(struct vector<double, std::allocator<double>> { double *x0; double *x1; struct __compressed_pair<double *, std::allocator<double>> { double *x0; } x2; })a0;
+ (id)particleDescriptorWithName:(id)a0 particleSpacing:(double)a1 particleCount:(long long)a2 particleSize:(struct CGSize { double x0; double x1; })a3 particleRotation:(unsigned long long)a4;
+ (id)particleDescriptorWithName:(id)a0 texture:(struct CGImage { } *)a1 particleSpacing:(double)a2 particleCount:(long long)a3 particleSize:(struct CGSize { double x0; double x1; })a4 particleRotation:(unsigned long long)a5;

- (id).cxx_construct;
- (id)mutableCopy;
- (void).cxx_destruct;
- (void)setDynamicStep:(double)a0;
- (double)dynamicStep;
- (id)initWithTextureName:(id)a0 textureImage:(struct CGImage { } *)a1 maskTextureName:(id)a2 maskTextureImage:(struct CGImage { } *)a3 particleSpacing:(double)a4 particleCount:(long long)a5 particleSize:(struct CGSize { double x0; double x1; })a6 particleRotation:(unsigned long long)a7 maskScale:(double)a8 maskMovement:(double)a9 maskDepth:(double)a10 initialRandomRotation:(BOOL)a11 maskInitialRandomOffset:(BOOL)a12 adjustEndCapParticleAlpha:(BOOL)a13 particleBlendMode:(unsigned long long)a14;
- (double)particleSpacingForRadius:(double)a0;
- (void *)particleSpacingFunction;
- (id)particleSpacingInkFunction;
- (void)setParticleSpacingFunction:(struct unique_ptr<PKFunction, std::default_delete<PKFunction>> { struct __compressed_pair<PKFunction *, std::default_delete<PKFunction>> { struct PKFunction *x0; } x0; })a0;
- (void)setParticleSpacingInkFunction:(id)a0;

@end
