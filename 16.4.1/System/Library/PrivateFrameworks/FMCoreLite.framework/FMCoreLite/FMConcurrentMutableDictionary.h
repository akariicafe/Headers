@class NSMutableDictionary, FMReadWriteLock;

@interface FMConcurrentMutableDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *underlyingDictionary;
@property (retain, nonatomic) FMReadWriteLock *lock;
@property (readonly, nonatomic) unsigned long long count;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)objectForKey:(id)a0 withConstructor:(id /* block */)a1;
- (void)removeAllObjects;
- (id)nativeDictionary;
- (id)initWithDictionary:(id)a0;
- (id)popObjectforKey:(id)a0;
- (id)init;
- (id)replaceObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
