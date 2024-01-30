@protocol _UITextAttributeDefaults;

@interface _UITextAttributeDictionary : NSDictionary

@property (readonly, nonatomic) id<_UITextAttributeDefaults> fallback;

+ (id)alloc;
+ (id)new;

- (id)sparseDictionary;
- (BOOL)ignoresFallbackForKey:(id)a0;
- (BOOL)usesFallbackForKey:(id)a0;
- (id)initWithDictionary:(id)a0 fallback:(id)a1;

@end
