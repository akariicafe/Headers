@class NSMutableDictionary;

@interface NFCallbackStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *store;

- (id)init;
- (void).cxx_destruct;
- (void)storeCallbackDefinition:(id)a0 forKey:(id)a1 scope:(id)a2;
- (id)lookupForKey:(id)a0;

@end
