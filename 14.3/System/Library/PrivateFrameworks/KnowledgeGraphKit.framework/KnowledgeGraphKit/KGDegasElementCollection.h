@class NSMutableArray, KGDegasGraphStore, KGElementIdentifierSet;

@interface KGDegasElementCollection : KGElementCollection {
    KGElementIdentifierSet *_identifiers;
    NSMutableArray *_arrayPages;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pageFillLock;
}

@property (readonly, nonatomic) KGDegasGraphStore *store;

- (id)firstObject;
- (id)lastObject;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (unsigned long long)pageOffsetForIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (id)allObjects;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithIdentifiers:(id)a0 store:(id)a1;
- (unsigned long long)pageNumberForIndex:(unsigned long long)a0;
- (id)elementsForIdentifiers:(id)a0;
- (id)fillPage:(unsigned long long)a0;
- (id)getPage:(unsigned long long)a0;

@end
