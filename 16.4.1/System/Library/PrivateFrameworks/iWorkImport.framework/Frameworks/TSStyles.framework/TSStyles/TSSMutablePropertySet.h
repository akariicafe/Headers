@interface TSSMutablePropertySet : TSSPropertySet

- (void)addProperty:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeProperty:(int)a0;
- (id)init;
- (void)addProperties:(id)a0;
- (id)initWithFirstProperty:(int)a0 argumentList:(char *)a1;
- (id)initWithPropertySet:(id)a0;
- (void)intersectPropertySet:(id)a0;
- (void)removeAllPropertyValues;
- (void)removeProperties:(id)a0;

@end
