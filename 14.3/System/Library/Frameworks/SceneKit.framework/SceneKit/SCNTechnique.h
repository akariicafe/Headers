@class NSArray, NSDictionary, NSString, NSMutableDictionary, SCNOrderedDictionary;
@protocol MTLLibrary;

@interface SCNTechnique : NSObject <SCNAnimatable, NSCopying, NSSecureCoding> {
    unsigned char _isPresentationInstance : 1;
    struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; long long x1; long long x2; struct __C3DFXPass **x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned int x9; struct *x10; struct __CFDictionary *x11; struct __C3DNode *x12; struct __CFArray *x13; struct __C3DFXTechnique *x14; void *x15; struct __CFString *x16; struct __CFString *x17; } *_technique;
    NSMutableDictionary *_valueForSymbol;
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

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)scene;
- (id)copy;
- (void)addAnimation:(id)a0 forKey:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)removeAllAnimations;
- (void)addAnimation:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)passAtIndex:(unsigned long long)a0;
- (id)animationForKey:(id)a0;
- (void)removeAnimationForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)animationPlayerForKey:(id)a0;
- (void)removeAnimationForKey:(id)a0 blendOutDuration:(double)a1;
- (void)removeAllBindings;
- (void)bindAnimatablePath:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (const void *)__CFObject;
- (struct __C3DScene { } *)sceneRef;
- (id)initWithTechniqueRef:(struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; long long x1; long long x2; struct __C3DFXPass **x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned int x9; struct *x10; struct __CFDictionary *x11; struct __C3DNode *x12; struct __CFArray *x13; struct __C3DFXTechnique *x14; void *x15; struct __CFString *x16; struct __CFString *x17; } *)a0;
- (struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; long long x1; long long x2; struct __C3DFXPass **x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned int x9; struct *x10; struct __CFDictionary *x11; struct __C3DNode *x12; struct __CFArray *x13; struct __C3DFXTechnique *x14; void *x15; struct __CFString *x16; struct __CFString *x17; } *)techniqueRef;
- (id)_symbolsAssignedValues;
- (void)setValue:(id)a0 forSymbolNamed:(id)a1;
- (void)addAnimationPlayer:(id)a0 forKey:(id)a1;
- (id)_scnAnimationForKey:(id)a0;
- (struct __C3DAnimationManager { } *)animationManager;
- (void)_pauseAnimation:(BOOL)a0 forKey:(id)a1 pausedByNode:(BOOL)a2;
- (id)initPresentationTechniqueWithTechniqueRef:(struct __C3DFXTechnique { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; void *x1; struct __CFString *x2; struct __CFString *x3; struct __CFDictionary *x4; struct __C3DScene *x5; long long x6; } x0; long long x1; long long x2; struct __C3DFXPass **x3; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned int x9; struct *x10; struct __CFDictionary *x11; struct __C3DNode *x12; struct __CFArray *x13; struct __C3DFXTechnique *x14; void *x15; struct __CFString *x16; struct __CFString *x17; } *)a0;
- (void)_setupPasses;
- (void)_customEncodingOfSCNTechnique:(id)a0;
- (void)_customDecodingOfSCNTechnique:(id)a0;
- (void)removeAnimationForKey:(id)a0 fadeOutDuration:(double)a1;
- (void)pauseAnimationForKey:(id)a0;
- (void)resumeAnimationForKey:(id)a0;
- (void)setSpeed:(double)a0 forAnimationKey:(id)a1;
- (BOOL)isAnimationForKeyPaused:(id)a0;
- (void)handleBindingOfSymbol:(id)a0 usingBlock:(id /* block */)a1;
- (id)valueForSymbolNamed:(id)a0;
- (BOOL)__removeAnimation:(id)a0 forKey:(id)a1;
- (void)_syncObjCAnimations;
- (void)_copyAnimationsFrom:(id)a0;
- (id)_scnBindings;
- (void)unbindAnimatablePath:(id)a0;
- (id)copyAnimationChannelForKeyPath:(id)a0 animation:(id)a1;
- (BOOL)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (void)_didInstallInEngineContext:(struct __C3DEngineContext { } *)a0;

@end
