@class NSPointerFunctions;

@interface NSMapTable : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSPointerFunctions *keyPointerFunctions;
@property (readonly, copy) NSPointerFunctions *valuePointerFunctions;
@property (readonly) unsigned long long count;

+ (id)mapTableWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1;
+ (id)mapTableWithWeakToStrongObjects;
+ (id)mapTableWithStrongToWeakObjects;
+ (id)mapTableWithStrongToStrongObjects;
+ (id)alloc;
+ (id)weakToWeakObjectsMapTable;
+ (id)strongToStrongObjectsMapTable;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)mapTableWithWeakToWeakObjects;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)weakToStrongObjectsMapTable;
+ (id)strongToWeakObjectsMapTable;

- (void *)existingItemForSetItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (id)objectEnumerator;
- (id)enumerator;
- (void)removeObjectForKey:(id)a0;
- (void)replaceItem:(const void *)a0 forExistingKey:(const void *)a1;
- (id)initWithKeyPointerFunctions:(id)a0 valuePointerFunctions:(id)a1 capacity:(unsigned long long)a2;
- (void)removeAllObjects;
- (id)allValues;
- (void)encodeWithCoder:(id)a0;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)getKeys:(const void **)a0 values:(const void **)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)mutableDictionary;
- (id)description;
- (void)setItem:(const void *)a0 forKey:(const void *)a1;
- (id)keyEnumerator;
- (BOOL)mapMember:(const void *)a0 originalKey:(const void **)a1 value:(const void **)a2;
- (id)init;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)__capacity;
- (id)copy;
- (void)setItem:(const void *)a0 forAbsentKey:(const void *)a1;
- (void)removeAllItems;
- (id)initWithKeyOptions:(unsigned long long)a0 valueOptions:(unsigned long long)a1 capacity:(unsigned long long)a2;
- (void)setItem:(const void *)a0 forKnownAbsentKey:(const void *)a1;
- (id)dictionaryRepresentation;

@end
