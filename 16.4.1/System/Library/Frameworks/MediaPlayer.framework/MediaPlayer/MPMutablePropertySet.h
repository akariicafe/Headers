@interface MPMutablePropertySet : MPPropertySet

+ (id)new;

- (id)initWithProperties:(id)a0 relationships:(id)a1;
- (void)addProperty:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeProperty:(id)a0;
- (id)init;
- (void)addRelationship:(id)a0 properties:(id)a1;
- (void)removeRelationship:(id)a0;

@end
