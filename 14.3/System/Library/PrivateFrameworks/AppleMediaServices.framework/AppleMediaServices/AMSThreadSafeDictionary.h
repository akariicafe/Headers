@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AMSThreadSafeDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *backingDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backingDictionaryAccessQueue;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;

@end
