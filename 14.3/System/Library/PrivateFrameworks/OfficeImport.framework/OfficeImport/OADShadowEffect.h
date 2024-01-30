@class OADColor;

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}

- (float)angle;
- (float)blurRadius;
- (float)distance;
- (void)setBlurRadius:(float)a0;
- (void).cxx_destruct;
- (void)setDistance:(float)a0;
- (unsigned long long)hash;
- (void)setAngle:(float)a0;
- (id)initWithType:(int)a0;
- (id)color;
- (id)description;
- (void)setColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)setStyleColor:(id)a0;
- (id)initWithShadowEffect:(id)a0 type:(int)a1;

@end
