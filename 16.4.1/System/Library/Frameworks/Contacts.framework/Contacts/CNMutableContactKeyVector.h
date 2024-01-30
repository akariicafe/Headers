@interface CNMutableContactKeyVector : CNContactKeyVector

+ (id)freezeIfClassIsImmutable:(id)a0;
+ (id)new;

- (id)freeze;
- (void)addKeys:(id)a0;
- (void)unionKeyVector:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)intersectKeyVector:(id)a0;
- (void)addKey:(id)a0;
- (id)initWithKeyVector:(id)a0;
- (void)subtractKey:(id)a0;
- (id)init;
- (void)subtractKeys:(id)a0;
- (void)minusKeyVector:(id)a0;

@end
