@interface _EFLRUCacheNode : NSObject

@property (readonly, nonatomic) id element;
@property (readonly, nonatomic) id key;
@property (retain, nonatomic) _EFLRUCacheNode *previous;
@property (retain, nonatomic) _EFLRUCacheNode *next;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 element:(id)a1;

@end
