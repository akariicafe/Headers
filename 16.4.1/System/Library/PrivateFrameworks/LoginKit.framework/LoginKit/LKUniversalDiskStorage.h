@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface LKUniversalDiskStorage : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (retain, nonatomic) NSDictionary *storageDictionary;
@property (nonatomic, getter=isStorageDictionaryModified) BOOL storageDictionaryModified;

+ (id)sharedStorage;
+ (id)localDictionaryPath;
+ (id)localDirectoryPath;

- (id)init;
- (void).cxx_destruct;
- (void)_refreshStorageCacheIfNeeded;
- (void)clearAllKeyValueStorage:(id /* block */)a0;
- (BOOL)clearKeys:(id)a0;
- (void)clearKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)retrieveValueForKey:(id)a0;
- (void)saveKeyValuePairs:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)saveKeyValuePairs:(id)a0 error:(id *)a1;

@end
