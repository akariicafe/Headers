@interface WebStorageManager : NSObject

+ (id)_storageDirectoryPath;
+ (id)sharedWebStorageManager;
+ (void)setStorageDatabaseIdleInterval:(double)a0;
+ (void)closeIdleLocalStorageDatabases;

- (id)origins;
- (id)init;
- (unsigned long long)diskUsageForOrigin:(id)a0;
- (void)deleteOrigin:(id)a0;
- (void)deleteAllOrigins;
- (void)syncLocalStorage;
- (void)syncFileSystemAndTrackerDatabase;

@end
