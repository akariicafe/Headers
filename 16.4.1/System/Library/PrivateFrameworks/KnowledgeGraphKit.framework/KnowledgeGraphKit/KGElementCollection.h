@class NSArray, KGElementIdentifierSet, NSSet;
@protocol KGElement, KGGraphImplementation;

@interface KGElementCollection : NSObject

@property (readonly, nonatomic) KGElementIdentifierSet *identifiers;
@property (readonly, nonatomic) id<KGGraphImplementation> implementation;
@property (readonly) unsigned long long count;
@property (readonly) id<KGElement> anyObject;
@property (readonly) NSArray *allObjects;
@property (readonly) NSSet *set;

- (void)enumerateElementsWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)enumeratePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)collectionByFormingUnionWithCollection:(id)a0;
- (id)collectionByIntersectingCollection:(id)a0;
- (id)collectionBySubtractingCollection:(id)a0;
- (BOOL)containsCollection:(id)a0;
- (void)enumerateElementIdentifierBatchesWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithIdentifiers:(id)a0 graphImplementation:(id)a1;
- (BOOL)intersectsCollection:(id)a0;
- (BOOL)isEqualToCollection:(id)a0;
- (BOOL)isSubsetOfCollection:(id)a0;

@end
