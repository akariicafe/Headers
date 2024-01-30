@class MPModelForYouRecommendationsResponse, NSArray, NSSet, NMSMutableMediaSyncInfo, NSOrderedSet, MPModelStoreBrowseResponse, NSMutableOrderedSet, NSMapTable, MPModelResponse;

@interface NMSMusicRecommendationsRequestContext : NSObject {
    NSMutableOrderedSet *_recentMusicModelObjects;
    NSMapTable *_modelObjectSectionMap;
}

@property (nonatomic) unsigned long long minimumNumberOfRecentMusicModelObjects;
@property (retain, nonatomic) MPModelForYouRecommendationsResponse *forYouResponse;
@property (retain, nonatomic) MPModelResponse *libraryRecentMusicResponse;
@property (retain, nonatomic) MPModelStoreBrowseResponse *editorialBrowseResponse;
@property (retain, nonatomic) MPModelResponse *lookupResponse;
@property (retain, nonatomic) NSArray *importedObjects;
@property (readonly, nonatomic) unsigned long long numberOfRecentMusicModelObjects;
@property (readonly, nonatomic) NSSet *modelObjects;
@property (readonly, nonatomic) NMSMutableMediaSyncInfo *importedStoreContainerItemMappings;
@property (readonly, nonatomic) NSOrderedSet *recommendations;

- (void)_processResponsesIfNeeded;
- (void).cxx_destruct;
- (BOOL)_recentMusicContainsModelObject:(id)a0;

@end
