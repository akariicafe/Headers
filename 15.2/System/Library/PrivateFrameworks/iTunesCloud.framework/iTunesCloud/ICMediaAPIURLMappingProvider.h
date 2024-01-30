@interface ICMediaAPIURLMappingProvider : NSObject

@property (class, readonly, nonatomic) ICMediaAPIURLMappingProvider *sharedProvider;

- (id)getCurrentURLMappingSet;
- (void)updateURLMappingsWithCompletion:(id /* block */)a0;
- (void)clearCachedURLMappings;
- (void)setCurrentURLMappingSet:(id)a0;
- (id)_cacheFileURL;
- (id)_loadCacheDictionary;
- (void)_saveCachedResponsePayload:(id)a0 eTag:(id)a1;

@end
