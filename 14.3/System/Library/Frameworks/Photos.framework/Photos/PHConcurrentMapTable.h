@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PHConcurrentMapTable : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMapTable *_protectedTable;
}

+ (id)mapTable;

- (id)objectForKey:(id)a0;
- (void)_dispatchIsolatedWriteAsync:(id /* block */)a0;
- (void)_dispatchIsolatedWriteSync:(id /* block */)a0;
- (void)_dispatchIsolatedRead:(id /* block */)a0;
- (BOOL)tryRemoveObjectForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;

@end
