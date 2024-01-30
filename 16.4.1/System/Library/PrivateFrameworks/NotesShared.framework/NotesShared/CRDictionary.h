@class NSString, NSMapTable, ICCRDocument;

@interface CRDictionary : NSObject <CRDataType, NSFastEnumeration, CRCoding>

@property (retain, nonatomic) NSMapTable *contents;
@property (nonatomic) long long removeClock;
@property (weak, nonatomic) ICCRDocument *document;
@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)mergeWith:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeAllObjects;
- (id)deltaSince:(id)a0 in:(id)a1;
- (id)keyEnumerator;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDocument:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (id)init;
- (id)tombstone;
- (void).cxx_destruct;
- (void)mergeWithDictionary:(id)a0;
- (void)encodeWithCRCoder:(id)a0 dictionary:(void *)a1;
- (void)encodeWithCRCoder:(id)a0 dictionary:(void *)a1 elementValueCoder:(id /* block */)a2;
- (void)enumerateKeysObjectsAndTimestampsUsingBlock:(id /* block */)a0;
- (id)initWithCRCoder:(id)a0 dictionary:(const void *)a1;
- (id)initWithCRCoder:(id)a0 dictionary:(const void *)a1 elementValueDecoder:(id /* block */)a2;

@end
