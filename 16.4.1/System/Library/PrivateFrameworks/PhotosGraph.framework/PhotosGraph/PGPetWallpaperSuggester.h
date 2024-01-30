@class PGPetWallpaperSuggesterFilteringContext, CLSSceneConfidenceThresholdHelper, PGWallpaperSuggestionAssetGater;

@interface PGPetWallpaperSuggester : PGAbstractSuggester {
    PGWallpaperSuggestionAssetGater *_assetGater;
    CLSSceneConfidenceThresholdHelper *_peopleSceneConfidenceThresholdHelper;
}

@property (retain, nonatomic) PGPetWallpaperSuggesterFilteringContext *filteringContext;

+ (id)suggestionTypes;
+ (BOOL)candidate:(id)a0 passesFilteringWithContext:(id)a1 curationContext:(id)a2 thresholdHelper:(id)a3 statistics:(struct { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; struct { unsigned int x0; } x13; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x14; } x11; } *)a4;
+ (BOOL)filtersForTopPets;
+ (BOOL)passesFilteringWithAsset:(id)a0 curationContext:(id)a1 reason:(id *)a2;
+ (unsigned short)petWallpaperSuggestionSubtype;
+ (id)prefilteringInternalPredicateWithContext:(id)a0;
+ (id)suggestionSubtypes;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (id)candidatesForPet:(id)a0;
- (id)fetchPets;
- (id)rankedAndDedupedCandidatesFromCandidates:(id)a0;
- (id)sortedCandidatesByPetLocalIdentifierFromPets:(id)a0 progressReporter:(id)a1;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
