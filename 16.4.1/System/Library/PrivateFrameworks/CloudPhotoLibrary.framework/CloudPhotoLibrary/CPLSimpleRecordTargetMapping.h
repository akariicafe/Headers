@interface CPLSimpleRecordTargetMapping : CPLRecordTargetMapping

- (void)enumerateTargetsWithBlock:(id /* block */)a0;
- (void)enumerateUnknownTargetsWithBlock:(id /* block */)a0;
- (void)enumerateUpdatedTargetsWithBlock:(id /* block */)a0;
- (BOOL)hasUnknownTargets;
- (BOOL)hasUpdatedTargets;
- (void)setTarget:(id)a0 forRecordWithScopedIdentifier:(id)a1;
- (void)startTrackingUpdates;
- (id)targetForRecordWithScopedIdentifier:(id)a0;
- (id)updatedTargetScopedIdentifiers;
- (id)updatedTargets;

@end
