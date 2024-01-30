@interface EKPersistentResourceChangeNotification : EKPersistentNotification

+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (void)setLastModifiedDate:(id)a0;
- (id)resourceChanges;
- (void)setResourceChanges:(id)a0;
- (id)lastModifiedDate;

@end
