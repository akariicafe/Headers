@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GKThreadsafeDictionary : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)objectForKeyWillReplace:(id)a0 objectProducerBlock:(id /* block */)a1;
- (void)dealloc;
- (void)removeObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (id)allKeys;
- (id)objectForKey:(id)a0 objectProducerBlock:(id /* block */)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)readFromDictionary:(id /* block */)a0;
- (id)dictionaryCopy;
- (void)removeAllObjects;
- (id)allObjects;
- (id)initWithName:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)writeToDictionary:(id /* block */)a0;

@end
