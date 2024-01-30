@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
    int _cd_rc;
    int _reserved64;
    void *_table;
    unsigned long long _length;
    id _reserved1;
    id *_keys;
}

+ (Class)classForKeyedUnarchiver;
+ (void)initialize;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)supportsSecureCoding;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)retain;
- (id)initForKeys:(id)a0;
- (id *)keys;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (BOOL)_tryRetain;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)fastIndexForKnownKey:(id)a0;
- (unsigned long long)indexForKey:(id)a0;
- (BOOL)_isDeallocating;
- (id)description;
- (id)allKeys;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (unsigned long long)retainCount;

@end
