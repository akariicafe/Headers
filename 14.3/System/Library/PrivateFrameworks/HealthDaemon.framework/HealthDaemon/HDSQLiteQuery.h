@class HDSQLiteDatabase, HDSQLiteQueryDescriptor, NSString;

@interface HDSQLiteQuery : NSObject {
    HDSQLiteQueryDescriptor *_descriptor;
}

@property (readonly) HDSQLiteDatabase *database;
@property (readonly) HDSQLiteQueryDescriptor *queryDescriptor;
@property (readonly, copy) NSString *lastSQLStatement;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0 descriptor:(id)a1;
- (void)enumerateEntitiesUsingBlock:(id /* block */)a0;
- (BOOL)deleteAllEntitiesWithError:(id *)a0;
- (void)bindToSelectStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)copySelectSQLWithProperties:(id)a0;
- (BOOL)enumeratePersistentIDsAndProperties:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (void)_expandLastSQLStatementIfNecessary:(struct sqlite3_stmt { } *)a0;
- (BOOL)enumerateProperties:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;

@end
