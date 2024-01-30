@class NSString, NSArray, NSMutableDictionary, SCNOrderedDictionary;

@interface SCNEffect : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {
    struct __C3DVFX { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; } *_vfx;
    unsigned char _isPresentationInstance : 1;
    NSMutableDictionary *_parameters;
    NSString *_vfxName;
    NSString *_name;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly) SCNEffect *presentationEffect;
@property (readonly) NSArray *animationKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)effectWithName:(id)a0;
+ (id)effectWithVFXRef:(struct __C3DVFX { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; } *)a0;

- (void)addAnimation:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)parameters;
- (void)setParameters:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllAnimations;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)identifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIdentifier:(id)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)copy;
- (void)setName:(id)a0;
- (id)scene;
- (id)animationForKey:(id)a0;
- (void)removeAnimationForKey:(id)a0;
- (id)animationPlayerForKey:(id)a0;
- (struct __C3DAnimationManager { } *)animationManager;
- (id)initWithVFXRef:(struct __C3DVFX { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; } *)a0;
- (const void *)__CFObject;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (id)vfxName;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (id)_scnAnimationForKey:(id)a0;
- (id)_scnBindings;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (id)initPresentationEffectWithVFXRef:(struct __C3DVFX { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; } *)a0;
- (BOOL)isAnimationForKeyPaused:(id)a0;
- (BOOL)isPausedOrPausedByInheritance;
- (void)pauseAnimationForKey:(id)a0;
- (id)presentationInstance;
- (void)removeAllAnimationsWithBlendOutDuration:(double)a0;
- (void)removeAllBindings;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(double)a1;
- (void)removeAnimationForKey:(id)a0 fadeOutDuration:(double)a1;
- (void)resumeAnimationForKey:(id)a0;
- (struct __C3DScene { } *)sceneRef;
- (void)setSpeed:(double)a0 forAnimationKey:(id)a1;
- (void)unbindAnimatablePath:(id)a0;
- (struct __C3DVFX { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; struct __CFString *x1; struct __CFDictionary *x2; } *)vfxRef;

@end
