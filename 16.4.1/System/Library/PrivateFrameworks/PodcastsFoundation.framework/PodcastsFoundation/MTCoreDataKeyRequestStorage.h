@interface MTCoreDataKeyRequestStorage : NSObject <MTSecureKeyRequestStorage>

- (id)init;
- (BOOL)saveKeyDataFor:(id)a0;
- (BOOL)keyExistsInStorageFor:(long long)a0;
- (void)markOfflineKeyFor:(long long)a0 pendingDeletion:(BOOL)a1;
- (void)removeKeyDataFor:(id)a0;
- (id)retrieveKeyDataFor:(id)a0;

@end
