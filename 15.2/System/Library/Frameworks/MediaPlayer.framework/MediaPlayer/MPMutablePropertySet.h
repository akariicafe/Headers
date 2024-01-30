@interface MPMutablePropertySet : MPPropertySet

+ (id)new;

- (void)removeProperty:(id)a0;
- (void)addRelationship:(id)a0 properties:(id)a1;
- (void)removeRelationship:(id)a0;
- (void)addProperty:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProperties:(id)a0 relationships:(id)a1;

@end
