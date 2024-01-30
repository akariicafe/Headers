@class NSMutableDictionary, MSVLRUDictionaryNode;
@protocol MSVLRUDictionaryDelegate;

@interface MSVLRUDictionary : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) MSVLRUDictionaryNode *head;
@property (retain, nonatomic) MSVLRUDictionaryNode *tail;
@property (nonatomic) long long transactionCount;
@property (weak, nonatomic) id<MSVLRUDictionaryDelegate> delegate;
@property (nonatomic) long long maximumCapacity;
@property (readonly, nonatomic) long long count;

- (void)performTransaction:(id /* block */)a0;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (void)removeObjectForKey:(id)a0;
- (void)beginTransaction;
- (void)removeAllObjects;
- (id)allValues;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)endTransaction;
- (id)allKeys;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)description;
- (void)pokeKey:(id)a0;
- (void)_removeNode:(id)a0;
- (void)_addNodeToFront:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)objectForKey:(id)a0;
- (void)_moveNodeToFront:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_removeNodeFromLinkedList:(id)a0;
- (void)_shrinkToCapacity;
- (id)peekObjectForKey:(id)a0;
- (unsigned long long)hash;
- (id)objectForKeyedSubscript:(id)a0;

@end
