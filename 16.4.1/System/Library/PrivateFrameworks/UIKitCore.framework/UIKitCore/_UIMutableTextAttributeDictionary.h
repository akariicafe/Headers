@protocol _UITextAttributeDefaults;

@interface _UIMutableTextAttributeDictionary : NSMutableDictionary

@property (retain, nonatomic) id<_UITextAttributeDefaults> fallback;

+ (id)alloc;
+ (id)new;

- (id)sparseDictionary;
- (BOOL)ignoresFallbackForKey:(id)a0;
- (id)initWithFallback:(id)a0;
- (id)initWithDictionary:(id)a0 fallback:(id)a1;
- (void)setIgnoresFallback:(BOOL)a0 forKey:(id)a1;
- (BOOL)usesFallbackForKey:(id)a0;

@end
