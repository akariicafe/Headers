@class NSString, NSMutableDictionary;

@interface CKVSQLiteDatabase : NSObject <CKVDatabase> {
    struct sqlite3 { } *_handle;
    NSMutableDictionary *_cachedSQLiteStatements;
}

@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) long long accessPermission;
@property (readonly, nonatomic) long long threadingMode;
@property (readonly, nonatomic) long long dataProtectionClass;
@property (readonly, nonatomic) long long databaseOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)closeWithError:(id *)a0;
- (BOOL)openWithError:(id *)a0;
- (id)executeCommand:(id)a0 options:(unsigned long long)a1;
- (BOOL)commitTransactionWithError:(id *)a0;
- (BOOL)executeCommand:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)rollbackTransactionWithError:(id *)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)beginTransactionWithError:(id *)a0;
- (id)initWithPath:(id)a0 accessPermission:(long long)a1 threadingMode:(long long)a2 dataProtectionClass:(long long)a3 databaseOptions:(long long)a4;
- (BOOL)executeCommandString:(id)a0 error:(id *)a1;
- (BOOL)cleanupWithError:(id *)a0;

@end
