@class value;

@interface NSSimpleAttributeDictionary : NSDictionary {
    unsigned int numElements;
    unsigned int refCount;
    struct _NSSimpleAttributeDictionaryElement { unsigned long long hash; value *key; id x0; } elements[1];
}

+ (id)newWithDictionary:(id)a0;
+ (id)emptyAttributeDictionary;

- (unsigned long long)slotForKey:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)newWithKey:(id)a0 object:(id)a1;
- (void)dealloc;

@end
