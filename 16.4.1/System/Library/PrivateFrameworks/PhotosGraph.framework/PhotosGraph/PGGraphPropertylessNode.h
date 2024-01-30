@interface PGGraphPropertylessNode : PGGraphOptimizedNode

- (BOOL)hasProperties:(id)a0;
- (BOOL)hasProperties;
- (id)propertyDictionary;
- (void)checkConsistencyOfProperties:(id)a0 withExtraPropertyKeys:(id)a1;

@end
