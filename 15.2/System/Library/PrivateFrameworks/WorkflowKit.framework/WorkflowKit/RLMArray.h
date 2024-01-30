@class NSString, RLMObjectBase, NSMutableArray, RLMRealm;

@interface RLMArray : NSObject <RLMThreadConfined_Private, RLMCollection, NSFastEnumeration> {
    NSString *_key;
    RLMObjectBase *_parentObject;
    NSMutableArray *_backingArray;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;
@property (readonly, copy, nonatomic) NSString *objectClassName;
@property (readonly, nonatomic) RLMRealm *realm;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) id objectiveCMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objectWithThreadSafeReference:(struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::default_delete<realm::ThreadSafeReferenceBase>> { struct ThreadSafeReferenceBase *x0; } x0; })a0 metadata:(id)a1 realm:(id)a2;

- (id)firstObject;
- (id)lastObject;
- (void)removeObjectsAtIndexes:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (id)valueForKey:(id)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)removeAllObjects;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeLastObject;
- (void)exchangeObjectAtIndex:(unsigned long long)a0 withObjectAtIndex:(unsigned long long)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)addObjectsFromArray:(id)a0;
- (id)addNotificationBlock:(id /* block */)a0;
- (void)moveObjectAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)insertObjects:(id)a0 atIndexes:(id)a1;
- (id)valueForKeyPath:(id)a0;
- (unsigned long long)indexOfObject:(id)a0;
- (void)addObjects:(id)a0;
- (id)initWithObjectClassName:(id)a0;
- (id)initWithObjectType:(int)a0 optional:(BOOL)a1;
- (int)typeForProperty:(id)a0;
- (id)aggregateProperty:(id)a0 operation:(id)a1 method:(SEL)a2;
- (id)objectsWhere:(id)a0 args:(char *)a1;
- (id)objectsWithPredicate:(id)a0;
- (id)objectsWhere:(id)a0;
- (id)descriptionWithMaxDepth:(unsigned long long)a0;
- (struct unique_ptr<realm::ThreadSafeReferenceBase, std::default_delete<realm::ThreadSafeReferenceBase>> { struct __compressed_pair<realm::ThreadSafeReferenceBase *, std::default_delete<realm::ThreadSafeReferenceBase>> { struct ThreadSafeReferenceBase *x0; } x0; })makeThreadSafeReference;
- (unsigned long long)indexOfObjectWhere:(id)a0 args:(char *)a1;
- (unsigned long long)indexOfObjectWithPredicate:(id)a0;
- (id)averageOfProperty:(id)a0;
- (id)sortedResultsUsingDescriptors:(id)a0;
- (unsigned long long)indexOfObjectWhere:(id)a0;
- (id)sortedResultsUsingKeyPath:(id)a0 ascending:(BOOL)a1;
- (id)minOfProperty:(id)a0;
- (id)maxOfProperty:(id)a0;
- (id)sumOfProperty:(id)a0;

@end
