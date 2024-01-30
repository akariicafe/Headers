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

- (void)setDirection:(float)a0;
- (void)setBlurRadius:(float)a0;
- (float)blurRadius;
- (float)distance;
- (float)xSkew;
- (float)ySkew;
- (void)setDistance:(float)a0;
- (id)description;
- (void)setAlignment:(int)a0;
- (void)setStartPosition:(float)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (int)alignment;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)endPosition;
- (float)direction;
- (unsigned long long)hash;
- (float)xScale;
- (float)yScale;
- (float)startPosition;
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
