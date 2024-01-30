@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {
    Class _defaultClass;
    NSMutableDictionary *_dict;
}

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setDictionary:(id)a0;
- (id)keys;
- (void).cxx_destruct;
- (id)deepCopy;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithDefaultClass:(Class)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)finalDictionary;
- (id)existingObjectForKey:(id)a0;

@end
