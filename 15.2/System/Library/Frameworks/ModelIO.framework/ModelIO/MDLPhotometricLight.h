@class NSData, MDLTexture, NSMutableData;

@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight {
    void *_iesLight;
    NSMutableData *_sphericalHarmonicsCoefficients;
}

@property (readonly, retain, nonatomic) MDLTexture *lightCubeMap;
@property (readonly, nonatomic) unsigned long long sphericalHarmonicsLevel;
@property (readonly, copy, nonatomic) NSData *sphericalHarmonicsCoefficients;

- (void).cxx_destruct;
- (id)initWithIESProfile:(id)a0;
- (void)generateCubemapFromLight:(unsigned long long)a0;
- (void)generateSphericalHarmonicsFromLight:(unsigned long long)a0;
- (void)computeLumens;
- (float)computeInnerAngle;
- (id)generateTexture:(unsigned long long)a0;
- (void)setSphericalHarmonicsCoefficients:(id)a0;
- (id)computeSceneKitRenderingTexture:(unsigned long long)a0;
- (struct CGColor { } *)evaluatedColorFromSHVector:(SEL)a0;

@end
