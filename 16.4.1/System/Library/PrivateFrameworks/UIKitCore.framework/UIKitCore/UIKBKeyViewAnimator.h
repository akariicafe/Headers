@class NSString;

@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate>

@property (nonatomic) double keyScale;
@property (nonatomic) BOOL disabled;
@property (readonly, nonatomic) BOOL shouldPurgeKeyViews;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } primaryGlyphNormalizedExitRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } secondaryGlyphNormalizedExitRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalizedAnimationWithKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2 offset:(double)a3;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)a0 originallyFromValue:(id)a1 toValue:(id)a2 offset:(double)a3;
+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)a0 originallyFromValue:(id)a1 toValue:(id)a2 offset:(double)a3;

- (double)delayedDeactivationTimeForKeyView:(id)a0;
- (id)keycapAlternateDualStringTransform:(id)a0;
- (Class)_keyViewClassForSpecialtyKey:(id)a0 screenTraits:(id)a1;
- (void)_fadeOutKeyView:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)transitionKeyView:(id)a0 fromState:(int)a1 toState:(int)a2 completion:(id /* block */)a3;
- (void)transitionEndedForKeyView:(id)a0 alternateCount:(unsigned long long)a1;
- (id)keycapMeshTransformFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)keycapRightTransform;
- (id)keycapLeftSelectPrimaryTransform;
- (void)updateTransitionForKeyView:(id)a0 normalizedDragSize:(struct CGSize { double x0; double x1; })a1;
- (void)endTransitionForKeyView:(id)a0;
- (void)_fadeInKeyView:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (BOOL)shouldTransitionKeyView:(id)a0 fromState:(int)a1 toState:(int)a2;
- (id)keycapPrimaryTransform;
- (id)keycapNullTransform;
- (id)keycapRightSelectLeftTransform;
- (void)transitionStartedForKeyView:(id)a0 alternateCount:(unsigned long long)a1 toLeft:(BOOL)a2;
- (BOOL)shouldAssertCurrentKeyState:(id)a0;
- (id)primaryReverseTransform;
- (id)keycapLeftSelectLeftTransform;
- (id)keycapMeshTransformFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 scale:(double)a2;
- (id)keycapPrimaryDualStringTransform:(id)a0;
- (void)transitionOutKeyView:(id)a0 fromState:(int)a1 toState:(int)a2 completion:(id /* block */)a3;
- (id)keycapLeftTransform;
- (id)keycapRightSelectRightTransform;
- (id)keycapLeftSelectRightTransform;
- (id)keycapPrimaryExitTransform;
- (id)keycapRightSelectPrimaryTransform;
- (id)keycapAlternateTransform:(id)a0;
- (void)reset;
- (Class)keyViewClassForKey:(id)a0 renderTraits:(id)a1 screenTraits:(id)a2;

@end
