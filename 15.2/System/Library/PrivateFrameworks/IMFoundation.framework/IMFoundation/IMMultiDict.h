@class NSArray, NSMutableDictionary;

@interface IMMultiDict : NSObject

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *allKeys;

- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (unsigned long long)countForKey:(id)a0;
- (void)removeAllObjects;
- (void)pushObject:(id)a0 forKey:(id)a1;
- (id)popObjectForKey:(id)a0;
- (void)enqueueObject:(id)a0 forKey:(id)a1;
- (id)headObjectForKey:(id)a0;
- (id)dequeueObjectForKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)removeObject:(id)a0 forKey:(id)a1;
- (id)peekObjectForKey:(id)a0;
- (void)removeObjectsForKey:(id)a0;
- (id)objectsForKey:(id)a0;

@end
