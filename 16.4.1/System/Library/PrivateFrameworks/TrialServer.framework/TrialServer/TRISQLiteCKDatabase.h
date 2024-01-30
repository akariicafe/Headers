@class _PASSqliteDatabase, NSString, NSObject, CKContainer;
@protocol OS_dispatch_queue, TRISQLiteCKDatabaseDelegate;

@interface TRISQLiteCKDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    NSString *_parentDir;
    NSString *_assetDir;
    NSString *_assetCacheDir;
    _PASSqliteDatabase *_db;
    NSObject<OS_dispatch_queue> *_opQueue;
}

@property (weak, nonatomic) CKContainer *container;
@property (retain, nonatomic) id<TRISQLiteCKDatabaseDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mockContainerWithIdentifier:(id)a0 database:(id)a1;

- (BOOL)migrateToVersion:(unsigned int)a0;
- (void)addOperation:(id)a0;
- (void)saveRecordZone:(id)a0 completionHandler:(id /* block */)a1;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (void)deleteRecordZoneWithID:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (id)migrations;
- (id)databaseHandle;
- (void).cxx_destruct;
- (void)closePermanently;
- (id)_allRecordTypes;
- (id)_loadArrayForRecordType:(id)a0 recordId:(id)a1 fieldKey:(id)a2 indexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 txn:(id)a4 error:(id *)a5;
- (BOOL)_replaceArrayFieldWithKey:(id)a0 recordType:(id)a1 recordId:(id)a2 values:(id)a3 txn:(id)a4 error:(id *)a5;
- (void)_processModifyRecordsOperation:(id)a0;
- (id)_assetForLocallyStoredAssetWithFilename:(id)a0 forRecordId:(id)a1 error:(id *)a2;
- (void)_bindParam:(int)a0 toScalarValue:(id)a1 forStatement:(id)a2 recordId:(id)a3;
- (id)_createRecordFromSelectRow:(id)a0 recordType:(id)a1 unindexedDesiredKeys:(id)a2 indexedDesiredKeys:(id)a3 txn:(id)a4 error:(id *)a5;
- (id)_createTableForArrayFieldWithKey:(id)a0 attachedToRecordType:(id)a1 sqliteContainedType:(id)a2;
- (id)_createTableForRecordType:(id)a0 scalarFields:(id)a1;
- (void)_deleteRecordsWithRecordIds:(id)a0 recordType:(id)a1 txn:(id)a2;
- (id)_errorWithCode:(long long)a0 message:(id)a1;
- (id)_evalFetchRecordsOperationWithRecordIds:(id)a0 recordType:(id)a1 desiredKeys:(id)a2 txn:(id)a3 error:(id *)a4;
- (BOOL)_evalQueryOperationWithRecordType:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2 offset:(unsigned long long)a3 resultsLimit:(unsigned long long)a4 desiredKeys:(id)a5 txn:(id)a6 error:(id *)a7 recordMatchedBlock:(id /* block */)a8;
- (id)_filenameForLocallyCopiedAsset:(id)a0 forRecordId:(id)a1 error:(id *)a2;
- (id)_keysForFieldsOfRecordType:(id)a0;
- (BOOL)_parseArrayExpression:(id)a0 forRecordType:(id)a1 usingCTEName:(id)a2 toSQLCommonTableExpression:(id *)a3 paramBindings:(id *)a4 error:(id *)a5;
- (BOOL)_parseDecimalString:(id)a0 value:(unsigned long long *)a1;
- (BOOL)_parseDesiredKeys:(id)a0 recordType:(id)a1 unindexedFields:(id *)a2 indexedFields:(id *)a3 error:(id *)a4;
- (id)_parseIndexedFieldKey:(id)a0 indexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (BOOL)_parseScalarExpression:(id)a0 forRecordType:(id)a1 toSQLExpr:(id *)a2 paramBindings:(id *)a3 error:(id *)a4;
- (void)_processFetchRecordsOperation:(id)a0;
- (void)_processQueryOperation:(id)a0;
- (BOOL)_translateAnyModifiedArrayRHSComparisonPredicate:(id)a0 forRecordType:(id)a1 toSQLExpr:(id *)a2 paramBindings:(id *)a3 error:(id *)a4;
- (BOOL)_translateAnyModifiedScalarComparisonPredicate:(id)a0 forRecordType:(id)a1 toSQLExpr:(id *)a2 paramBindings:(id *)a3 error:(id *)a4;
- (BOOL)_translateArrayRHSComparisonPredicate:(id)a0 forRecordType:(id)a1 toSQLExpr:(id *)a2 paramBindings:(id *)a3 error:(id *)a4;
- (BOOL)_translateComparisonPredicate:(id)a0 forRecordType:(id)a1 toSQLExpr:(id *)a2 paramBindings:(id *)a3 error:(id *)a4;
- (BOOL)_translateCompoundPredicate:(id)a0 forRecordType:(id)a1 toSQLExpr:(id *)a2 paramBindings:(id *)a3 error:(id *)a4;
- (BOOL)_translateDirectModifiedArrayRHSComparisonPredicate:(id)a0 forRecordType:(id)a1 toSQLExpr:(id *)a2 paramBindings:(id *)a3 error:(id *)a4;
- (BOOL)_translateDirectModifiedScalarComparisonPredicate:(id)a0 forRecordType:(id)a1 toSQLExpr:(id *)a2 paramBindings:(id *)a3 error:(id *)a4;
- (BOOL)_translatePredicate:(id)a0 forRecordType:(id)a1 toSQLExpr:(id *)a2 paramBindings:(id *)a3 error:(id *)a4;
- (BOOL)_translateScalarComparisonPredicate:(id)a0 forRecordType:(id)a1 toSQLExpr:(id *)a2 paramBindings:(id *)a3 error:(id *)a4;
- (BOOL)_upsertRecord:(id)a0 txn:(id)a1 error:(id *)a2;
- (id)_valueTypesForFieldsOfRecordType:(id)a0;
- (id)initWithParentDir:(id)a0 assetCacheDir:(id)a1;

@end
