@interface TSCHChartCategoryAxis : TSCHChartAxis

+ (id)axisForInfo:(id)a0;
+ (unsigned char)styleOwnerPathType;

- (id)defaultProperties;
- (unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)a0;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)a0;
- (BOOL)isCategory;
- (struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *> { id x0; id x1; })labelEnumeratorPair;
- (int)specificPropertyForGeneric:(int)a0;
- (BOOL)isRangeContinuous;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)a0;
- (id)g_genericToSpecificPropertyMap;
- (id)p_getGenericToCategoryPropertyMapForMultiData;
- (id)p_getGenericToCategoryPropertyMapForNonMultiData;
- (id)p_getGenericToCategoryPropertyMap;

@end
