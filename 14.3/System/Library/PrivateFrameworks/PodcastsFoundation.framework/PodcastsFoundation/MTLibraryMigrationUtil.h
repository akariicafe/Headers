@interface MTLibraryMigrationUtil : NSObject

+ (BOOL)needsDataMigration;
+ (BOOL)isNewInstall;
+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;
+ (BOOL)needsCoreDataMigration;
+ (BOOL)needsImageStoreMigration;
+ (BOOL)isMomCompatible:(id)a0;

@end
