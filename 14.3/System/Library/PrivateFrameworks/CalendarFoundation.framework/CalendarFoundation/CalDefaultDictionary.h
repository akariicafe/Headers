@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {
    Class _defaultClass;
    NSMutableDictionary *_dict;
}

- (id)objectForKey:(id)a0;
- (id)keys;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)deepCopy;
- (void)setDictionary:(id)a0;
- (id)initWithDefaultClass:(Class)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)finalDictionary;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)existingObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
