@interface EKPersistentExceptionDate : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (int)entityType;
- (id)owner;
- (void)setOwner:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDate:(id)a0;
- (id)date;
- (id)description;

@end
