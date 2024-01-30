@interface EKPersistentConference : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (id)urlString;
- (void)setUrlString:(id)a0;
- (void)setInfo:(id)a0;
- (id)info;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
