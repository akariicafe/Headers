@class NSArray, NSObject;
@protocol OS_dispatch_queue, PUSearchZeroKeywordChangeDelegate;

@interface PUSearchZeroKeywordDataSource : NSObject

@property (nonatomic) BOOL fetchInProgress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fetchQueue;
@property (copy, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<PUSearchZeroKeywordChangeDelegate> delegate;

+ (id)_fetchAssetsWithLocalIdentifiers:(id)a0;
+ (id)_fetchAssetCollectionsForIdentifiers:(id)a0;
+ (id)_personsByLocalIdentifiers:(id)a0 allUniqueLocalIdentifiers:(id)a1;
+ (void)_fetchKeyAssetsForAssetCollectionViewModels:(id)a0;
+ (id)_fetchKeyAssetOfAssetCollection:(id)a0 withOptions:(id)a1;
+ (id)_meaningViewModelForKeywordDictionary:(id)a0;
+ (id)zeroKeywordLog;
+ (id)_placeViewModelForKeywordDictionary:(id)a0;
+ (id)_holidayViewModelForKeywordDictionary:(id)a0;
+ (id)_zeroKeywordsFromDefaultKeywordStore;
+ (id)_socialGroupsByKeywordwithPersonsByLocalIdentifier:(id)a0 socialGroupZeroKeywords:(id)a1;
+ (id)_uniquePersonLocalIdentifiersForZeroKeywords:(id)a0;
+ (id)_fetchOptionsForPersonFetching;
+ (id)_sceneViewModelForKeywordDictionary:(id)a0;
+ (id)_personViewModelForKeywordDictionary:(id)a0 person:(id)a1;
+ (void)_fetchAssetsForAssetViewModels:(id)a0;
+ (id)_fetchKeyAssetForSceneIdentifier:(int)a0;
+ (id)_fetchFinalMergeTargetPersonForPersonLocalIdentifier:(id)a0;
+ (id)_seasonViewModelForKeywordDictionary:(id)a0;
+ (id)_dateViewModelForKeywordDictionary:(id)a0;
+ (id)_personsForLocalIdentifiers:(id)a0;
+ (id)_sectionsForZeroKeywords:(id)a0 personsByLocalIdentifier:(id)a1;
+ (id)_socialGroupViewModelForKeywordDictionary:(id)a0 peopleByKeyword:(id)a1;
+ (id)_homeViewModelForKeywordDictionary:(id)a0;

- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (long long)sectionForSectionType:(long long)a0;
- (long long)indexForPlaceKey:(id)a0;
- (id)viewModelForIndexPath:(id)a0;
- (BOOL)_shouldFetchItems;
- (id)_zeroKeywordsFromDefaultKeywordStore;
- (id)tapToRadarAttachments;
- (id)description;
- (long long)sectionTypeForSection:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)fetchItems;
- (BOOL)hasZeroKeywords;
- (id)titleForSection:(unsigned long long)a0;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;
- (id)debugDictionary;

@end
