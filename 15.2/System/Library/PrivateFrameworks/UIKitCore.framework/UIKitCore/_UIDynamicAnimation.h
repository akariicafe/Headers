@interface _UIDynamicAnimation : NSObject {
    id /* block */ _completion;
    int _state;
    unsigned char _began : 1;
    unsigned char _running : 1;
    unsigned char _completing : 1;
    unsigned char _yield : 1;
    unsigned char _grouped : 1;
    unsigned char _usesNSTimer : 1;
}

@property (readonly, nonatomic) int state;

+ (id)dynamicAnimationForView:(id)a0 withInitialValue:(double)a1 velocity:(double)a2 type:(int)a3 anchorPoint:(struct CGPoint { double x0; double x1; })a4;
+ (void)_updateAnimations:(id)a0 timer:(id)a1;
+ (void)_updateAnimationsWithTimer:(id)a0;
+ (void)_updateAnimations:(id)a0;

- (void)_appendDescriptionToString:(id)a0 atLevel:(int)a1;
- (BOOL)_isGrouped;
- (void)runWithCompletion:(id /* block */)a0 forScreen:(id)a1 runLoopMode:(id)a2;
- (void)_callAppliers:(id /* block */)a0 additionalEndAppliers:(id /* block */)a1 done:(BOOL)a2;
- (BOOL)_usesNSTimer;
- (BOOL)_shouldYield;
- (void)_setGrouped:(BOOL)a0;
- (id)description;
- (void)_appendSubclassDescription:(id)a0 atLevel:(int)a1;
- (void)_stopAnimation;
- (id)init;
- (void)_setShouldYield:(BOOL)a0;
- (void)_setUsesNSTimer:(BOOL)a0;
- (void)runWithCompletion:(id /* block */)a0;
- (BOOL)_animateForInterval:(double)a0;
- (void)_cancelWithAppliers:(id /* block */)a0;
- (void)_completeWithFinished:(BOOL)a0;
- (void)dealloc;
- (BOOL)_isRunning;
- (void)stop;

@end
