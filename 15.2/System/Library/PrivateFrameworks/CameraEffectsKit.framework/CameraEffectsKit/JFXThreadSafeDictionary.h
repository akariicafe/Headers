@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface JFXThreadSafeDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly) unsigned long long count;
@property (readonly) NSArray *allKeys;
@property (readonly) NSArray *allValues;

- (id)objectsForKeys:(id)a0 notFoundMarker:(id)a1;
- (id)valueForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setDictionary:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)removeObjectsForKeys:(id)a0;

@end
