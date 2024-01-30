@class CKDatabase, CKDatabaseOperationInfo;

@interface CKDatabaseOperation : CKOperation

@property (readonly, nonatomic) CKDatabaseOperationInfo *operationInfo;
@property (retain, nonatomic) CKDatabase *database;

- (BOOL)CKOperationShouldRun:(id *)a0;
- (void)fillFromOperationInfo:(id)a0;
- (id)flowControlKey;
- (void).cxx_destruct;
- (void)fillOutOperationInfo:(id)a0;
- (long long)databaseScope;

@end
