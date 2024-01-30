@interface PXPeopleUtilities : NSObject

+ (id)changePerson:(id)a0 toPersonType:(long long)a1;
+ (void)_peopleFaceTilesForFaces:(id)a0 asset:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (BOOL)_hasRecentlyHandledBootstrapForPerson:(id)a0;
+ (BOOL)isFavoritePerson:(id)a0;
+ (id)generateNewFaceTileFromFaceTile:(id)a0;
+ (id)titleStringForPeople:(id)a0;
+ (id)identifiersForPeople:(id)a0;
+ (id)bootstrapViewControllerForContext:(id)a0 delegate:(id)a1;
+ (id /* block */)_manualOrderComparator;
+ (void)markHandledBootstrapForPerson:(id)a0;
+ (id)facesForPerson:(id)a0 inAssets:(id)a1;
+ (id)finalMergeTargetPersonForPersonWithUUID:(id)a0;
+ (BOOL)showBootstrapIfNeededWithContext:(id)a0 fromParentVC:(id)a1;
+ (id)peopleWithPersonUris:(id)a0;
+ (id)sharedContactStore;
+ (id)_peopleHomeFetchResultForPersonType:(long long)a0;
+ (void)peopleFaceTilesForAsset:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (id)personWithLocalIdentifier:(id)a0;
+ (id)assetCollectionListFetchResultForPerson:(id)a0;
+ (BOOL)isPersonHiddenFromPeopleHome:(id)a0;
+ (void)peopleFaceTilesForFaces:(id)a0 asset:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (id)memoryTitleStringFromPeople:(id)a0;
+ (BOOL)showBootstrapIfNeededWithContext:(id)a0 fromParentVC:(id)a1 delegate:(id)a2;
+ (long long)manualOrderForInsertingAtEndOfSectionWithType:(long long)a0;
+ (BOOL)changePeople:(id)a0 toPersonType:(long long)a1 error:(id *)a2;
+ (id)slideshowTitleStringForPeople:(id)a0;
+ (id /* block */)comparatorForFetchType:(unsigned long long)a0;
+ (id)alertControllerForBlockingPerson:(id)a0 completion:(id /* block */)a1;
+ (id)alertControllerForResettingPeopleWithCompletion:(id /* block */)a0;
+ (void)mergePersons:(id)a0 withPerson:(id)a1;
+ (void)_setDaysDictionary:(id)a0;
+ (id)sortDescriptorsForManualSort;
+ (id)alertControllerForRemovingNumberOfPeople:(long long)a0 completionBlock:(id /* block */)a1;
+ (BOOL)shouldShowBootstrapForPerson:(id)a0;
+ (BOOL)showBootstrapIfNeededWithContext:(id)a0 fromParentVC:(id)a1 force:(BOOL)a2 delegate:(id)a3;
+ (id)_daysDictionary;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })faceRectForPeopleFaceTile:(id)a0;
+ (id)_titleStringForPeople:(id)a0 singlePersonFallback:(id)a1 groupFallback:(id)a2;
+ (id)personWithPersonUri:(id)a0;
+ (id)personFaceTileByPersonIdForPersons:(id)a0;

@end
