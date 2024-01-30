@class value;

@interface NSSimpleAttributeDictionary : NSDictionary {
    unsigned int numElements;
    unsigned int refCount;
    struct _NSSimpleAttributeDictionaryElement { unsigned long long hash; value *key; id x0; } elements[1];
}

+ (id)emptyAttributeDictionary;
+ (id)newWithDictionary:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (void)dealloc;
- (id)newWithKey:(id)a0 object:(id)a1;
- (unsigned long long)slotForKey:(id)a0;

@end
