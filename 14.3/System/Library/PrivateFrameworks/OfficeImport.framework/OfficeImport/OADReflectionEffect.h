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

- (float)blurRadius;
- (int)alignment;
- (void)setAlignment:(int)a0;
- (float)distance;
- (void)setDirection:(float)a0;
- (id)init;
- (void)setBlurRadius:(float)a0;
- (float)direction;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)endPosition;
- (void)setDistance:(float)a0;
- (float)xSkew;
- (float)ySkew;
- (unsigned long long)hash;
- (float)xScale;
- (float)yScale;
- (float)startPosition;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setStartPosition:(float)a0;
- (void)setEndPosition:(float)a0;
- (void)setXScale:(float)a0;
- (void)setYScale:(float)a0;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setStyleColor:(id)a0;
- (BOOL)rotateWithShape;
- (void)setXSkew:(float)a0;
- (void)setYSkew:(float)a0;
- (float)startOpacity;
- (float)endOpacity;
- (float)fadeDirection;
- (void)setStartOpacity:(float)a0;
- (void)setEndOpacity:(float)a0;
- (void)setFadeDirection:(float)a0;

@end
