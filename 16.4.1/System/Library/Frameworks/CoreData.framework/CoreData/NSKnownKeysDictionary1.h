@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (Class)classForKeyedUnarchiver;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)initForKeys:(id)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (BOOL)supportsSecureCoding;
+ (id)initWithCoder:(id)a0;
+ (id)initWithSearchStrategy:(id)a0;
+ (id)initWithDictionary:(id)a0;
+ (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
+ (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValues:(id *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)valueAtIndex:(unsigned long long)a0;
- (id)retain;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (const id *)values;
- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)removeObjectForKey:(id)a0;
- (oneway void)release;
- (id)mapping;
- (id)objectForKey:(id)a0;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)getObjects:(id *)a0;
- (id)objectEnumerator;
- (Class)classForCoder;
- (BOOL)isEqualToDictionary:(id)a0;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (void)dealloc;
- (id)allValues;
- (BOOL)_isDeallocating;
- (const id *)knownKeyValuesPointer;
- (id)allKeys;
- (void)getKeys:(id *)a0;
- (unsigned long long)retainCount;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;

@end
