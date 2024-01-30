@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;
@property (readonly) unsigned long long count;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)mapTableWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1;
+ (id)weakToWeakObjectsMapTable;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)weakToStrongObjectsMapTable;
+ (id)strongToStrongObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;
+ (id)mapTableWithWeakToWeakObjects;

- (id)objectForKey:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)keyEnumerator;
- (id)init;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)allValues;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)setItem:(const void *)a0 forKey:(const void *)a1;
- (id)objectEnumerator;
- (id)description;
- (id)allKeys;
- (id)mutableDictionary;
- (id)dictionaryRepresentation;
- (void)removeAllItems;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (void)removeAllObjects;
- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (id)enumerator;
- (void)setItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (Class)classForCoder;
- (unsigned long long)__capacity;
- (void)replaceItem:(const void *)a0 forExistingKey:(const void *)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
