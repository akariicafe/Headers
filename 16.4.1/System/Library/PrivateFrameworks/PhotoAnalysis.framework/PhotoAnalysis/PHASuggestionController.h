@class NSMutableArray, NSArray, PGManager, NSObject;
@protocol OS_os_log;

@interface PHASuggestionController : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    NSMutableArray *_existingSuggestions;
    NSMutableArray *_suggestionsToRetire;
    NSMutableArray *_suggestionsToDelete;
    NSArray *_cachedFeaturedSuggestions;
    unsigned long long _newFeaturedSuggestionsCount;
}

@property (readonly, nonatomic) NSArray *existingSuggestions;
@property (retain, nonatomic) NSArray *existingMemories;
@property (readonly, nonatomic) unsigned long long newFeaturedSuggestionsCount;
@property (readonly, nonatomic) PGManager *graphManager;

+ (id)availableSuggestionTypeInfosWithProfile:(unsigned char)a0;
+ (double)_maximumDurationBeforeDeletionForSuggestionType:(unsigned short)a0 andSubtype:(unsigned short)a1;
+ (unsigned long long)_retirementDelayInDaysForSuggestionType:(unsigned short)a0 andSubtype:(unsigned short)a1;

- (id)initWithGraphManager:(id)a0;
- (void).cxx_destruct;
- (id)_forbiddenAssetUUIDs;
- (id)_existingSuggestionsForProfile:(unsigned char)a0;
- (BOOL)_canFeatureSuggestion:(id)a0;
- (id)_createSuggestionSessionWithProfile:(unsigned char)a0;
- (id)_suggestionsToReuseWithSuggestionSession:(id)a0 numberOfSuggestionsToReuse:(unsigned long long)a1;
- (void)cacheWidgetSuggestionsWithCurrentlyFeaturedState;
- (id)collidableMemoriesWithReferenceDate:(id)a0 andDelay:(double)a1;
- (id)collidableSuggestionsWithOptions:(id)a0;
- (id)commitSuggestions:(id)a0 retiringSuggestions:(id)a1 deletingSuggestions:(id)a2 withOptions:(id)a3 error:(id *)a4;
- (id)deniedSuggestionsForProfile:(unsigned char)a0;
- (BOOL)existingWallpaperSuggestion:(id)a0 matchesSuggestion:(id)a1;
- (id)existingWallpaperSuggestionByKeyAssetUUIDWithSubtypes:(id)a0;
- (id)generateOnThisDayAssetSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)generateSharingSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)generateSingleAssetSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)generateSuggestionsWithProfile:(unsigned char)a0 options:(id)a1 progress:(id /* block */)a2;
- (id)generateWallpaperSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)generateWidgetSuggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (void)ingestExistingSuggestionsWithOptions:(id)a0;
- (void)ingestSuggestions:(id)a0 atDate:(id)a1;
- (id)pendingOnThisDayMemories;
- (void)processWallpaperSuggestions:(id)a0 forRecyclingWithExistingWallpaperSuggestionByKeyAssetUUID:(id)a1 resultBlock:(id /* block */)a2;
- (void)recordCreatedSuggestions:(id)a0 duringSession:(id)a1;
- (void)recordDeletedSuggestions:(id)a0;
- (void)recordRetiredSuggestions:(id)a0;
- (BOOL)shouldDeleteSuggestion:(id)a0 atDate:(id)a1;
- (BOOL)shouldRetireSuggestion:(id)a0 atDate:(id)a1;
- (id)suggestionInfosWithOptions:(id)a0;

@end
