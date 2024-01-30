@interface _UIVisualEffectAlphaEntry : _UIVisualEffectViewEntry {
    double _initialAlpha;
    double _finalAlpha;
}

- (void)applyRequestedEffectToView:(id)a0;
- (id)copyForTransitionToEffect:(id)a0;
- (void)addEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (id)copyForTransitionOut;
- (void)applyIdentityEffectToView:(id)a0;
- (id)description;
- (id)initWithInitialAlpha:(double)a0 finalAlpha:(double)a1;

@end
