@class NSFetchRequest, NSManagedObjectID;

@interface NSSQLObjectFaultRequestContext : NSSQLStoreRequestContext {
    NSFetchRequest *_fetchRequest;
}

@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (nonatomic) BOOL forConflictAnalysis;

- (id)createFetchRequestContext;
- (id)fetchRequest;
- (void)dealloc;
- (id)initWithObjectID:(id)a0 context:(id)a1 sqlCore:(id)a2;
- (BOOL)executeRequestCore:(id *)a0;

@end
