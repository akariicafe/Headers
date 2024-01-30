@class NSRelationshipDescription, NSManagedObjectID;

@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext {
    NSRelationshipDescription *_relationship;
    NSManagedObjectID *_objectID;
}

- (BOOL)executeRequestCore:(id *)a0;
- (void)dealloc;
- (id)initWithObjectID:(id)a0 relationship:(id)a1 context:(id)a2 sqlCore:(id)a3;

@end
