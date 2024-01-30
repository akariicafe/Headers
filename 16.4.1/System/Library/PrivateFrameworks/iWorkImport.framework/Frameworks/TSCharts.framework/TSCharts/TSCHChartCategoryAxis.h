@interface TSCHChartCategoryAxis : TSCHChartAxis

+ (id)axisForInfo:(id)a0;
+ (unsigned char)styleOwnerPathType;

- (id)defaultProperties;
- (id)computeMajorGridlinesFromMinMaxInAnalysis:(id)a0;
- (id)g_genericToSpecificPropertyMap;
- (unsigned long long)indexForSelectionPathLabelIndex:(unsigned long long)a0;
- (BOOL)isCategory;
- (BOOL)isRangeContinuous;
- (struct pair<TSCH3DAxisLabelEnumerator *, TSCH3DAxisLabelEnumerator *> { id x0; id x1; })labelEnumeratorPair;
- (id)p_getGenericToCategoryPropertyMap;
- (id)p_getGenericToCategoryPropertyMapForMultiData;
- (id)p_getGenericToCategoryPropertyMapForNonMultiData;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)a0;
- (int)specificPropertyForGeneric:(int)a0;

@end
