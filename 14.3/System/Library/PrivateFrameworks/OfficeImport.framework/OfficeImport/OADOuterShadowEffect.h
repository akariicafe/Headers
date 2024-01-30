@interface OADOuterShadowEffect : OADShadowEffect {
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (int)alignment;
- (void)setAlignment:(int)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)xSkew;
- (float)ySkew;
- (unsigned long long)hash;
- (float)xScale;
- (float)yScale;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setXScale:(float)a0;
- (void)setYScale:(float)a0;
- (void)setRotateWithShape:(BOOL)a0;
- (BOOL)rotateWithShape;
- (void)setXSkew:(float)a0;
- (void)setYSkew:(float)a0;

@end
