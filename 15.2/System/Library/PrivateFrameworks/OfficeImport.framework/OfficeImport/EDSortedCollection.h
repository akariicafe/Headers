@interface EDSortedCollection : EDKeyedCollection

- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)addObject:(id)a0;
- (unsigned long long)addObject:(id)a0 overrideDuplicate:(BOOL)a1;

@end
