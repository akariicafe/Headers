@class NSMutableArray, NSHashTable;

@interface PXPhotosDetailsLoadCoordinator : NSObject

@property (readonly, nonatomic) NSHashTable *_tokens;
@property (readonly, nonatomic) NSMutableArray *_relatedBlocks;
@property (readonly, nonatomic) NSMutableArray *_suggestionsBlocks;
@property (nonatomic) double timeoutDelay;

+ (id)loadCoordinatorForContext:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)_createToken;
- (id)tokenForCuratedFetch;
- (id)tokenForLivePhotoVariations;
- (void)performBlockWhenReadyToFetchRelated:(id /* block */)a0;
- (void)performBlockWhenReadyToFetchSuggestions:(id /* block */)a0;
- (void)_tokenDidComplete:(id)a0;
- (BOOL)_canPerformRelatedFetch;
- (BOOL)_canPerformSuggestionsFetch;

@end
