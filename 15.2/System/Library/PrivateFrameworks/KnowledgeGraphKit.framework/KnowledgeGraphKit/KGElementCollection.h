@class NSArray, KGElementIdentifierSet, NSSet;
@protocol KGElement, KGGraphImplementation;

@interface KGElementCollection : NSObject

@property (readonly, nonatomic) KGElementIdentifierSet *identifiers;
@property (readonly, nonatomic) id<KGGraphImplementation> implementation;
@property (readonly) unsigned long long count;
@property (readonly) id<KGElement> anyObject;
@property (readonly) NSArray *allObjects;
@property (readonly) NSSet *set;

- (void)enumerateDoublePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)description;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)enumerateElementsWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateStringPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (unsigned long long)hash;
- (id)initWithIdentifiers:(id)a0 graphImplementation:(id)a1;
- (void)enumerateElementIdentifierBatchesWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)isEqualToCollection:(id)a0;

@end
