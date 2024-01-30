@class _UIVisualEffectViewEntry;

@interface _UIVisualEffectViewReversingEntry : _UIVisualEffectViewEntry {
    _UIVisualEffectViewEntry *_sourceEntry;
}

- (void)removeEffectFromView:(id)a0;
- (void)applyRequestedEffectToView:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (void).cxx_destruct;
- (void)applyIdentityEffectToView:(id)a0;
- (id)copyForTransitionToEffect:(id)a0;
- (BOOL)isSameTypeOfEffect:(id)a0;
- (id)description;
- (void)addEffectToView:(id)a0;
- (BOOL)shouldAnimateProperty:(id)a0;
- (id)initWithViewEntry:(id)a0;
- (id)copyForTransitionOut;

@end
