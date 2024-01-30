@interface MDLSkyCubeTexture : MDLTexture {
    float _highDynamicRangeCompressionLimit;
    struct CGColor { } *_groundColor;
    struct SkyDescriptor { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; struct Detail *x18; unsigned int x19; unsigned int x20; float x21; float x22; float x23; float x24; void *x25; } *_sky;
}

@property (nonatomic) float turbidity;
@property (nonatomic) float sunElevation;
@property (nonatomic) float sunAzimuth;
@property (nonatomic) float upperAtmosphereScattering;
@property (nonatomic) float groundAlbedo;
@property (nonatomic) float horizonElevation;
@property (nonatomic) struct CGColor { } *groundColor;
@property (nonatomic) float gamma;
@property (nonatomic) float exposure;
@property (nonatomic) float brightness;
@property (nonatomic) float contrast;
@property (nonatomic) float saturation;
@property (nonatomic) void /* unknown type, empty encoding */ highDynamicRangeCompression;

- (void)updateTexture;
- (void)dealloc;
- (id)initWithName:(SEL)a0 channelEncoding:(id)a1 textureDimensions:(long long)a2 turbidity:(float)a3 sunElevation:(float)a4 sunAzimuth:(float)a5 upperAtmosphereScattering:(float)a6 groundAlbedo:(float)a7;
- (id)initWithName:(SEL)a0 channelEncoding:(id)a1 textureDimensions:(long long)a2 turbidity:(float)a3 sunElevation:(float)a4 upperAtmosphereScattering:(float)a5 groundAlbedo:(float)a6;

@end
