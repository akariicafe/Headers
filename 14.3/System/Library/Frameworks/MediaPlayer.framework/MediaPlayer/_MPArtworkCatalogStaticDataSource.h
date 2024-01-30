@class NSString;

@interface _MPArtworkCatalogStaticDataSource : NSObject <MPArtworkDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDataSource;

- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (void)loadRepresentationOfKind:(long long)a0 forArtworkCatalog:(id)a1 completionHandler:(id /* block */)a2;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (BOOL)areRepresentationsOfKind:(long long)a0 availableForCatalog:(id)a1;
- (id)existingRepresentationOfKind:(long long)a0 forArtworkCatalog:(id)a1;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;

@end
