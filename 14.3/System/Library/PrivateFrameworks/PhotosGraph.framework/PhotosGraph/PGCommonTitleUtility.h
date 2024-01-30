@interface PGCommonTitleUtility : NSObject

+ (id)addressNodesFromMomentNodes:(id)a0;
+ (BOOL)isLargeCountryForAddressNode:(id)a0;
+ (BOOL)locationIsInSupersetCategoryForAddressNode:(id)a0 dimension:(unsigned long long)a1;
+ (BOOL)locationIsInSupersetCategoryForLocationNode:(id)a0;
+ (id)closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 remapMatchingDimensionBlock:(id /* block */)a2;
+ (id)closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 reverse:(BOOL)a2;
+ (id)locationNodeWithDimension:(unsigned long long)a0 rootNode:(id)a1;
+ (BOOL)containsCelebrationForDateNodes:(id)a0 holidayName:(id *)a1;
+ (id)holidayNameForDateNodes:(id)a0;
+ (id)dateNodesFromMomentNodes:(id)a0;
+ (id)bestAddressNodeForMomentNodes:(id)a0;
+ (void)startAndEndDateNodeFromDateNodes:(id)a0 startDateNode:(id *)a1 endDateNode:(id *)a2;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_closestSpaceMatchFromMatches:(id)a0 withUsedNameRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 searchForward:(BOOL)a2;
+ (id)titleWithNoLineBreakSpaceForTitle:(id)a0 andUsedNames:(id)a1;
+ (id)titleWithLineBreakForTitle:(id)a0 andUsedNames:(id)a1;
+ (id)titleWithLineBreakForTitle:(id)a0;
+ (id)_closestLocationNodeFromLocationNode:(id)a0 withDimension:(unsigned long long)a1 remapMatchingDimensionBlock:(id /* block */)a2 reverse:(BOOL)a3;
+ (id)_locationLabelForDimension:(unsigned long long)a0;
+ (unsigned long long)dimensionForLabel:(id)a0;

@end
