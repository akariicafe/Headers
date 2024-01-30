@class PLPhotoLibrary, NSString, NSArray, PLManagedAsset, NSOrderedSet, NSDate, NSIndexSet, NSMutableIndexSet;

@interface PLAvalanche : NSObject <PLAssetContainer, PLAssetChangeObserver>

@property (retain, nonatomic) NSOrderedSet *assets;
@property (retain, nonatomic) NSIndexSet *_originalAutoPickIndexes;
@property (retain, nonatomic) NSMutableIndexSet *_autoPickIndexes;
@property (retain, nonatomic) NSIndexSet *_originalUserFavoriteIndexes;
@property (retain, nonatomic) NSMutableIndexSet *_userFavoriteIndexes;
@property (nonatomic) unsigned long long _originalStackIndex;
@property (nonatomic) unsigned long long _stackIndex;
@property (retain, nonatomic, setter=_setANewPick:) PLManagedAsset *_aNewPick;
@property (retain, nonatomic, setter=_setAnOldPick:) PLManagedAsset *_anOldPick;
@property (copy, nonatomic, setter=_setCompletionHandler:) id /* block */ _completionHandler;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long approximateCount;
@property (readonly, nonatomic) unsigned long long assetsCount;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (readonly, nonatomic) unsigned long long videosCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)assetsWithAvalancheUUID:(id)a0 inManagedObjectContext:(id)a1;
+ (void)disolveBurstForAssets:(id)a0 permanently:(BOOL)a1;
+ (void)updateMembershipForAssets:(id)a0 autoPicks:(id)a1 stackAsset:(id)a2 userFavorites:(id)a3 deleteNonPicks:(BOOL)a4 allowDissolve:(BOOL)a5 inLibrary:(id)a6;
+ (BOOL)shouldOnlyShowAvalanchePicks;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfTopImageInStackForStackFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (BOOL)_allowMPSmodificationForBurstChangesOnLibrary:(id)a0;
+ (unsigned long long)_calculateStackAssetForAssetCount:(unsigned long long)a0 autoPicks:(id)a1 userFavorites:(id)a2;
+ (id)updatePropertiesForAssets:(id)a0 autoPicks:(id)a1 stackAsset:(id)a2 userFavorites:(id)a3 deleteNonPicks:(BOOL)a4 setFirstPick:(BOOL)a5 allowDissolve:(BOOL)a6;
+ (unsigned long long)countForAssetsWithAvalancheUUID:(id)a0 inLibrary:(id)a1;
+ (BOOL)shouldHideAvalanchesFromPhotoStream;
+ (void)handleUpdatesForContextWillSave:(id)a0;
+ (void)removeFavoriteStatus:(id)a0;
+ (BOOL)isValidBurstWithAssets:(id)a0;
+ (id)revalidateAvalancheAssets:(id)a0 inLibrary:(id)a1 deleteNonPicks:(BOOL)a2 allowDissolve:(BOOL)a3;
+ (id)_fetchRequestForAssetsWithAvalancheUUID:(id)a0;
+ (id)supportedSavedAssetTypes;
+ (id)_visibleIndexesAmongAssets:(id)a0 fromUserFavoriteIndexes:(id)a1 stackIndex:(unsigned long long)a2;
+ (id)_assetAmongAssets:(id)a0 fromIndexes:(id)a1 excludingIndexes:(id)a2;

- (BOOL)canPerformEditOperation:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)assetsDidChange:(id)a0;
- (id)stackAsset;
- (id)userFavorites;
- (id)initWithUUID:(id)a0 photoLibrary:(id)a1;
- (void)applyTrashedState:(short)a0;
- (void)applyChangesAndDeleteNonPicks:(BOOL)a0 currentContainer:(id)a1 completionHandler:(id /* block */)a2;
- (void)_recalculateStackAsset;
- (void)addUserFavorite:(id)a0;
- (void)removeUserFavorite:(id)a0;
- (BOOL)isUserFavorite:(id)a0;
- (BOOL)isAutoPick:(id)a0;
- (id)proposedStackAssetAfterRemovingFavorite:(id)a0;
- (id)autoPicks;

@end
