@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation {
    struct __C3DKeyframedAnimation { } *_c3dAnimation;
    BOOL _caReady;
}

+ (BOOL)supportsSecureCoding;

- (void)setValues:(id)a0;
- (BOOL)autoreverses;
- (void)setAutoreverses:(BOOL)a0;
- (void)setRepeatCount:(float)a0;
- (void)setKeyPath:(id)a0;
- (id)values;
- (void)encodeWithCoder:(id)a0;
- (double)repeatDuration;
- (id)keyPath;
- (id)initWithCoder:(id)a0;
- (id)fillMode;
- (void)setTimingFunction:(id)a0;
- (void)setTimeOffset:(double)a0;
- (double)fadeOutDuration;
- (double)duration;
- (void)setRepeatDuration:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)additive;
- (void)setFadeInDuration:(double)a0;
- (float)speed;
- (void)dealloc;
- (void)setAdditive:(BOOL)a0;
- (void)setSpeed:(float)a0;
- (double)timeOffset;
- (float)repeatCount;
- (double)fadeInDuration;
- (BOOL)isAdditive;
- (id)timingFunction;
- (id)description;
- (void)setFadeOutDuration:(double)a0;
- (void)setDuration:(double)a0;
- (void)setFillMode:(id)a0;
- (id)timingFunctions;
- (id)biasValues;
- (id)continuityValues;
- (BOOL)cumulative;
- (BOOL)isCumulative;
- (BOOL)isRemovedOnCompletion;
- (id)keyTimes;
- (void)setBiasValues:(id)a0;
- (void)setContinuityValues:(id)a0;
- (void)setCumulative:(BOOL)a0;
- (void)setKeyTimes:(id)a0;
- (void)setRemovedOnCompletion:(BOOL)a0;
- (void)setTensionValues:(id)a0;
- (void)setTimingFunctions:(id)a0;
- (id)tensionValues;
- (id)animationEvents;
- (void)_clearC3DCache;
- (void)_convertToCA;
- (struct __C3DKeyframedAnimation { } *)c3dAnimation;
- (BOOL)commitsOnCompletion;
- (void)setAnimationEvents:(id)a0;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation { } *)a0;
- (void)setCommitsOnCompletion:(BOOL)a0;
- (void)setUsesSceneTimeBase:(BOOL)a0;
- (BOOL)usesSceneTimeBase;

@end
