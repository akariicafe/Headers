@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
    int _cd_rc;
    int _reserved64;
    void *_table;
    unsigned long long _length;
    id _reserved1;
    id *_keys;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;
+ (id)alloc;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;

- (id)retain;
- (unsigned long long)indexForKey:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)allKeys;
- (unsigned long long)retainCount;
- (id *)keys;
- (unsigned long long)length;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)description;
- (BOOL)_isDeallocating;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (id)initForKeys:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)fastIndexForKnownKey:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
