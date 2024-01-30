@class CRDocument, NSArray, NSHashTable, CRDictionary, NSString;

@interface CRSet : NSObject <CRDataType, NSFastEnumeration, CRCoding>

@property (retain, nonatomic) CRDictionary *dictionary;
@property (retain, nonatomic) NSHashTable *observers;
@property (weak, nonatomic) CRDocument *document;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)realizeLocalChangesIn:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void)removeAllObjects;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setUpdated:(id)a0;
- (void)setObject:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)addObject:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (id)anyObject;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithDocument:(id)a0;
- (void)removeObject:(id)a0;
- (id)member:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (id)initWithCRCoder:(id)a0 set:(const void *)a1;
- (void)encodeWithCRCoder:(id)a0 set:(void *)a1;
- (void)encodeWithCRCoder:(id)a0 set:(void *)a1 elementValueCoder:(id /* block */)a2;
- (id)initWithCRCoder:(id)a0 set:(const void *)a1 elementValueDecoder:(id /* block */)a2;

@end
