@interface OADReflectionEffect : OADEffect {
    float mBlurRadius;
    float mStartOpacity;
    float mStartPosition;
    float mEndOpacity;
    float mEndPosition;
    float mDistance;
    float mDirection;
    float mFadeDirection;
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (void)setDistance:(float)a0;
- (float)distance;
- (float)direction;
- (void)setDirection:(float)a0;
- (void)setBlurRadius:(float)a0;
- (int)alignment;
- (void)setAlignment:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (float)blurRadius;
- (id)init;
- (id)description;
- (float)endPosition;
- (void)setStartPosition:(float)a0;
- (float)startPosition;
- (void)setXScale:(float)a0;
- (void)setYScale:(float)a0;
- (float)xScale;
- (float)yScale;
- (void)setEndPosition:(float)a0;
- (BOOL)rotateWithShape;
- (float)endOpacity;
- (float)fadeDirection;
- (void)setEndOpacity:(float)a0;
- (void)setFadeDirection:(float)a0;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setStartOpacity:(float)a0;
- (void)setStyleColor:(id)a0;
- (void)setXSkew:(float)a0;
- (void)setYSkew:(float)a0;
- (float)startOpacity;
- (float)xSkew;
- (float)ySkew;

@end
