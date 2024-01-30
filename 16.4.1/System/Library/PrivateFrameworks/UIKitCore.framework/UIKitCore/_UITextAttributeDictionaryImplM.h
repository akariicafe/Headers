@interface _UITextAttributeDictionaryImplM : _UITextAttributeDictionaryImplI

+ (BOOL)_isMutable;
+ (Class)_ignoringClass;
+ (Class)_storageClass;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setFallback:(id)a0;
- (void)removeAllObjects;
- (void)setIgnoresFallback:(BOOL)a0 forKey:(id)a1;
- (void)_removeFallbackFromStorage;

@end
