@class NSString, NSCache;

@interface _MPArtworkCatalogPlaceholderDataSource : NSObject <MPArtworkDataSource> {
    NSCache *_fallbackCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDataSource;

- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (void).cxx_destruct;
- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;

@end
