@interface OADOuterShadowEffect : OADShadowEffect {
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (float)xSkew;
- (float)ySkew;
- (id)description;
- (void)setAlignment:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (int)alignment;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (float)xScale;
- (float)yScale;
- (void)setXScale:(float)a0;
- (void)setYScale:(float)a0;
- (void)setRotateWithShape:(BOOL)a0;
- (BOOL)rotateWithShape;
- (void)setXSkew:(float)a0;
- (void)setYSkew:(float)a0;

@end
