@class NSString;

@interface PKInkParticleDescriptor : NSObject {
    BOOL _adjustEndCapParticleAlpha;
    double _dynamicStep;
    struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction *__value_; } __ptr_; } _particleSpacingFunction;
}

@property (copy, nonatomic) NSString *textureName;
@property (retain, nonatomic) struct CGImage { } *textureImage;
@property (nonatomic) double particleSpacing;
@property (nonatomic) long long particleCount;
@property (nonatomic) struct CGSize { double width; double height; } particleSize;
@property (nonatomic) unsigned long long particleRotation;

+ (id)arrayFromVector:(struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; })a0;
+ (id)particleDescriptorWithName:(id)a0 particleSpacing:(double)a1 particleCount:(long long)a2 particleSize:(struct CGSize { double x0; double x1; })a3 particleRotation:(unsigned long long)a4;
+ (id)particleDescriptorWithName:(id)a0 texture:(struct CGImage { } *)a1 particleSpacing:(double)a2 particleCount:(long long)a3 particleSize:(struct CGSize { double x0; double x1; })a4 particleRotation:(unsigned long long)a5;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setParticleSpacingFunction:(struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction *x0; } x0; })a0;
- (struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction> > { struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction> > { struct PKFunction *x0; } x0; } *)particleSpacingFunction;
- (id)particleSpacingInkFunction;
- (void)setParticleSpacingInkFunction:(id)a0;
- (BOOL)adjustEndCapParticleAlpha;
- (void)setAdjustEndCapParticleAlpha:(BOOL)a0;
- (void)setDynamicStep:(double)a0;
- (double)dynamicStep;

@end
