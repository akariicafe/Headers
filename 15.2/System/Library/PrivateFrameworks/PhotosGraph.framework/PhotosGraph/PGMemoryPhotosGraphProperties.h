@class PHPhotoLibrary, NSObject, PGNeighborScoreComputer;
@protocol PGEnrichedMemoryProtocol, OS_os_log;

@interface PGMemoryPhotosGraphProperties : NSObject {
    id<PGEnrichedMemoryProtocol> _enrichedMemory;
    PHPhotoLibrary *_photoLibrary;
    PGNeighborScoreComputer *_neighborScoreComputer;
    NSObject<OS_os_log> *_loggingConnection;
    BOOL _isAppleMusicSubscriber;
}

+ (id)_storyRecipeSongCatalogForAppleMusicSubscriber:(BOOL)a0;

- (long long)sourceType;
- (id)infoDictionary;
- (id)musicGenreDistribution;
- (BOOL)isTriggered;
- (void).cxx_destruct;
- (id)dictionary;
- (unsigned long long)numberOfMoments;
- (id)personLocalIdentifiers;
- (id)encodedFeatures;
- (id)initWithEnrichedMemory:(id)a0 neighborScoreComputer:(id)a1 isAppleMusicSubscriber:(BOOL)a2 photoLibrary:(id)a3 loggingConnection:(id)a4;
- (id)triggerTypesArray;
- (id)featureVectorV1;
- (id)featureVectorV2;
- (long long)phTitleCategory;
- (id)encodedBlockableFeatures;
- (id)infoForBackingMoments;
- (id)infoForGraphCollection;
- (id)_recipeFromEnrichedMemory:(id)a0 subscriberCatalog:(id)a1 applyColorGrading:(BOOL)a2 loggingConnection:(id)a3;

@end
