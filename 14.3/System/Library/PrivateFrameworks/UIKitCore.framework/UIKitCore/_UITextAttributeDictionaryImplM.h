@interface _UITextAttributeDictionaryImplM : _UITextAttributeDictionaryImplI

+ (Class)_storageClass;
+ (BOOL)_isMutable;
+ (Class)_ignoringClass;

- (void)_removeFallbackFromStorage;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setFallback:(id)a0;
- (void)setIgnoresFallback:(BOOL)a0 forKey:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;

@end
