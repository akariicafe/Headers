@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_archivingQueue;
    BOOL _needToPersist;
    NSObject<OS_os_log> *_log;
    NSMutableDictionary *_dictionary;
    void *_mappedMem;
}

@property (readonly, nonatomic) unsigned long long size;

+ (id)sharedInstance;
+ (unsigned long long)defaultSize;
+ (id)defaultName;
+ (id)keyValueStoreWithName:(id)a0 size:(unsigned long long)a1;

- (void).cxx_destruct;
- (BOOL)removeDataForKeys:(id)a0;
- (id)valueForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1;
- (id)description;
- (id)allKeys;
- (void *)memoryPointer;
- (void)setValue:(id)a0 forKey:(id)a1;
- (BOOL)removeDataForKey:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1 completionBlock:(id /* block */)a2;

@end
