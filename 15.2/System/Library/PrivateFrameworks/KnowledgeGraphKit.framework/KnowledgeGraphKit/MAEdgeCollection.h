@interface MAEdgeCollection : MAElementCollection

+ (id)edgesMatchingFilter:(id)a0 inGraph:(id)a1;
+ (id)edgesFromNodes:(id)a0 toNodes:(id)a1 matchingFilter:(id)a2;
+ (id)edgesOfType:(unsigned long long)a0 betweenNodes:(id)a1 andNodes:(id)a2 matchingFilter:(id)a3;
+ (id)edgesToNodes:(id)a0 matchingFilter:(id)a1;
+ (id)edgesFromNodes:(id)a0 matchingFilter:(id)a1;
+ (id)edgesOfType:(unsigned long long)a0 onNodes:(id)a1 matchingFilter:(id)a2;

- (void)enumerateDoublePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)anyEdge;
- (void)enumerateStringPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateEdgesUsingBlock:(id /* block */)a0;
- (void)_enumerateUsingBlock:(id /* block */)a0;
- (id)initWithEdge:(id)a0;
- (id)randomEdge;
- (BOOL)containsEdge:(id)a0;

@end
