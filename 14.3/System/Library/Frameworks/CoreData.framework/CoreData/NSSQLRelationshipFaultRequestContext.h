@class NSRelationshipDescription, NSSQLModel, NSManagedObjectID;

@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext

@property (readonly, nonatomic) NSRelationshipDescription *relationship;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSSQLModel *sqlModel;

- (void)dealloc;
- (BOOL)executeRequestCore:(id *)a0;
- (id)initWithObjectID:(id)a0 relationship:(id)a1 context:(id)a2 sqlCore:(id)a3;

@end
