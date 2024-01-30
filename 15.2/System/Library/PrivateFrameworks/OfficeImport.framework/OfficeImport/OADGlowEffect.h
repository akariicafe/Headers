@class OADColor;

@interface OADGlowEffect : OADEffect {
    OADColor *mColor;
    float mRadius;
}

- (float)radius;
- (id)description;
- (id)color;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRadius:(float)a0;
- (unsigned long long)hash;
- (void)setColor:(id)a0;

@end
