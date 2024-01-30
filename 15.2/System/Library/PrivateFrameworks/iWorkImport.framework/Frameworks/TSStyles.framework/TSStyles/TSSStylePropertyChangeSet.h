@interface TSSStylePropertyChangeSet : TSKSosBase

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setBoxedValue:(id)a0 forProperty:(int)a1;
- (void)setSpec:(id)a0 forProperty:(int)a1;
- (void)enumerateDefinedPropertiesWithBlock:(id /* block */)a0;
- (id)p_variationPropertyMapFromStyle:(id)a0 withPropertyMap:(id)a1;
- (id)variationPropertyMapFromParentStyle:(id)a0;
- (id)variationPropertyMapFromStyle:(id)a0;
- (BOOL)isEqualToChangeSet:(id)a0;
- (void)setUnsetSpecForProperty:(int)a0;
- (id)collectUndoForStyle:(id)a0;
- (id)collectUnset;
- (id)variationStyleFrom:(id)a0 inStylesheet:(id)a1;
- (id)changedPropertyPaths;
- (BOOL)isEmptyChangeSet;
- (id)propertyChangeFilteredByProperties:(id)a0;

@end
