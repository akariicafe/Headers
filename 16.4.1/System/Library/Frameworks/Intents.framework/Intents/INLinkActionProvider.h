@class NSDictionary;

@interface INLinkActionProvider : NSObject

@property (class, readonly, nonatomic) INLinkActionProvider *sharedProvider;

@property (retain, nonatomic) NSDictionary *cachedActions;
@property (retain, nonatomic) NSDictionary *cachedEntities;
@property (readonly, nonatomic) NSDictionary *actionsGroupedByBundleIdentifier;
@property (readonly, nonatomic) NSDictionary *entitiesGroupedByBundleIdentifier;

- (id)metadataProvider;
- (void).cxx_destruct;
- (void)cacheActions:(id)a0;
- (void)cacheEntities:(id)a0;
- (void)evictCache;
- (id)supportedActionIdentifiersForBundleIdentifier:(id)a0;
- (id)supportedEntityIdentifiersForBundleIdentifier:(id)a0;

@end
