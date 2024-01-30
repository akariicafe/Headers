@interface TPSKVOManager : NSObject

@property (weak, nonatomic) id observer;
@property (nonatomic) struct __CFDictionary { } *KVODictionary;

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void)removeAllKVOObjects;
- (void)addKVOObject:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeKVOObject:(id)a0 forKeyPath:(id)a1;
- (void)removeKVOForObject:(id)a0;

@end
