@interface SharedDataMigration : NSObject

+ (void)migrateTabDatabaseIfNeeded;
+ (id)_userCachesDirectoryPath;
+ (BOOL)_migrateCacheFileFromSubpath:(id)a0 toSubpath:(id)a1 ensureIsDirectory:(BOOL)a2;
+ (void)migratePersistentStorageDefaults;
+ (BOOL)migrateRecentSearches;
+ (BOOL)migrateThumbnails;

@end
