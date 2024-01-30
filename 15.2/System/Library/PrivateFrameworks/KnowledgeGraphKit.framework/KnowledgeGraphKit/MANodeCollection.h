@interface MANodeCollection : MAElementCollection

+ (id)nodesRelatedToNodes:(id)a0 withRelation:(id)a1;
+ (id)nodesMatchingFilter:(id)a0 inGraph:(id)a1;
+ (id)targetNodesOfEdges:(id)a0;
+ (id)sourceNodesOfEdges:(id)a0;
+ (id)nodesOfEdges:(id)a0;

- (void)enumerateNodesUsingBlock:(id /* block */)a0;
- (void)enumerateDoublePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithNode:(id)a0;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (BOOL)containsNode:(id)a0;
- (id)anyNode;
- (void)enumerateStringPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)debugDescription;
- (id)randomNode;
- (void)_enumerateUsingBlock:(id /* block */)a0;

@end
