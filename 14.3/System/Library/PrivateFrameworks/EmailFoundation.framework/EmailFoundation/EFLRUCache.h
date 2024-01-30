@class NSMutableDictionary, NSString, NSObject, _EFLRUCacheNode;
@protocol OS_os_log;

@interface EFLRUCache : NSObject <EFLoggable, EFPubliclyDescribable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) NSMutableDictionary *nodesByKey;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) _EFLRUCacheNode *firstNode;
@property (retain, nonatomic) _EFLRUCacheNode *lastNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (unsigned long long)test_size;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)_pruneLastObject;
- (void)_pushToTop:(id)a0;
- (id)test_firstNode;
- (id)test_lastNode;
- (void)addObject:(id)a0 forKey:(id)a1;

@end
