@interface KGNodeCollection : KGElementCollection

- (void)enumerateNodesUsingBlock:(id /* block */)a0;
- (id)allObjects;
- (void)enumerateDoublePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateElementsWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateStringPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;

@end
