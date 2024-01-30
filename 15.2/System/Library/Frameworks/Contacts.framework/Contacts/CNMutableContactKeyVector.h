@interface CNMutableContactKeyVector : CNContactKeyVector

+ (id)new;
+ (id)freezeIfClassIsImmutable:(id)a0;

- (void)intersectKeyVector:(id)a0;
- (id)freeze;
- (void)minusKeyVector:(id)a0;
- (void)unionKeyVector:(id)a0;
- (id)initWithKeyVector:(id)a0;
- (void)subtractKeys:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addKey:(id)a0;
- (void)addKeys:(id)a0;
- (void)subtractKey:(id)a0;

@end
