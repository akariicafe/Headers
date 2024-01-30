@class _UIVisualEffectViewEntry;

@interface _UIVisualEffectViewReversingEntry : _UIVisualEffectViewEntry {
    _UIVisualEffectViewEntry *_sourceEntry;
}

- (void)applyIdentityEffectToView:(id)a0;
- (void)applyRequestedEffectToView:(id)a0;
- (void)addEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (BOOL)isSameTypeOfEffect:(id)a0;
- (id)description;
- (id)copyForTransitionToEffect:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (void).cxx_destruct;
- (id)copyForTransitionOut;
- (BOOL)shouldAnimateProperty:(id)a0;
- (id)initWithViewEntry:(id)a0;

@end
