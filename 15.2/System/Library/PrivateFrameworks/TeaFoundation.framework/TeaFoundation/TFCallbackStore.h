@class NSMutableDictionary;

@interface TFCallbackStore : NSObject

@property (readonly, nonatomic) NSMutableDictionary *store;

- (id)lookupForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)storeCallbackDefinition:(id)a0 forKey:(id)a1 scope:(id)a2;

@end
