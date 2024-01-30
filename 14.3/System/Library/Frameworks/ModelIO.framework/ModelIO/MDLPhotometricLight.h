@class NSData, MDLTexture, NSMutableData;

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight {
    struct RTIESLight { void /* function */ **x0; struct CGColor *x1; id x2; int x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; struct IESData { int x0; int x1; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x2; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x3; struct vector<float, std::__1::allocator<float> > { float *x0; float *x1; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x0; } x2; } x4; float x5; float x6; float x7; } x11; float x12; } *_iesLight;
    NSMutableData *_sphericalHarmonicsCoefficients;
}

@property (readonly, retain, nonatomic) MDLTexture *lightCubeMap;
@property (readonly, nonatomic) unsigned long long sphericalHarmonicsLevel;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;

- (void).cxx_destruct;
- (id)generateTexture:(unsigned long long)a0;
- (id)initWithIESProfile:(id)a0;
- (void)generateCubemapFromLight:(unsigned long long)a0;
- (void)generateSphericalHarmonicsFromLight:(unsigned long long)a0;
- (void)computeLumens;
- (float)computeInnerAngle;
- (void)setSphericalHarmonicsCoefficients:(id)a0;
- (id)computeSceneKitRenderingTexture:(unsigned long long)a0;
- (struct CGColor { } *)evaluatedColorFromSHVector:(SEL)a0;

@end
