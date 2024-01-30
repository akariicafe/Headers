@class OADColor;

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (void)setBlurRadius:(float)a0;
- (float)blurRadius;
- (float)distance;
- (void)setAngle:(float)a0;
- (void)setDistance:(float)a0;
- (id)description;
- (id)color;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (float)angle;
- (id)initWithType:(int)a0;
- (unsigned long long)hash;
- (void)setColor:(id)a0;
- (void)setStyleColor:(id)a0;
- (id)initWithShadowEffect:(id)a0 type:(int)a1;

@end
