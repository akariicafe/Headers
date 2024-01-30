@interface CADObjectOperationGroup : CADOperationGroup <CADObjectInterface>

+ (BOOL)requiresEventOrReminderAccess;
+ (BOOL)requiresEventAccess;
+ (BOOL)requiresReminderAccess;

- (void)CADDatabaseInsertObjectsWithTempObjectIDs:(id)a0 reply:(id /* block */)a1;
- (void)CADObject:(id)a0 getDataPropertyWithName:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 getNumberPropertyWithName:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 getRelatedObjectWithRelationName:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 setAttributes:(id)a1 andRelations:(id)a2 reply:(id /* block */)a3;
- (void)CADObject:(id)a0 getPropertiesWithNames:(id)a1 reply:(id /* block */)a2;
- (void)CADObjectExists:(id)a0 reply:(id /* block */)a1;
- (void)CADObjectsExist:(id)a0 reply:(id /* block */)a1;
- (void)CADObjectIsManaged:(id)a0 reply:(id /* block */)a1;
- (void)CADObject:(id)a0 getDatePropertyWithName:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 getStringPropertyWithName:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 getRelatedObjectsWithRelationName:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 getPropertyWithName:(id)a1 reply:(id /* block */)a2;
- (void)CADDatabaseDeleteObjectsWithObjectIDs:(id)a0 reply:(id /* block */)a1;

@end
