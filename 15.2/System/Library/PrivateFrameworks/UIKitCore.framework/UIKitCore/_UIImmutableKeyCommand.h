@interface _UIImmutableKeyCommand : UIKeyCommand

- (void)_setMatchingPriority:(long long)a0;
- (void)setDiscoverabilityTitle:(id)a0;
- (void)setState:(long long)a0;
- (id)_immutableCopy;
- (id)_mutableCopyIfNeeded;
- (void)setAttributes:(unsigned long long)a0;
- (void)setWantsPriorityOverSystemBehavior:(BOOL)a0;
- (void)setAllowsAutomaticLocalization:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setEventDeferringEnvironment:(id)a0;
- (void)setTitle:(id)a0;
- (void)setAllowsAutomaticMirroring:(BOOL)a0;
- (void)setImage:(id)a0;

@end
