@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)supportsSecureCoding;
+ (id)initWithSearchStrategy:(id)a0;
+ (id)alloc;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (Class)classForKeyedUnarchiver;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)initForKeys:(id)a0;
+ (id)initWithCoder:(id)a0;
+ (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
+ (id)initWithDictionary:(id)a0;

- (BOOL)isEqualToDictionary:(id)a0;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (const id *)values;
- (id)objectEnumerator;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)allValues;
- (void)encodeWithCoder:(id)a0;
- (id)allKeys;
- (unsigned long long)retainCount;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)mapping;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)keyEnumerator;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)setValues:(id *)a0;
- (BOOL)_isDeallocating;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;
- (void)addEntriesFromDictionary:(id)a0;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (Class)classForCoder;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (const id *)knownKeyValuesPointer;
- (unsigned long long)count;
- (void)getObjects:(id *)a0;
- (void)dealloc;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (BOOL)_tryRetain;
- (void)getKeys:(id *)a0;
- (oneway void)release;

@end
