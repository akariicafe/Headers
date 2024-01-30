@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKMultiDict : NSObject {
    unsigned long long _count;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (void)removeObjectsForKey:(id)a0;
- (id)peekObjectForKey:(id)a0;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)objectsForKey:(id)a0;
- (id)init;
- (id)description;
- (id)allKeys;
- (void).cxx_destruct;
- (id)dequeueObjectForKey:(id)a0;
- (void)enqueueObject:(id)a0 forKey:(id)a1;
- (id)headObjectForKey:(id)a0;
- (id)popObjectForKey:(id)a0;
- (void)pushObject:(id)a0 forKey:(id)a1;

@end
