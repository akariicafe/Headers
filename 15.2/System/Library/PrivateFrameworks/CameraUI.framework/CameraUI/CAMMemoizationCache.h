@class NSMutableDictionary;

@interface CAMMemoizationCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_dictionary;
@property (readonly, nonatomic) BOOL memoizesNil;

- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)initWithMemoizesNil:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (id)objectForKey:(id)a0 memoizationBlock:(id /* block */)a1;

@end
