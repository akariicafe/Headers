@class NSMutableDictionary, NSMutableSet;
@protocol _UITextAttributeDefaults;

@interface _UITextAttributeDictionaryImplI : NSMutableDictionary {
    id<_UITextAttributeDefaults> _fallback;
    NSMutableDictionary *_storage;
    NSMutableSet *_ignoring;
}

+ (Class)_storageClass;
+ (BOOL)_isMutable;
+ (Class)_ignoringClass;

- (id)objectForKey:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)keyEnumerator;
- (void)_removeFallbackFromStorage;
- (id)_keysIfThereIsFallback;
- (id)sparseDictionary;
- (id)_initWithDictionary:(id)a0 copyItems:(BOOL)a1 fallback:(id)a2;
- (id)init;
- (BOOL)ignoresFallbackForKey:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (BOOL)isNSDictionary__;
- (id)fallback;
- (BOOL)usesFallbackForKey:(id)a0;
- (unsigned long long)hash;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 fallback:(id)a1;
- (id)description;
- (id)allKeys;
- (id)_initWithStorage:(id)a0 fallback:(id)a1 ignoring:(id)a2;
- (id)initWithFallback:(id)a0;
- (id)_fullDictionary;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;

@end
