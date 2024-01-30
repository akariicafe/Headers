@class CAEmitterLayer;

@interface PKDynamicLayerEmitterConfiguration : NSObject <NSSecureCoding, NSCopying> {
    CAEmitterLayer *_emitterLayer;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long density;
@property (nonatomic) unsigned long long physicsEffect;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (float)_emitterBirthrate;
- (float)_emitterScaleWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (void)configureEmitterLayer:(id)a0 withImage:(struct CGImage { } *)a1;
- (void)configureEmitterLayer:(id)a0 withBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
