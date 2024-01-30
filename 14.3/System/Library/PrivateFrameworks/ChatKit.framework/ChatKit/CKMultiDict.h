@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKMultiDict : NSObject {
    unsigned long long _count;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (id)objectsForKey:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)allKeys;
- (id)peekObjectForKey:(id)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)popObjectForKey:(id)a0;
- (void)enqueueObject:(id)a0 forKey:(id)a1;
- (void)pushObject:(id)a0 forKey:(id)a1;
- (id)headObjectForKey:(id)a0;
- (id)dequeueObjectForKey:(id)a0;
- (void)removeObjectsForKey:(id)a0;

@end
