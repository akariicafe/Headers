@interface CLSNewLocationInformant : CLSInformant

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)businessItemsForRegion:(id)a0;
+ (id)informantDependenciesIdentifiers;
+ (BOOL)location:(struct CLLocationCoordinate2D { double x0; double x1; })a0 isCloseToLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)_categoriesDescriptionFromCategories:(id)a0;
+ (id)areaOfInterestCategories;
+ (id)createPlaceForBusinessItem:(id)a0;
+ (BOOL)doesRegion:(id)a0 containLocation:(id)a1;
+ (BOOL)doesRegion:(id)a0 intersectOtherRegion:(id)a1;
+ (id)filterBusinessItems:(id)a0 forCategories:(id)a1 subCategories:(id)a2 blocklistCategories:(id)a3;
+ (BOOL)location:(struct CLLocationCoordinate2D { double x0; double x1; })a0 isFarFromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a1;
+ (id)natureCategories;
+ (id)pointOfInterestCategories;
+ (id)regionOfInterestCategories;
+ (id)searchBusinessItemsAtCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a0 forCategories:(id)a1 precision:(double)a2 inCache:(id)a3;
+ (struct CLLocationCoordinate2D { double x0; double x1; })shiftedCoordinatesFromOriginalCoordinates:(struct CLLocationCoordinate2D { double x0; double x1; })a0;
+ (id)shiftedLocationFromOriginalLocation:(id)a0;

- (id)_pointOfInterestTraits;
- (id)_regionOfInterestCategories;
- (id)_regionOfInterestTraits;
- (id)gatherCluesForInvestigation:(id)a0 progressBlock:(id /* block */)a1;
- (id)locationAreaOfInterestCluesForInputClue:(id)a0;
- (id)locationPointOfInterestCluesForInputClue:(id)a0;
- (id)locationRegionOfInterestCluesForInputClue:(id)a0;
- (id)outputLocationCluesForOuputClueKey:(id)a0 inputClue:(id)a1 region:(id)a2 traits:(id)a3 categories:(id)a4 exactMatch:(BOOL)a5 precision:(double)a6 cache:(id)a7;

@end
