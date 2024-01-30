@interface PFFairPlayTemporaryStorageProvider : NSObject <PFFairPlayTemporaryKeyStorageProviding> {
    void /* unknown type, empty encoding */ fileManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logPrefix;
}

- (id)init;
- (void).cxx_destruct;
- (id)createDirectoryFor:(long long)a0 error:(id *)a1;
- (BOOL)directoryExistsFor:(long long)a0;
- (BOOL)removeDirectoryFor:(long long)a0 error:(id *)a1;

@end
