@interface ICDelegateAccountStoreSchema : NSObject

@property (class, readonly) long long currentVersion;

+ (double)valueForDate:(id)a0;
+ (id)dateForValue:(double)a0;
+ (BOOL)_createDefaultSchemaWithConnection:(id)a0 error:(id *)a1;
+ (id)defaultDatabasePath;
+ (BOOL)setupWithConnection:(id)a0 error:(id *)a1;

@end
