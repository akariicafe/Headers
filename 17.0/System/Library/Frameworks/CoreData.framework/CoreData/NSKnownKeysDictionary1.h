@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
    int _cd_rc;
    int _count;
    NSKnownKeysMappingStrategy *_keySearch;
    id _values[0];
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (Class)classForKeyedUnarchiver;
+ (id)alloc;
+ (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
+ (BOOL)supportsSecureCoding;
+ (id)initWithObjects:(id *)a0 forKeys:(id *)a1 count:(unsigned long long)a2;
+ (id)initWithSearchStrategy:(id)a0;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)initWithDictionary:(id)a0;
+ (id)initForKeys:(id)a0;
+ (id)initWithCoder:(id)a0;

- (id)objectEnumerator;
- (id)retain;
- (void)addEntriesFromDictionary:(id)a0;
- (id)allValues;
- (void)dealloc;
- (id)allKeys;
- (unsigned long long)retainCount;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (void)encodeWithCoder:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (BOOL)_tryRetain;
- (BOOL)isEqualToDictionary:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)getObjects:(id *)a0;
- (Class)classForCoder;
- (void)getObjects:(id *)a0 andKeys:(id *)a1;
- (id)valueAtIndex:(unsigned long long)a0;
- (void)setValues:(id *)a0;
- (void)_setValues:(id *)a0 retain:(BOOL)a1;
- (BOOL)_isDeallocating;
- (void)setValue:(id)a0 atIndex:(unsigned long long)a1;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mapping;
- (const id *)values;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (oneway void)release;
- (const id *)knownKeyValuesPointer;
- (void)getKeys:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
