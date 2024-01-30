@interface CADObjectOperationGroup : CADOperationGroup <CADObjectInterface>

+ (BOOL)requiresEventAccess;

- (void)CADObjectsExist:(id)a0 reply:(id /* block */)a1;
- (void)CADObject:(id)a0 getNumberPropertyWithName:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 getStringPropertyWithName:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 getRelatedObjectsWithRelationName:(id)a1 reply:(id /* block */)a2;
- (void)CADObjectIsManaged:(id)a0 reply:(id /* block */)a1;
- (void)CADObject:(id)a0 getPropertyWithName:(id)a1 reply:(id /* block */)a2;
- (void)CADObjectExists:(id)a0 reply:(id /* block */)a1;
- (void)CADObject:(id)a0 getDatePropertyWithName:(id)a1 reply:(id /* block */)a2;
- (void)CADObjects:(id)a0 getPropertiesWithNames:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 getPropertiesWithNames:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 getSecurityScopedURLWrapperPropertyWithName:(id)a1 reply:(id /* block */)a2;
- (void)CADObject:(id)a0 getDataPropertyWithName:(id)a1 reply:(id /* block */)a2;
- (BOOL)_requiresSpecialEntitlementToReadSecurityScopedURLWrapperForProperty:(id)a0;
- (void)CADObject:(id)a0 getRelatedObjectWithRelationName:(id)a1 reply:(id /* block */)a2;

@end
