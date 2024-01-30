@interface MTLibraryMigrationUtil : NSObject

+ (BOOL)isNewInstall;
+ (BOOL)needsCoreDataMigration;
+ (id)libraryImageStoreType;
+ (BOOL)needsImageStoreMigration;
+ (BOOL)needsDataMigration;
+ (BOOL)createPersistentStoreForModel:(id)a0 attemptMigration:(BOOL)a1;
+ (BOOL)isMomCompatible:(id)a0;
+ (void)setLibraryImageStoreType:(id)a0;

@end
