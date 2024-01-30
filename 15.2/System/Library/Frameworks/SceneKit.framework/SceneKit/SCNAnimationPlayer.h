@class NSArray, NSString, SCNAnimation, NSMutableDictionary, SCNOrderedDictionary;

@interface SCNAnimationPlayer : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {
    struct __C3DAnimationPlayer { } *_playerRef;
    float _weight;
    float _speed;
    BOOL _paused;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) SCNAnimation *animation;
@property (nonatomic) double speed;
@property (nonatomic) double blendFactor;
@property (nonatomic) BOOL paused;
@property (readonly) NSArray *animationKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)animationPlayerWithSCNAnimation:(id)a0;
+ (id)animationPlayerWithAnimationPlayerRef:(struct __C3DAnimationPlayer { } *)a0;
+ (id)animationPlayerWithAnimation:(id)a0;

- (void)removeAllAnimations;
- (float)weight;
- (void)addAnimation:(id)a0;
- (void)_setAnimation:(id)a0;
- (void)commonInit;
- (void)encodeWithCoder:(id)a0;
- (void)setWeight:(float)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (id)scene;
- (id)animationForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAnimationForKey:(id)a0;
- (void)play;
- (void)dealloc;
- (void)stop;
- (struct __C3DAnimationManager { } *)animationManager;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(double)a1;
- (id)animationPlayerForKey:(id)a0;
- (void)removeAllBindings;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (void)removeAllAnimationsWithBlendOutDuration:(double)a0;
- (const void *)__CFObject;
- (struct __C3DScene { } *)sceneRef;
- (void)prepareWithTarget:(id)a0 implicitDuration:(double)a1;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)_scnAnimationForKey:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (void)removeAnimationForKey:(id)a0 fadeOutDuration:(double)a1;
- (void)pauseAnimationForKey:(id)a0;
- (void)resumeAnimationForKey:(id)a0;
- (void)setSpeed:(double)a0 forAnimationKey:(id)a1;
- (BOOL)isAnimationForKeyPaused:(id)a0;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_syncObjCAnimations;
- (void)_copyAnimationsFrom:(id)a0;
- (id)_scnBindings;
- (void)unbindAnimatablePath:(id)a0;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (struct __C3DAnimationPlayer { } *)animationPlayerRef;
- (id)initWithAnimationPlayerRef:(struct __C3DAnimationPlayer { } *)a0;
- (id)initWithSCNAnimation:(id)a0;
- (void)stopWithBlendOutDuration:(double)a0;
- (void)stopWithFadeOutDuration:(double)a0;

@end
