@class OADColor;

@interface OADGlowEffect : OADEffect {
    OADColor *mColor;
    float mRadius;
}

- (float)radius;
- (void)setRadius:(float)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)color;
- (id)description;
- (void)setColor:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
