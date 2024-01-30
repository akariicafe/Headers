@interface PGCommonTitleUtility : NSObject

+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })_closestSpaceMatchFromMatches:(id)a0 withUsedNameRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 searchForward:(BOOL)a2;
+ (id)addressNodesFromMomentNodes:(id)a0;
+ (id)bestAddressNodeForMomentNodes:(id)a0;
+ (BOOL)containsCelebrationForDateNodes:(id)a0 holidayName:(id *)a1 titleGenerationContext:(id)a2 graph:(id)a3;
+ (id)dateNodesFromMomentNodes:(id)a0;
+ (unsigned long long)dimensionForLabel:(id)a0;
+ (id)holidayNameForDateNodes:(id)a0;
+ (BOOL)isLargeCountryForAddressNode:(id)a0 locationHelper:(id)a1;
+ (id)locationLabelForDimension:(unsigned long long)a0;
+ (void)startAndEndDateNodeFromDateNodes:(id)a0 startDateNode:(id *)a1 endDateNode:(id *)a2;
+ (id)titleWithLineBreakForTitle:(id)a0;
+ (id)titleWithLineBreakForTitle:(id)a0 andUsedNames:(id)a1;
+ (id)titleWithNoLineBreakSpaceForTitle:(id)a0 andUsedNames:(id)a1;

@end
