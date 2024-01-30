@class NSArray, NSDictionary, NSString, NSMutableDictionary, SCNOrderedDictionary;
@protocol MTLLibrary;

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {
    unsigned char _isPresentationInstance : 1;
    struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; long long x1; long long x2; struct __C3DFXPass **x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned int x9; struct *x10; struct __CFDictionary *x11; struct __C3DNode *x12; struct __CFArray *x13; struct __C3DFXTechnique *x14; void *x15; struct __CFString *x16; struct __CFString *x17; } *_technique;
    NSMutableDictionary *_valueForSymbol;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _valueForSymbolLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _animationsLock;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    id<MTLLibrary> _library;
    NSArray *_passes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) id<MTLLibrary> library;
@property (readonly) NSArray *animationKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)techniqueWithDictionary:(id)a0;
+ (id)techniqueBySequencingTechniques:(id)a0;
+ (id)techniqueWithTechniqueRef:(struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; long long x1; long long x2; struct __C3DFXPass **x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned int x9; struct *x10; struct __CFDictionary *x11; struct __C3DNode *x12; struct __CFArray *x13; struct __C3DFXTechnique *x14; void *x15; struct __CFString *x16; struct __CFString *x17; } *)a0;

- (void)addAnimation:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllAnimations;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)copy;
- (id)scene;
- (id)animationForKey:(id)a0;
- (void)removeAnimationForKey:(id)a0;
- (id)passAtIndex:(unsigned long long)a0;
- (id)animationPlayerForKey:(id)a0;
- (struct __C3DAnimationManager { } *)animationManager;
- (const void *)__CFObject;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_copyAnimationsFrom:(id)a0;
- (void)_customDecodingOfSCNTechnique:(id)a0;
- (void)_customEncodingOfSCNTechnique:(id)a0;
- (void)_didInstallInEngineContext:(struct __C3DEngineContext { } *)a0;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (id)_scnAnimationForKey:(id)a0;
- (id)_scnBindings;
- (void)_setupPasses;
- (void)_syncObjCAnimations;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (void)handleBindingOfSymbol:(id)a0 usingBlock:(id /* block */)a1;
- (id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; long long x1; long long x2; struct __C3DFXPass **x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned int x9; struct *x10; struct __CFDictionary *x11; struct __C3DNode *x12; struct __CFArray *x13; struct __C3DFXTechnique *x14; void *x15; struct __CFString *x16; struct __CFString *x17; } *)a0;
- (id)initWithTechniqueRef:(struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; long long x1; long long x2; struct __C3DFXPass **x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned int x9; struct *x10; struct __CFDictionary *x11; struct __C3DNode *x12; struct __CFArray *x13; struct __C3DFXTechnique *x14; void *x15; struct __CFString *x16; struct __CFString *x17; } *)a0;
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
- (void)setValue:(id)a0 forSymbolNamed:(id)a1;
- (struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; long long x1; long long x2; struct __C3DFXPass **x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned int x9; struct *x10; struct __CFDictionary *x11; struct __C3DNode *x12; struct __CFArray *x13; struct __C3DFXTechnique *x14; void *x15; struct __CFString *x16; struct __CFString *x17; } *)techniqueRef;
- (void)unbindAnimatablePath:(id)a0;
- (id)valueForSymbolNamed:(id)a0;

@end
