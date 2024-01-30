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
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void)setXScale:(float)a0;
- (void)setYScale:(float)a0;
- (float)xScale;
- (float)yScale;
- (BOOL)rotateWithShape;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setXSkew:(float)a0;
- (void)setYSkew:(float)a0;
- (float)xSkew;
- (float)ySkew;

@end
