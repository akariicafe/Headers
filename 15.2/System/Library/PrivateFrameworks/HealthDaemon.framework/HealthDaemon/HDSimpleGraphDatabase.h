@class HDSQLiteDatabase, NSURL;

@interface HDSimpleGraphDatabase : NSObject {
    HDSQLiteDatabase *_database;
}

@property (class, copy, nonatomic) id /* block */ unitTesting_didInitGraphDatabaseHandler;

@property (retain, nonatomic) HDSQLiteDatabase *unitTesting_underlyingDatabase;
@property (copy, nonatomic) id /* block */ unitTesting_didCreateDatabaseConnectionHandler;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=isOpen) BOOL open;

+ (id)graphDatabaseWithURL:(id)a0 error:(id *)a1;

- (BOOL)deleteWithError:(id *)a0;
- (BOOL)setMetadataValue:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)enumerateAttributesForNodeWithID:(long long)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (BOOL)foreignKeysEnable:(BOOL)a0 error:(id *)a1;
- (void)close;
- (id)nodeForID:(long long)a0 error:(id *)a1;
- (BOOL)enumerateRelationshipsForNodeWithID:(long long)a0 fetchType:(long long)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (BOOL)addAttributeWithID:(long long)a0 value:(id)a1 nodeID:(long long)a2 error:(id *)a3;
- (BOOL)enumerateRelationshipsForPredicate:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (BOOL)insertRawRelationshipWithRowID:(long long)a0 subjectID:(long long)a1 nameID:(long long)a2 objectID:(long long)a3 error:(id *)a4;
- (BOOL)performTransactionWithError:(id *)a0 write:(BOOL)a1 block:(id /* block */)a2;
- (BOOL)insertRawAttributeWithRowID:(long long)a0 nodeID:(long long)a1 keyID:(long long)a2 value:(id)a3 valueTypeID:(long long)a4 error:(id *)a5;
- (BOOL)deleteNodeWithID:(long long)a0 error:(id *)a1;
- (BOOL)insertRawOntologyValueWithRowID:(long long)a0 value:(id)a1 table:(id)a2 error:(id *)a3;
- (id)schemaVersionWithError:(id *)a0;
- (BOOL)unitTesting_addRelationshipTypeWithName:(id)a0 nameID:(long long)a1 error:(id *)a2;
- (id)description;
- (BOOL)enumerateNodesContainingAttributeWithID:(long long)a0 value:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (BOOL)addRelationshipWithID:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 error:(id *)a3;
- (id)init;
- (BOOL)deleteNodesWithIDs:(id)a0 error:(id *)a1;
- (id)firstNodeWithName:(id)a0 error:(id *)a1;
- (id)unitTesting_countOfNodesWithError:(id *)a0;
- (void)dealloc;
- (BOOL)unitTesting_removeRelationshipWithID:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 error:(id *)a3;
- (BOOL)enumerateNodesForPredicate:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
- (id)unitTesting_countOfNodesWithRelationshipID:(long long)a0 error:(id *)a1;
- (id)metadataValueForKey:(id)a0 error:(id *)a1;
- (void)onCommit:(id /* block */)a0 orRollback:(id /* block */)a1;
- (id)insertNodeWithName:(id)a0 error:(id *)a1;
- (BOOL)enumerateNodesWithIDs:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;

@end
