@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface LKUniversalDiskStorage : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } lock;
@property (retain, nonatomic) NSDictionary *storageDictionary;
@property (nonatomic, getter=isStorageDictionaryModified) BOOL storageDictionaryModified;

+ (id)sharedStorage;
+ (id)localDirectoryPath;
+ (id)localDictionaryPath;

- (id)init;
- (void).cxx_destruct;
- (void)_refreshStorageCacheIfNeeded;
- (void)saveKeyValuePairs:(id)a0 completionHandler:(id /* block */)a1;
- (id)retrieveValueForKey:(id)a0;
- (void)clearKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearAllKeyValueStorage:(id /* block */)a0;

@end
