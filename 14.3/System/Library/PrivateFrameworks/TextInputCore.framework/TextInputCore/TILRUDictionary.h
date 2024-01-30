@class TILRUDictionaryNode;

@interface TILRUDictionary : NSObject {
    struct __CFDictionary { } *_dictionary;
    unsigned long long _maxCount;
    TILRUDictionaryNode *_head;
    TILRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)a0;

- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)_moveNodeToFront:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeysInLRUOrder;
- (id)description;
- (id)allKeys;
- (id)allValuesInLRUOrder;
- (void)_addNodeToFront:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)_removeNode:(id)a0;
- (unsigned long long)count;
- (void)_removeNodeFromLinkedList:(id)a0;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (unsigned long long)linkedListCount;
- (void)removeAllObjects;
- (id)objectForKeyWithoutAffectingLRU:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
