@class SSSQLiteDatabase, SSSQLiteQueryDescriptor;

@interface SSSQLiteQuery : NSObject {
    SSSQLiteDatabase *_database;
    SSSQLiteQueryDescriptor *_descriptor;
}

@property (readonly) SSSQLiteDatabase *database;
@property (readonly) SSSQLiteQueryDescriptor *queryDescriptor;
@property (readonly) long long countOfEntities;

- (void)enumeratePersistentIDsAndProperties:(const id *)a0 count:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (id)copySelectSQLWithProperties:(const id *)a0 count:(unsigned long long)a1;
- (id)_newSelectSQLWithProperties:(const id *)a0 count:(unsigned long long)a1;
- (BOOL)createTemporaryTableWithName:(id)a0 properties:(const id *)a1 count:(unsigned long long)a2;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)a0;
- (id)initWithDatabase:(id)a0 descriptor:(id)a1;
- (BOOL)deleteAllEntities;
- (void)enumerateMemoryEntitiesWithProperties:(id)a0 usingBlock:(id /* block */)a1;
- (id)copyEntityIdentifiers;
- (void)enumerateMemoryEntitiesUsingBlock:(id /* block */)a0;
- (void)dealloc;
- (void)bindToSelectStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;

@end
