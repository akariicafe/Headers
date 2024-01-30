@interface CKSQLiteError : CKInternalError

@property (readonly, nonatomic) int sqliteCode;
@property (readonly, nonatomic) int sqliteExtendedCode;
@property (readonly, nonatomic) BOOL databaseIsCorrupt;

+ (id)errorForSQLite:(struct sqlite3 { } *)a0 message:(id)a1;
+ (id)testErrorWithDatabaseCorruption;
+ (id)errorForSQLite:(struct sqlite3 { } *)a0 message:(id)a1 args:(char *)a2;

- (BOOL)CK_isCKSQLiteError;
- (id)description;

@end
