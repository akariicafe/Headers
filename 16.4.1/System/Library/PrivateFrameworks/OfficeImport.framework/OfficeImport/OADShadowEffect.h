@class OADColor;

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (void)setDistance:(float)a0;
- (float)distance;
- (void)setBlurRadius:(float)a0;
- (id)color;
- (id)initWithType:(int)a0;
- (float)angle;
- (BOOL)isEqual:(id)a0;
- (void)setColor:(id)a0;
- (unsigned long long)hash;
- (float)blurRadius;
- (id)description;
- (void).cxx_destruct;
- (void)setAngle:(float)a0;
- (id)initWithShadowEffect:(id)a0 type:(int)a1;
- (void)setStyleColor:(id)a0;

@end
