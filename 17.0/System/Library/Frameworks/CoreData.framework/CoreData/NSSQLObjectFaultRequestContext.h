@class NSFetchRequest, NSManagedObjectID;

@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext {
    NSManagedObjectID *_objectID;
    NSFetchRequest *_fetchRequest;
    BOOL _forConflictAnalysis;
}

- (void)dealloc;
- (id)initWithObjectID:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)executeRequestCore:(id *)a0;

@end
