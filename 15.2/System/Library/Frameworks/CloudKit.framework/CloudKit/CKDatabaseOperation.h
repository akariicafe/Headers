@class CKDatabase, CKDatabaseOperationInfo;

@interface CKDatabaseOperation : CKOperation

@property (readonly, nonatomic) CKDatabaseOperationInfo *operationInfo;
@property (retain, nonatomic) CKDatabase *database;

- (void)fillOutOperationInfo:(id)a0;
- (void)fillFromOperationInfo:(id)a0;
- (long long)databaseScope;
- (id)flowControlKey;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)a0;

@end
