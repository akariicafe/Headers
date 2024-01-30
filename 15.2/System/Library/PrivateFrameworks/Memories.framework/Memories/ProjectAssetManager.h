@class MBProjectClipsLoader, NSDictionary, NSArray, Project, NSSet, NSString;
@protocol ProjectAssetManagerDelegate;

@interface ProjectAssetManager : NSObject <PHAssetRepresentationDownloadObserver>

@property (weak, nonatomic) Project *project;
@property (retain, nonatomic) NSDictionary *movieMatches;
@property (retain, nonatomic) MBProjectClipsLoader *sharedClipsLoader;
@property (nonatomic) BOOL cacheRepairableEditItems;
@property (retain, nonatomic) NSArray *cachedRepairableEditItems;
@property unsigned long long numberOfWorkItems;
@property unsigned long long numberOfCompletedWorkItems;
@property (nonatomic) double downloadProgress;
@property (nonatomic, getter=isDownloading) BOOL downloading;
@property (retain, nonatomic) NSSet *offlineAssetRepresentations;
@property (nonatomic) BOOL automaticallyStartDownloads;
@property (weak, nonatomic) id<ProjectAssetManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithProject:(id)a0;
- (void)dealloc;
- (void)cancelDownloads;
- (BOOL)hasMissingAssets;
- (void)connectivityDidChange:(id)a0;
- (void)projectDidFinishAllEditing:(id)a0;
- (id)repairableEditItems;
- (id)editItemsMatchingCriteria:(long long)a0 breakOnFirst:(BOOL)a1;
- (id)assetURLsMatchingCriteria:(long long)a0 breakOnFirst:(BOOL)a1;
- (unsigned long long)numberOfAssetsMatchingCriteria:(long long)a0;
- (void)downloadOfflineAssetsIfNecessary;
- (BOOL)hasOfflineAssets;
- (void)updateDownloadProgress;
- (void)_updateDownloadProgress;
- (id)predicateForDuration:(double)a0;
- (id)predicateForCreationDate:(id)a0 tolerance:(double)a1;
- (id)fetchOptionsForEditItem:(id)a0 creationDateTolerance:(double)a1;
- (id)mismatchedEditItems;
- (id)matchingAssetsForEditItem:(id)a0 creationDateTolerance:(double)a1;
- (void)repairEditItems:(id)a0;
- (id)matchLocalMovies;
- (id)matchLibraryAssets;
- (void)postProgressNotification;
- (id)filePathForAdjustedVideoIdentifierURL:(id)a0;
- (id)projectOriginalImageForIdentifierURL:(id)a0;
- (id)localOriginalImageForIdentifierURL:(id)a0;
- (void)downloadStateOfAssetRepresentationDidChange:(id)a0 previousState:(unsigned long long)a1 currentState:(unsigned long long)a2;
- (void)downloadOfAssetRepresentation:(id)a0 didProgress:(double)a1;
- (unsigned long long)numberOfMissingAssets;
- (void)hasAssetsInPhotosTrash:(id /* block */)a0;
- (unsigned long long)numberOfMismatchedAssets;
- (id)mismatchedDurationEditItems;
- (BOOL)hasMismatchedAssets;
- (BOOL)hasMismatchedDurationAssets;
- (BOOL)hasModifiedAssets;
- (unsigned long long)numberOfOfflineAssets;
- (id)offlineEditItems;
- (void)repairMissingAssets;
- (void)repairMismatchedAssets;
- (BOOL)hasProjectAssetForIdentifierURL:(id)a0;
- (id)originalImageForIdentifierURL:(id)a0;
- (id)missingEditItems;

@end
