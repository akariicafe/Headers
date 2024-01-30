@class SALocalSearchMapItem;

@interface SALocalSearchAddItemToMapCache : SADomainCommand

@property (retain, nonatomic) SALocalSearchMapItem *mapItem;

+ (id)addItemToMapCache;
+ (id)addItemToMapCacheWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
