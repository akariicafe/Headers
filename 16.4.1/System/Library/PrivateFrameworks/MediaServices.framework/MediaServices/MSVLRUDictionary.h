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

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)endTransaction;
- (void)_removeNode:(id)a0;
- (void)performTransaction:(id /* block */)a0;
- (void)_removeNodeFromLinkedList:(id)a0;
- (void)_addNodeToFront:(id)a0;
- (void)beginTransaction;
- (void)removeObjectForKey:(id)a0;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)pokeKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)peekObjectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)isEqual:(id)a0;
- (void)_moveNodeToFront:(id)a0;
- (void)_shrinkToCapacity;
- (unsigned long long)hash;
- (id)allValues;
- (id)description;
- (id)allKeys;
- (void).cxx_destruct;

@end
