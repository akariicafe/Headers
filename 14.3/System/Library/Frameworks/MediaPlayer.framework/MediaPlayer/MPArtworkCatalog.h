@class NSString, MPArtworkRepresentationCollection, NSCache;
@protocol MPArtworkDataSourceVisualIdenticality, MPArtworkDataSource;

@interface MPArtworkCatalog : NSObject {
    long long _modelRevisionID;
}

@property (readonly, nonatomic) long long MP_artworkType;
@property (copy, nonatomic) NSString *cacheIdentifier;
@property (weak, nonatomic) id requestingContext;
@property (weak, nonatomic) id destination;
@property (copy, nonatomic) id /* block */ configurationBlock;
@property (nonatomic) unsigned long long representationKinds;
@property (retain, nonatomic) MPArtworkRepresentationCollection *bestAvailableRepresentationCollection;
@property (getter=isLoadingRepresentation) BOOL loadingRepresentation;
@property (readonly, nonatomic) id token;
@property (readonly, weak, nonatomic) id<MPArtworkDataSource> dataSource;
@property (readonly, nonatomic) NSCache *cache;
@property (readonly, nonatomic) NSCache *videoCache;
@property (readonly, nonatomic) id<MPArtworkDataSourceVisualIdenticality> visualIdenticalityIdentifier;
@property (nonatomic) unsigned long long renderHint;
@property (nonatomic) unsigned long long videoCacheStoragePolicy;
@property (nonatomic) double destinationScale;
@property (nonatomic) struct CGSize { double width; double height; } fittingSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } scaledFittingSize;
@property (readonly, nonatomic) BOOL hasImageOnDisk;
@property (nonatomic) BOOL allowsVideoConstrainedNetworkAccess;
@property (nonatomic) long long preferredVideoFormat;

+ (void)setCacheLimit:(long long)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2 representationKind:(long long)a3;
+ (id)_artworkLoadQueue;
+ (id)staticArtworkCatalogWithImage:(id)a0;
+ (id)staticArtworkCatalogWithRepresentationCollection:(id)a0;
+ (void)setCachePurgesWhenEnteringBackground:(BOOL)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2 representationKind:(long long)a3;
+ (void)setCachePurgesWhenEnteringBackground:(BOOL)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2;
+ (id)_artworkCacheForIdentifier:(id)a0 requestingContext:(id)a1 representationKind:(long long)a2;
+ (void)setCacheLimit:(long long)a0 forCacheIdentifier:(id)a1 requestingContext:(id)a2;

- (void)requestExportableArtworkPropertiesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_loadBestRepresentationIfNeededOfKind:(long long)a0;
- (id)_existingRepresentationOfKind:(long long)a0;
- (void)_loadRepresentationOfKind:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_updateRepresentationOfKind:(long long)a0;
- (void)setDestination:(id)a0 forRepresentationKinds:(unsigned long long)a1 configurationBlock:(id /* block */)a2;
- (void)dealloc;
- (void)setDestination:(id)a0 configurationBlock:(id /* block */)a1;
- (void)_updateWithRepresentation:(id)a0 isBestRepresentation:(BOOL)a1 modelRevisionID:(long long)a2;
- (id)bestImageFromDisk;
- (void)_requestBestRepresentationOfKind:(long long)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)hash;
- (void)setCacheIdentifier:(id)a0 forRequestingContext:(id)a1;
- (void)requestColorAnalysisWithAlgorithm:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_updateRepresentations;
- (BOOL)isArtworkVisuallyIdenticalToCatalog:(id)a0;
- (id)description;
- (id)initWithToken:(id)a0 dataSource:(id)a1;
- (void)requestVideoWithCompletionHandler:(id /* block */)a0;
- (id)existingColorAnalysisWithAlgorithm:(long long)a0;
- (void)requestImageWithCompletionHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (void)requestRadiosityImageWithCompletionHandler:(id /* block */)a0;
- (void)setPreferredVideoKind:(long long)a0;
- (void)setDestination:(id)a0 progressiveConfigurationBlock:(id /* block */)a1;

@end
