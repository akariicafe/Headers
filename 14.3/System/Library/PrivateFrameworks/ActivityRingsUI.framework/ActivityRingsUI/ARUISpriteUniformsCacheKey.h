@interface ARUISpriteUniformsCacheKey : NSObject

@property (readonly, nonatomic) unsigned long long hashValue;

+ (id)keyForSprite:(id)a0 context:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSprite:(id)a0 context:(id)a1;

@end
