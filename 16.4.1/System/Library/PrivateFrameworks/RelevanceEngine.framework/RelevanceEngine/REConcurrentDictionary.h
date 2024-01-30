@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface REConcurrentDictionary : NSObject <NSCopying> {
    NSMapTable *_table;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long count;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeAllObjects;
- (id)init;
- (void).cxx_destruct;
- (id)initStrongToStrongDictionary;
- (id)initWeakToStrongDictionary;

@end
