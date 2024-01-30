@class NSString;

@interface NNMKProtectedSQLiteConnection : NNMKSQLiteConnection

@property (retain, nonatomic) NSString *protectedDatabasePath;
@property (retain, nonatomic) NSString *protectedDatabaseName;
@property (readonly, nonatomic) BOOL protectedDatabaseAttached;

- (void).cxx_destruct;
- (id)_vfsModuleName;
- (int)attachProtectedDatabase;
- (void)dettachProtectedDatabase;
- (id)initWithUnprotectedDatabaseFileName:(id)a0 protectedDatabaseFileName:(id)a1 inDirectory:(id)a2 protectedDatabaseName:(id)a3 errorCode:(int *)a4;

@end
