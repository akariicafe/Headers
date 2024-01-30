@interface WebStorageManager : NSObject

+ (id)_storageDirectoryPath;
+ (void)setStorageDatabaseIdleInterval:(double)a0;
+ (void)closeIdleLocalStorageDatabases;
+ (id)sharedWebStorageManager;

- (id)init;
- (id)origins;
- (void)deleteAllOrigins;
- (void)deleteOrigin:(id)a0;
- (unsigned long long)diskUsageForOrigin:(id)a0;
- (void)syncFileSystemAndTrackerDatabase;
- (void)syncLocalStorage;

@end
