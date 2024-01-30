@interface EKPersistentResourceChangeNotification : EKPersistentNotification

+ (id)relations;
+ (Class)meltedClass;

- (int)entityType;
- (id)lastModifiedDate;
- (void)setLastModifiedDate:(id)a0;
- (id)resourceChanges;
- (void)setResourceChanges:(id)a0;

@end
