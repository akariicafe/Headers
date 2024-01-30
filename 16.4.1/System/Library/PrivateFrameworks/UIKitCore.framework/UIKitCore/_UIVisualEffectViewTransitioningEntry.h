@class _UIVisualEffectViewEntry;

@interface _UIVisualEffectViewTransitioningEntry : _UIVisualEffectViewEntry {
    _UIVisualEffectViewEntry *_sourceEntry;
    _UIVisualEffectViewEntry *_destinationEntry;
}

- (void)applyRequestedEffectToView:(id)a0;
- (BOOL)shouldAnimateProperty:(id)a0;
- (id)copyForTransitionToEffect:(id)a0;
- (BOOL)canTransitionToEffect:(id)a0;
- (BOOL)isSameTypeOfEffect:(id)a0;
- (void)addEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (id)copyForTransitionOut;
- (void)applyIdentityEffectToView:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSourceEntry:(id)a0 destinationEntry:(id)a1;

@end
