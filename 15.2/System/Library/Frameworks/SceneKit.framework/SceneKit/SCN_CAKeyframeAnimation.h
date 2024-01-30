@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {
    struct __C3DKeyframedAnimation { } *_c3dAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (void)setTimingFunction:(id)a0;
- (id)values;
- (BOOL)autoreverses;
- (float)speed;
- (void)setSpeed:(float)a0;
- (id)timingFunction;
- (void)encodeWithCoder:(id)a0;
- (void)setFadeInDuration:(double)a0;
- (void)setDuration:(double)a0;
- (id)keyTimes;
- (double)timeOffset;
- (void)setFadeOutDuration:(double)a0;
- (id)description;
- (void)setKeyPath:(id)a0;
- (void)setAdditive:(BOOL)a0;
- (void)setTimingFunctions:(id)a0;
- (void)setValues:(id)a0;
- (void)setFillMode:(id)a0;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)a0;
- (void)setTimeOffset:(double)a0;
- (double)duration;
- (double)fadeOutDuration;
- (BOOL)isAdditive;
- (void)setKeyTimes:(id)a0;
- (id)biasValues;
- (BOOL)cumulative;
- (BOOL)isRemovedOnCompletion;
- (id)initWithCoder:(id)a0;
- (id)tensionValues;
- (void)setBiasValues:(id)a0;
- (id)fillMode;
- (id)timingFunctions;
- (id)continuityValues;
- (void)setContinuityValues:(id)a0;
- (void)setCumulative:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)additive;
- (double)fadeInDuration;
- (float)repeatCount;
- (void)dealloc;
- (void)setRepeatCount:(float)a0;
- (id)keyPath;
- (void)setRemovedOnCompletion:(BOOL)a0;
- (void)setAutoreverses:(BOOL)a0;
- (BOOL)isCumulative;
- (void)setTensionValues:(id)a0;
- (void)setAnimationEvents:(id)a0;
- (void)setUsesSceneTimeBase:(BOOL)a0;
- (BOOL)usesSceneTimeBase;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation { } *)a0;
- (void)_convertToCA;
- (void)_clearC3DCache;
- (void)setCommitsOnCompletion:(BOOL)a0;
- (BOOL)commitsOnCompletion;
- (id)animationEvents;
- (struct __C3DKeyframedAnimation { } *)c3dAnimation;

@end
