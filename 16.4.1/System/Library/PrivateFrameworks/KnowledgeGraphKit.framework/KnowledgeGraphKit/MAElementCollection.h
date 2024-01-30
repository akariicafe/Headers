@class NSSet, MAGraphReference, KGElementIdentifierSet;
@protocol MAGraphProxy;

@interface MAElementCollection : NSObject <NSCopying>

@property (readonly) MAGraphReference *graphReference;
@property (readonly) id<MAGraphProxy> graph;
@property (readonly, nonatomic) KGElementIdentifierSet *elementIdentifiers;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSSet *labels;

- (id)set;
- (id)initWithGraph:(id)a0;
- (id)array;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)sortedArrayUsingDescriptors:(id)a0;
- (void).cxx_destruct;
- (id)_anyElement;
- (void)_enumerateUsingBlock:(id /* block */)a0;
- (id)collectionByFormingUnionWith:(id)a0;
- (id)collectionByIntersecting:(id)a0;
- (id)collectionBySubtracting:(id)a0;
- (BOOL)containsCollection:(id)a0;
- (void)enumerateDoublePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateIdentifiersAsCollectionsWithBlock:(id /* block */)a0;
- (void)enumerateIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateStringPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)filteredCollectionUsingBlock:(id /* block */)a0;
- (id)initWithArray:(id)a0 graph:(id)a1;
- (id)initWithGraph:(id)a0 elementIdentifiers:(id)a1;
- (id)initWithGraphReference:(id)a0 elementIdentifiers:(id)a1;
- (id)initWithSet:(id)a0 graph:(id)a1;
- (BOOL)intersectsCollection:(id)a0;
- (BOOL)isSubsetOfCollection:(id)a0;
- (id)temporaryArray;
- (id)temporarySet;

@end
