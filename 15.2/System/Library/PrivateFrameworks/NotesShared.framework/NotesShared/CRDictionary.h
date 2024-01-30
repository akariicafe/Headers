@class NSString, NSMapTable, CRDocument;

@interface CRDictionary : NSObject <CRDataType, NSFastEnumeration, CRCoding>

@property (retain, nonatomic) NSMapTable *contents;
@property (nonatomic) long long removeClock;
@property (weak, nonatomic) CRDocument *document;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObjectForKey:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)tombstone;
- (void)encodeWithCRCoder:(id)a0 dictionary:(void *)a1;
- (void)encodeWithCRCoder:(id)a0 dictionary:(void *)a1 elementValueCoder:(id /* block */)a2;
- (id)initWithCRCoder:(id)a0 dictionary:(const void *)a1;
- (id)initWithCRCoder:(id)a0 dictionary:(const void *)a1 elementValueDecoder:(id /* block */)a2;
- (void)mergeWithDictionary:(id)a0;
- (void)enumerateKeysObjectsAndTimestampsUsingBlock:(id /* block */)a0;

@end
