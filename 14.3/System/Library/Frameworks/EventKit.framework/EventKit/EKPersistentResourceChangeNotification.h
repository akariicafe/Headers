@interface EKPersistentResourceChangeNotification : EKPersistentNotification

+ (id)relations;
+ (Class)meltedClass;

- (void)setLastModifiedDate:(id)a0;
- (int)entityType;
- (id)resourceChanges;
- (void)setResourceChanges:(id)a0;
- (id)lastModifiedDate;

@end
