@protocol _UITextAttributeDefaults;

@interface _UITextAttributeDictionary : NSDictionary

@property (readonly, nonatomic) id<_UITextAttributeDefaults> fallback;

+ (id)new;
+ (id)alloc;

- (BOOL)ignoresFallbackForKey:(id)a0;
- (id)initWithDictionary:(id)a0 fallback:(id)a1;
- (BOOL)usesFallbackForKey:(id)a0;
- (id)sparseDictionary;

@end
