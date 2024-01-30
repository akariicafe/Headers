@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKVConcurrentDictionary : NSMutableDictionary {
    NSMutableDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)allValues;
- (void)setDictionary:(id)a0;
- (id)allKeys;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)init;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;

@end
