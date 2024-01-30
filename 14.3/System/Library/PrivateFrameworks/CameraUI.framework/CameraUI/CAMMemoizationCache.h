@class NSMutableDictionary;

@interface CAMMemoizationCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_dictionary;
@property (readonly, nonatomic) BOOL memoizesNil;

- (id)init;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0 memoizationBlock:(id /* block */)a1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithMemoizesNil:(BOOL)a0;

@end
