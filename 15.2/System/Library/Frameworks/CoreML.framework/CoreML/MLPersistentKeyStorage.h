@interface MLPersistentKeyStorage : NSObject

+ (id)syncQueue;
+ (id)persistentKeyStorageURL;
+ (BOOL)storeKeyBlob:(id)a0 forKeyIdentifier:(id)a1 error:(id *)a2;
+ (id)retrieveKeyBlobForKeyIdentifier:(id)a0;

@end
