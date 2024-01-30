@class AMSDoubleLinkedList, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AMSLRUCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableDictionary *backingDictionary;
@property (retain, nonatomic) AMSDoubleLinkedList *backingList;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long maxSize;

- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)_removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)_addObject:(id)a0 forKey:(id)a1;
- (id)allObjectsAndKeys;
- (id)init;
- (id)objectForKey:(id)a0 withCreationBlock:(id /* block */)a1;
- (id)description;
- (id)initWithMaxSize:(unsigned long long)a0;
- (unsigned long long)_count;
- (void).cxx_destruct;

@end
