@class NSString;

@interface UIKBKeyViewAnimator : NSObject <CAAnimationDelegate>

@property (nonatomic) BOOL disabled;
@property (readonly, nonatomic) BOOL shouldPurgeKeyViews;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } primaryGlyphNormalizedExitRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } secondaryGlyphNormalizedExitRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalizedUnwindOpacityAnimationWithKeyPath:(id)a0 originallyFromValue:(id)a1 toValue:(id)a2 offset:(double)a3;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)a0 originallyFromValue:(id)a1 toValue:(id)a2 offset:(double)a3;
+ (id)normalizedAnimationWithKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2;
+ (id)normalizedUnwindAnimationWithKeyPath:(id)a0 fromValue:(id)a1 toValue:(id)a2 offset:(double)a3;

- (void)endTransitionForKeyView:(id)a0;
- (id)keycapPrimaryTransform;
- (void)reset;
- (id)keycapRightSelectLeftTransform;
- (void)_fadeInKeyView:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (id)keycapAlternateTransform:(id)a0;
- (void)transitionEndedForKeyView:(id)a0 alternateCount:(unsigned long long)a1;
- (id)keycapNullTransform;
- (id)keycapAlternateDualStringTransform:(id)a0;
- (id)keycapLeftSelectRightTransform;
- (void)transitionStartedForKeyView:(id)a0 alternateCount:(unsigned long long)a1 toLeft:(BOOL)a2;
- (id)keycapLeftTransform;
- (id)keycapPrimaryDualStringTransform:(id)a0;
- (id)keycapLeftSelectLeftTransform;
- (BOOL)shouldAssertCurrentKeyState:(id)a0;
- (void)transitionKeyView:(id)a0 fromState:(int)a1 toState:(int)a2 completion:(id /* block */)a3;
- (id)keycapLeftSelectPrimaryTransform;
- (Class)keyViewClassForKey:(id)a0 renderTraits:(id)a1 screenTraits:(id)a2;
- (id)keycapPrimaryExitTransform;
- (void)transitionOutKeyView:(id)a0 fromState:(int)a1 toState:(int)a2 completion:(id /* block */)a3;
- (id)keycapRightTransform;
- (BOOL)shouldTransitionKeyView:(id)a0 fromState:(int)a1 toState:(int)a2;
- (id)keycapRightSelectPrimaryTransform;
- (Class)_keyViewClassForSpecialtyKey:(id)a0 screenTraits:(id)a1;
- (id)keycapMeshTransformFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)delayedDeactivationTimeForKeyView:(id)a0;
- (void)_fadeOutKeyView:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void)updateTransitionForKeyView:(id)a0 normalizedDragSize:(struct CGSize { double x0; double x1; })a1;
- (id)keycapRightSelectRightTransform;

@end
