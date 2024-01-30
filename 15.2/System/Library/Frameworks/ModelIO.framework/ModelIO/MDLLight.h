@class NSString;

@interface MDLLight : MDLObject {
    struct RTLight { void /* function */ **x0; struct CGColor *x1; id x2; int x3; } *_light;
    NSString *_colorSpace;
    struct CGColorSpace { } *_cgColorSpace;
}

@property (nonatomic) unsigned long long lightType;
@property (copy, nonatomic) NSString *colorSpace;

- (void /* unknown type, empty encoding */)position;
- (void).cxx_destruct;
- (id)init;
- (struct RTLight { void /* function */ **x0; struct CGColor *x1; id x2; int x3; } *)rtLight;
- (void)dealloc;
- (void)setTransform:(id)a0;
- (struct CGColor { } *)irradianceAtPoint:(SEL)a0;
- (struct CGColor { } *)irradianceAtPoint:(SEL)a0 colorSpace:(struct CGColorSpace { } *)a1;

@end
