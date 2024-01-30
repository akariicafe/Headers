@class NSArray, NSString, HDHFDataStore, HDSQLiteDatabase, _HKBehavior;
@protocol HDDatabaseMigrationTransactionDelegate;

@interface HDDatabaseMigrationTransaction : NSObject

@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, copy, nonatomic) NSArray *schemaProviders;
@property (weak, nonatomic) id<HDDatabaseMigrationTransactionDelegate> delegate;
@property (readonly, nonatomic) HDSQLiteDatabase *defaultDatabase;
@property (readonly, copy, nonatomic) NSString *defaultDatabaseName;
@property (readonly, nonatomic) long long defaultProtectionClass;
@property (readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase;
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase;
@property (readonly, nonatomic) HDHFDataStore *HFDataStore;
@property (readonly, nonatomic) BOOL isProtectedMigration;

+ (id)unprotectedMigrationTransactionForMigrationTransaction:(id)a0;

- (id)databaseNameForProtectionClass:(long long)a0;
- (void).cxx_destruct;
- (long long)migrateOrCreateSchemaWithError:(id *)a0;
- (id)initWithUnprotectedDatabase:(id)a0 protectedDatabase:(id)a1 HFDataStore:(id)a2 schemaProviders:(id)a3 behavior:(id)a4;

@end
