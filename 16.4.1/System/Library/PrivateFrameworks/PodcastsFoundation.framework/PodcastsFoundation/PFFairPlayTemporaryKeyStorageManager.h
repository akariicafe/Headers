@interface PFFairPlayTemporaryKeyStorageManager : NSObject <PFFairPlayTemporaryKeyStorageManaging> {
    void /* unknown type, empty encoding */ keyLoader;
    void /* unknown type, empty encoding */ episodeFetcher;
    void /* unknown type, empty encoding */ storageProvider;
    void /* unknown type, empty encoding */ internalQueue;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logPrefix;
}

- (id)init;
- (void).cxx_destruct;
- (void)clearTemporaryFairPlayKeyFor:(long long)a0 completion:(id /* block */)a1;

@end
