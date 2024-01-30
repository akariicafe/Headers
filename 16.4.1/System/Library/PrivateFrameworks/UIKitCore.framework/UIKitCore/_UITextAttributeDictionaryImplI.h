@class NSMutableDictionary, NSMutableSet;
@protocol _UITextAttributeDefaults;

@interface _UITextAttributeDictionaryImplI : NSMutableDictionary {
    id<_UITextAttributeDefaults> _fallback;
    NSMutableDictionary *_storage;
    NSMutableSet *_ignoring;
}

+ (BOOL)_isMutable;
+ (Class)_ignoringClass;
+ (Class)_storageClass;

- (id)fallback;
- (id)sparseDictionary;
- (id)_initWithStorage:(id)a0 fallback:(id)a1 ignoring:(id)a2;
- (id)_fullDictionary;
- (BOOL)ignoresFallbackForKey:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFallback:(id)a0;
- (id)objectForKey:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)initWithDictionary:(id)a0 fallback:(id)a1;
- (BOOL)isNSDictionary__;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)keyEnumerator;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)_initWithDictionary:(id)a0 copyItems:(BOOL)a1 fallback:(id)a2;
- (unsigned long long)hash;
- (id)init;
- (BOOL)usesFallbackForKey:(id)a0;
- (id)description;
- (id)allKeys;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (void)_removeFallbackFromStorage;
- (void).cxx_destruct;
- (id)_keysIfThereIsFallback;

@end
