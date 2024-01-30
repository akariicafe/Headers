@interface PGLocationTitleUtility : NSObject

+ (id)_peopleLocationFromAddressNode:(id)a0;
+ (id)_aoiSubsetsFromAOI:(id)a0 idx:(unsigned long long)a1 currentSubset:(id)a2 subsetSize:(unsigned long long)a3;
+ (id)_aoiSubsetsFromAOI:(id)a0 maxSubsetSize:(unsigned long long)a1;
+ (id)_beautifiedLocationStringWithTitleComponents:(id)a0 momentNodes:(id)a1 lineBreakBehavior:(unsigned long long)a2 keyAssetAddressNode:(id)a3 curationAddressNodes:(id)a4 isMatchingKeyAsset:(BOOL *)a5 useDistrict:(BOOL)a6 allowFamilyHome:(BOOL)a7 showAllCities:(BOOL)a8 locationHelper:(id)a9;
+ (id)_commonAOIComponentsForMomentNodes:(id)a0 addressNodes:(id)a1 aoiDisplayType:(unsigned long long)a2 containsAmusementParkPOI:(BOOL)a3 locationHelper:(id)a4;
+ (id)_commonCityTitleComponentsFromMomentNodes:(id)a0 remainingAddressNodes:(id)a1 ignoredAddressNodes:(id)a2 incompleteLocationResolver:(id)a3 locationHelper:(id)a4;
+ (BOOL)_containsAmusementParkPOIFromMomentNodes:(id)a0;
+ (id)_filteredAOINodeCombinationsForCombinations:(id)a0 minSize:(unsigned long long)a1 maxSize:(unsigned long long)a2 maxTitleLength:(unsigned long long)a3 minNumberOfAssets:(unsigned long long)a4 aoiNodesToAddressNodesMapTable:(id)a5 assetCountByAddressNodeIdentifier:(id)a6 locationHelper:(id)a7;
+ (id)_filteredAOINodesForAddressNodes:(id)a0 aoiTitleMaximumLength:(unsigned long long)a1 locationHelper:(id)a2;
+ (id)_filteredAddressNodesWithAddressNodes:(id)a0 momentNodes:(id)a1 incompleteLocationResolver:(id)a2 filterSignificantLocationsOption:(unsigned long long)a3 locationHelper:(id)a4;
+ (id)_firstComponentInTimeFromComponents:(id)a0 momentNodes:(id)a1 curationAddressNodes:(id)a2 allowFamilyHome:(BOOL)a3;
+ (id)_localizedStringForMultipleLocationsWithFirstComponentForTitle:(id)a0 secondComponentForTitle:(id)a1 firstLocation:(id)a2 otherLocation:(id)a3;
+ (id)_localizedStringForTwoLocationsWithFirstComponentForTitle:(id)a0 secondComponentForTitle:(id)a1 firstLocation:(id)a2 otherLocation:(id)a3;
+ (id)_locationStringWithDistrictsFromTitleComponents:(id)a0 momentNodes:(id)a1 lineBreakBehavior:(unsigned long long)a2 allowFamilyHome:(BOOL)a3 locationHelper:(id)a4;
+ (id)_sortedAOINodeCombinationsForCombinations:(id)a0 aoiNodesToAddressNodesMapTable:(id)a1 assetCountByAddressNodeIdentifier:(id)a2 locationHelper:(id)a3;
+ (id)_sortedComponentsFromComponents:(id)a0;
+ (BOOL)_titleComponentsAreInSameSupersetCity:(id)a0 graph:(id)a1 locationHelper:(id)a2;
+ (id)_titleWithLineBreakBehavior:(unsigned long long)a0 forTitle:(id)a1 titleComponents:(id)a2;
+ (id)_twoPartLocationTitleWithFirstPartTitle:(id)a0 withDimension:(unsigned long long)a1 usedFirstPartLocationNode:(id)a2 addressNode:(id)a3 locationHelper:(id)a4;
+ (double)_weightForAreaNode:(id)a0 withAddressNodes:(id)a1;
+ (id)beautifiedLocationNodeStringWithPlaceNode:(id)a0 locationHelper:(id)a1;
+ (void)generateBusinessItemLocationWithOptions:(id)a0 result:(id /* block */)a1;
+ (void)generateHighlightLocationTitleForTripWithMomentNodes:(id)a0 lineBreakBehavior:(unsigned long long)a1 locationHelper:(id)a2 result:(id /* block */)a3;
+ (void)generateLocationTitleForTripWithMomentNodes:(id)a0 locationHelper:(id)a1 result:(id /* block */)a2;
+ (void)generateLocationTitleWithOptions:(id)a0 locationHelper:(id)a1 result:(id /* block */)a2;

@end
