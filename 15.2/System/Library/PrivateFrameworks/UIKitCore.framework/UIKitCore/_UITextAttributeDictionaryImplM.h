@interface _UITextAttributeDictionaryImplM : _UITextAttributeDictionaryImplI

+ (BOOL)_isMutable;
+ (Class)_storageClass;
+ (Class)_ignoringClass;

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)_removeFallbackFromStorage;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setIgnoresFallback:(BOOL)a0 forKey:(id)a1;
- (void)setFallback:(id)a0;

@end
