@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKMultiDict : NSObject {
    unsigned long long _count;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lockQueue;
@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (void)removeAllObjects;
- (id)allKeys;
- (void)pushObject:(id)a0 forKey:(id)a1;
- (id)popObjectForKey:(id)a0;
- (void)enqueueObject:(id)a0 forKey:(id)a1;
- (id)headObjectForKey:(id)a0;
- (id)dequeueObjectForKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (id)peekObjectForKey:(id)a0;
- (void)removeObjectsForKey:(id)a0;
- (id)objectsForKey:(id)a0;

@end
