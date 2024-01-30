@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {
    struct __C3DKeyframedAnimation { } *_c3dAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (void)setValues:(id)a0;
- (void)setFillMode:(id)a0;
- (id)values;
- (float)repeatCount;
- (void)setTimingFunction:(id)a0;
- (id)timingFunction;
- (void)setAutoreverses:(BOOL)a0;
- (BOOL)autoreverses;
- (void)setFadeOutDuration:(double)a0;
- (float)speed;
- (void)setRepeatDuration:(double)a0;
- (id)fillMode;
- (void)setKeyPath:(id)a0;
- (void)setSpeed:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setRepeatCount:(float)a0;
- (id)keyPath;
- (void)setTimeOffset:(double)a0;
- (double)repeatDuration;
- (void)setFadeInDuration:(double)a0;
- (double)timeOffset;
- (void)dealloc;
- (BOOL)isAdditive;
- (void)setRemovedOnCompletion:(BOOL)a0;
- (id)keyTimes;
- (BOOL)additive;
- (id)initWithCoder:(id)a0;
- (void)setTensionValues:(id)a0;
- (void)setTimingFunctions:(id)a0;
- (id)description;
- (double)duration;
- (double)fadeInDuration;
- (id)biasValues;
- (BOOL)isRemovedOnCompletion;
- (void)setBiasValues:(id)a0;
- (id)tensionValues;
- (id)timingFunctions;
- (id)continuityValues;
- (void)setContinuityValues:(id)a0;
- (BOOL)isCumulative;
- (void)setCumulative:(BOOL)a0;
- (BOOL)cumulative;
- (void)setKeyTimes:(id)a0;
- (void)setAdditive:(BOOL)a0;
- (double)fadeOutDuration;
- (void)encodeWithCoder:(id)a0;
- (void)setDuration:(double)a0;
- (void)setUsesSceneTimeBase:(BOOL)a0;
- (BOOL)usesSceneTimeBase;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation { } *)a0;
- (void)_convertToCA;
- (void)_clearC3DCache;
- (void)setCommitsOnCompletion:(BOOL)a0;
- (BOOL)commitsOnCompletion;
- (void)setAnimationEvents:(id)a0;
- (id)animationEvents;
- (struct __C3DKeyframedAnimation { } *)c3dAnimation;

@end
