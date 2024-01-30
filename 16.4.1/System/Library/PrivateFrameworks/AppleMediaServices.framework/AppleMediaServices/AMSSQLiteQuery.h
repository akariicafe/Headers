@class AMSSQLiteQueryDescriptor, AMSSQLiteConnection;

@interface AMSSQLiteQuery : NSObject {
    AMSSQLiteConnection *_connection;
    AMSSQLiteQueryDescriptor *_descriptor;
}

@property (readonly) AMSSQLiteConnection *connection;
@property (readonly) AMSSQLiteQueryDescriptor *queryDescriptor;
@property (readonly) long long countOfEntities;

- (void)enumeratePersistentIDsAndProperties:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_newSelectSQLWithProperties:(id)a0;
- (void)applyBinding:(id)a0 atIndex:(inout int *)a1;
- (id)copyEntityIdentifiers;
- (id)copySelectSQLWithProperties:(id)a0;
- (BOOL)createTemporaryTableWithName:(id)a0 properties:(id)a1;
- (BOOL)deleteAllEntities;
- (void)enumerateMemoryEntitiesUsingBlock:(id /* block */)a0;
- (void)enumerateMemoryEntitiesWithProperties:(id)a0 usingBlock:(id /* block */)a1;
- (id)initOnConnection:(id)a0 descriptor:(id)a1;

@end
