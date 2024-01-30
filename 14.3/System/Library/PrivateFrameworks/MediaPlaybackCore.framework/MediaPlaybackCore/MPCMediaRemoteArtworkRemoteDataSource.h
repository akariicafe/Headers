@class NSString, MPCMediaRemoteController;

@interface MPCMediaRemoteArtworkRemoteDataSource : NSObject <MPArtworkDataSource>

@property (readonly, weak, nonatomic) MPCMediaRemoteController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)existingRepresentationForArtworkCatalog:(id)a0;
- (void).cxx_destruct;
- (BOOL)areRepresentationsAvailableForCatalog:(id)a0;
- (id)visualIdenticalityIdentifierForCatalog:(id)a0;
- (id)initWithController:(id)a0;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)a0;
- (void)loadRepresentationForArtworkCatalog:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRepresentation:(id)a0 bestRepresentationForArtworkCatalog:(id)a1;

@end
