@interface EKPersistentExceptionDate : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (int)entityType;
- (id)owner;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)date;
- (void)setOwner:(id)a0;
- (id)description;
- (void)setDate:(id)a0;

@end
