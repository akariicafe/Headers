@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
    int _cd_rc;
    int _reserved64;
    void *_table;
    unsigned long long _length;
    id _reserved1;
    id *_keys;
}

+ (void)initialize;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)supportsSecureCoding;
+ (id)alloc;
+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)length;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)indexForKey:(id)a0;
- (id)allKeys;
- (unsigned long long)retainCount;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id *)keys;
- (id)retain;
- (id)description;
- (id)initForKeys:(id)a0;
- (unsigned long long)fastIndexForKnownKey:(id)a0;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;

@end
