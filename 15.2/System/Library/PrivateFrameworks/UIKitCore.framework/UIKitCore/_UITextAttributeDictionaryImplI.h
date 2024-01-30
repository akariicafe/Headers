@class NSMutableDictionary, NSMutableSet;
@protocol _UITextAttributeDefaults;

@interface _UITextAttributeDictionaryImplI : NSMutableDictionary {
    id<_UITextAttributeDefaults> _fallback;
    NSMutableDictionary *_storage;
    NSMutableSet *_ignoring;
}

+ (BOOL)_isMutable;
+ (Class)_storageClass;
+ (Class)_ignoringClass;

- (BOOL)isEqualToDictionary:(id)a0;
- (id)_fullDictionary;
- (BOOL)isNSDictionary__;
- (BOOL)ignoresFallbackForKey:(id)a0;
- (id)fallback;
- (id)initWithDictionary:(id)a0 fallback:(id)a1;
- (BOOL)usesFallbackForKey:(id)a0;
- (id)_initWithDictionary:(id)a0 copyItems:(BOOL)a1 fallback:(id)a2;
- (id)initWithFallback:(id)a0;
- (id)_initWithStorage:(id)a0 fallback:(id)a1 ignoring:(id)a2;
- (id)_keysIfThereIsFallback;
- (id)allKeys;
- (void)_removeFallbackFromStorage;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)sparseDictionary;
- (id)description;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (unsigned long long)hash;

@end
